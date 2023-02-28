//
//  SCSFrameworkInfo.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 23/03/2017.
//  Copyright © 2017 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>
#if TARGET_OS_IOS || (TARGET_OS_IPHONE && !TARGET_OS_TV)
#import <SCSCoreKit/SCSFrameworkInfoProtocol.h>
#elif TARGET_OS_TV
#import <SCSCoreKitTV/SCSFrameworkInfoProtocol.h>
#endif

NS_ASSUME_NONNULL_BEGIN

/**
 Default SCSFrameworkInfo protocol implementation.
 */
@interface SCSFrameworkInfo : NSObject <SCSFrameworkInfo>

/// The shared instance of the SCSFrameworkInfo object.
@property (class, nonatomic, readonly) SCSFrameworkInfo *sharedInstance NS_SWIFT_NAME(shared);

@end

NS_ASSUME_NONNULL_END
