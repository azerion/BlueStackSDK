//
//  SCSVASTAdWrapper.h
//  SCSCoreKit
//
//  Created by Thomas Geley on 21/03/2017.
//  Copyright © 2017 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>
#if TARGET_OS_IOS || (TARGET_OS_IPHONE && !TARGET_OS_TV)
#import <SCSCoreKit/SCSVASTAd.h>
#elif TARGET_OS_TV
#import <SCSCoreKitTV/SCSVASTAd.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@interface SCSVASTAdWrapper : SCSVASTAd

@property (nullable, nonatomic, readonly) SCSVASTURL *adTagURL;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
