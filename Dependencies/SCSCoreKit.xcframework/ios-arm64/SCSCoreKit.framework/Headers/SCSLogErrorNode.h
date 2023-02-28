//
//  SCSLogErrorNode.h
//  SCSCoreKit
//
//  Created by glaubier on 25/03/2019.
//  Copyright © 2019 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>
#if TARGET_OS_IOS || (TARGET_OS_IPHONE && !TARGET_OS_TV)
#import <SCSCoreKit/SCSLogNode.h>
#elif TARGET_OS_TV
#import <SCSCoreKitTV/SCSLogNode.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@interface SCSLogErrorNode : SCSLogNode

/**
 Initialize the error node with all needed information.
 
 @param message    The error message to log.
 @param adResponse The adResponse associated with the log, if any.
 @param timeout    The timeout setting associated with the log, if any.
 
 @return A fully initialized instance of SCSLogErrorNode.
 */
- (instancetype)initWithErrorMessage:(NSString *)message
                          adResponse:(nullable NSString *)adResponse
                  timeoutSettingTime:(NSTimeInterval)timeout __deprecated;

/**
 Initialize the error node with all needed information.
 
 @param message           The error message to log.
 @param adResponse        The adResponse associated with the log, if any.
 @param timeout           The timeout setting associated with the log, if any.
 @param adCallUrlString   The URL used for the ad call that failed.
 @param adCallJsonMessage The JSONObject (as a String) put as jsonMessage for the ad call that failed.
 
 @return A fully initialized instance of SCSLogErrorNode.
 */
- (instancetype)initWithErrorMessage:(NSString *)message
                          adResponse:(nullable NSString *)adResponse
                  timeoutSettingTime:(NSTimeInterval)timeout
                     adCallUrlString:(nullable NSString *)adCallUrlString
                   adCallJsonMessage:(nullable NSString *)adCallJsonMessage __deprecated;

/**
 Initialize the error node with all needed information.
 
 @param message           The error message to log.
 @param adResponse        The adResponse associated with the log, if any.
 @param adCallUrlString   The URL used for the ad call that failed.
 @param adCallJsonMessage The JSONObject (as a String) put as jsonMessage for the ad call that failed.
 
 @return A fully initialized instance of SCSLogErrorNode.
 */
- (instancetype)initWithErrorMessage:(NSString *)message
                          adResponse:(nullable NSString *)adResponse
                     adCallUrlString:(nullable NSString *)adCallUrlString
                   adCallJsonMessage:(nullable NSString *)adCallJsonMessage NS_DESIGNATED_INITIALIZER;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
