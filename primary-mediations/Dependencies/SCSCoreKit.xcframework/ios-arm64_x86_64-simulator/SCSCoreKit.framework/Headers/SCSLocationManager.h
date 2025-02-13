//
//  SCSLocationManager.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 23/03/2017.
//  Copyright © 2017 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>
#if TARGET_OS_IOS || (TARGET_OS_IPHONE && !TARGET_OS_TV)
#import <SCSCoreKit/SCSLocationProviderDelegate.h>
#elif TARGET_OS_TV
#import <SCSCoreKitTV/SCSLocationProviderDelegate.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@protocol SCSLocationManagerDataSource, SCSLocationProviderDelegate, SCSLocationProviderProtocol;
@class SCSLocation;

/**
 Retrieve and store the device location that must be used in ad calls.
 */
@interface SCSLocationManager : NSObject <SCSLocationProviderDelegate>

/// The location that must be used for ad calls or nil if no valid location can be found.
@property (nonatomic, readonly, nullable) SCSLocation *location;

/// The provider that is being used to retrieve location informations.
@property (nonatomic, strong, readonly) id <SCSLocationProviderProtocol> locationProvider;

- (instancetype)init NS_UNAVAILABLE;

/**
 Initialize a location manager with the default location provider.
 
 @param dataSource The location manager data source.
 @return An initialized instance of location manager.
 */
- (instancetype)initWithDataSource:(id <SCSLocationManagerDataSource>)dataSource;

/**
 Initialize a location manager.
 
 @param locationProvider The location provider that must be used to retrieve device actual location.
 @param dataSource The location manager data source.
 @return An initialized instance of location manager.
 */
- (instancetype)initWithLocationProvider:(id <SCSLocationProviderProtocol>)locationProvider dataSource:(id <SCSLocationManagerDataSource>)dataSource NS_DESIGNATED_INITIALIZER;

/**
 Start the automatic location update using the provider if possible. The automatic update will automatically stops
 if a location is retrieved.
 */
- (void)startProvider;

/**
 Start the automatic location update using the provider if possible. The automatic update will automatically stops
 if a location is retrieved.
 
 Note: the location updated handler is used for unit tests only. An ad call should never be delayed to wait for a
 location update in production code.
 
 @param locationUpdatedHandler Called when the location is actually updated.
 */
- (void)startProvider:(nullable void(^)(void))locationUpdatedHandler;

/**
 Manually stops the location update.
 */
- (void)stopProvider;

@end

NS_ASSUME_NONNULL_END
