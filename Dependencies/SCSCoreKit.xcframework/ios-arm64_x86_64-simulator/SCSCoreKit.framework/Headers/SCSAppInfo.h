//
//  SCSAppInfo.h
//  SCSCoreKit
//
//  Created by Thomas Geley on 23/03/2017.
//  Copyright © 2017 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>
#if TARGET_OS_IOS || (TARGET_OS_IPHONE && !TARGET_OS_TV)
#import <SCSCoreKit/SCSAppInfoProtocol.h>
#elif TARGET_OS_TV
#import <SCSCoreKitTV/SCSAppInfoProtocol.h>
#endif

NS_ASSUME_NONNULL_BEGIN

/**
 Default SCSAppInfo protocol implementation.
 */
@interface SCSAppInfo : NSObject <SCSAppInfo>

/// The shared instance of the SCSAppInfo object.
@property (class, nonatomic, readonly) SCSAppInfo *sharedInstance NS_SWIFT_NAME(shared);

@end

NS_ASSUME_NONNULL_END
