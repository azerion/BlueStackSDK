//
//  SCSPrivateUtils.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 02/11/2021.
//  Copyright © 2021 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>
#if TARGET_OS_IOS || (TARGET_OS_IPHONE && !TARGET_OS_TV)
#import <SCSCoreKit/SCSCoreKit.h>
#elif TARGET_OS_TV
#import <SCSCoreKitTV/SCSCoreKitTV.h>
#endif

NS_ASSUME_NONNULL_BEGIN

/**
 Useful static methods.
 
 @note Dummy class only used to validate that Swift code can access private ObjC code.
 */
@interface SCSPrivateUtils : SCSUtils

@end

NS_ASSUME_NONNULL_END
