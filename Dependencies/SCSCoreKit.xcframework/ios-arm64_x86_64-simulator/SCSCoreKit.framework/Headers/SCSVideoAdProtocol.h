//
//  SCSVideoAdProtocol.h
//  SCSCoreKit
//
//  Created by Thomas Geley on 21/03/2017.
//  Copyright © 2017 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>
#if TARGET_OS_IOS || (TARGET_OS_IPHONE && !TARGET_OS_TV)
#import <SCSCoreKit/SCSVideoAdProtocol.h>
#elif TARGET_OS_TV
#import <SCSCoreKitTV/SCSVideoAdProtocol.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class SCSVASTAd;

/**
 A protocol for VideoAd objects created from a VAST compliant Ad.
 This video ad objects can be consumed by the client SDKs (VideoKit / DisplayKit)
 */
@protocol SCSVideoAdProtocol <NSObject>

/// An identifier for the video ad object.
@property (nonatomic, readonly, strong) NSString *adID;

/**
Indicates if the Ad is valid for consumption by the client SDK. This allow to define per SDK validation rules.

@return YES if the ad is valid, NO otherwise.
*/
- (BOOL)isValid;

/**
 Indicates if the Ad is valid for consumption by the client SDK. This allow to define per SDK validation rules.
 
 @param errorHandler A handler called if an error needs to be logged.
 @return YES if the ad is valid, NO otherwise.
 */
- (BOOL)isValidWithErrorHandler:(void(^)(SCSVASTError * _Nullable))errorHandler;

@end

NS_ASSUME_NONNULL_END
