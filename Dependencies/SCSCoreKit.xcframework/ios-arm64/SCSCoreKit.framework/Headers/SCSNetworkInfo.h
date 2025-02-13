//
//  SCSNetworkInfo.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 22/03/2017.
//  Copyright © 2017 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>
#if TARGET_OS_IOS || (TARGET_OS_IPHONE && !TARGET_OS_TV)
#import <SCSCoreKit/SCSEnums.h>
#import <SCSCoreKit/SCSNetworkInfoProtocol.h>
#elif TARGET_OS_TV
#import <SCSCoreKitTV/SCSEnums.h>
#import <SCSCoreKitTV/SCSNetworkInfoProtocol.h>
#endif


NS_ASSUME_NONNULL_BEGIN

/**
 Default SCSNetworkInfo protocol implementation.
 */
@interface SCSNetworkInfo : NSObject <SCSNetworkInfo>

/// The shared instance of the SCSNetworkInfo object.
@property (class, nonatomic, readonly) SCSNetworkInfo *sharedInstance NS_SWIFT_NAME(shared);

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
