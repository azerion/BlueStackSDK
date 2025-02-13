//
//  SCSOpenMeasurementJSLibrary.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 25/08/2020.
//  Copyright © 2020 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SCSCoreKit/SCSOpenMeasurementManagerProvider.h>
#import <SCSCoreKit/SCSOpenMeasurementRemoteLoggerProtocol.h>
#import <SCSCoreKit/SCSURLSession.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Download and store an open measurement JS library that can be used in an SCSOpenMeasurementManager instance.
 */
@interface SCSOpenMeasurementJSLibrary : NSObject

/// YES if the component has fetched the OM JS library, NO otherwise.
@property (nonatomic, readonly) BOOL isReady;

/// The downloaded JS library script if any, nil otherwise.
@property (atomic, strong, nullable) NSString *libraryScript;

/**
 Initialize a new instance of SCSOpenMeasurementJSLibrary.
 
 @param provider An object implementing the SCSOpenMeasurementManagerProvider protocol.
 @param remoteLogger A object implementing the SCSOpenMeasurementRemoteLoggerProtocol protocol if remote logging should be supported, nil otherwise.
 @param urlSession The URL session that will be used for all network calls.
 @return An initialized instance of SCSOpenMeasurementJSLibrary.
 */
- (instancetype)initWithProvider:(id<SCSOpenMeasurementManagerProvider>)provider
                    remoteLogger:(nullable id<SCSOpenMeasurementRemoteLoggerProtocol>)remoteLogger
                      urlSession:(SCSURLSession *)urlSession __deprecated;

/**
 Initialize a new instance of SCSOpenMeasurementJSLibrary.
 
 @param provider An object implementing the SCSOpenMeasurementManagerProvider protocol.
 @param urlSession The URL session that will be used for all network calls.
 @return An initialized instance of SCSOpenMeasurementJSLibrary.
 */
- (instancetype)initWithProvider:(id<SCSOpenMeasurementManagerProvider>)provider
                      urlSession:(SCSURLSession *)urlSession NS_DESIGNATED_INITIALIZER;

/**
 Download or refresh the OM JS library.
 
 @note This method will not do anything if a refresh is still pending.
 */
- (void)refreshJSLibrary;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
