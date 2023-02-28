//
//  SCSDeviceInfo.h
//  SCSCoreKit
//
//  Created by Thomas Geley on 23/03/2017.
//  Copyright © 2017 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AppTrackingTransparency/AppTrackingTransparency.h>
#if TARGET_OS_IOS || (TARGET_OS_IPHONE && !TARGET_OS_TV)
#import <SCSCoreKit/SCSDeviceInfoProtocol.h>
#elif TARGET_OS_TV
#import <SCSCoreKitTV/SCSDeviceInfoProtocol.h>
#endif

#define SCS_SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SCS_SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SCS_SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SCS_SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SCS_SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

@protocol SCSDeviceInfoProviderProtocol;

NS_ASSUME_NONNULL_BEGIN


/**
 Default SCSDeviceInfo protocol implementation.
 */
@interface SCSDeviceInfo : NSObject <SCSDeviceInfo>

/// The shared instance of the SCSDeviceInfo object.
@property (class, nonatomic, readonly) SCSDeviceInfo *sharedInstance NS_SWIFT_NAME(shared);

/**
 Retrieves device informations from the device info provider passed in parameters.

 @param infoProvider the device informations provider used to retrieve platform, system version and other capabilities.
 @return An initialized SCSDeviceInfo instance.
 */
- (instancetype)initWithInfoProvider:(id <SCSDeviceInfoProviderProtocol>)infoProvider NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
