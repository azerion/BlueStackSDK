//
//  SCSVideoTrackingEventManager.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 16/05/2017.
//  Copyright © 2017 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>
#if TARGET_OS_IOS || (TARGET_OS_IPHONE && !TARGET_OS_TV)
#import <SCSCoreKit/SCSTrackingEventManagerProtocol.h>
#import <SCSCoreKit/SCSTrackingEventManager.h>
#import <SCSCoreKit/SCSVideoTrackingEventManagerProtocol.h>
#elif TARGET_OS_TV
#import <SCSCoreKitTV/SCSTrackingEventManagerProtocol.h>
#import <SCSCoreKitTV/SCSTrackingEventManager.h>
#import <SCSCoreKitTV/SCSVideoTrackingEventManagerProtocol.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class SCSURLSession;

/**
 Default SCSVideoTrackingEventManager protocol implementation.
 */
@interface SCSVideoTrackingEventManager : SCSTrackingEventManager <SCSVideoTrackingEventManager>

@end

NS_ASSUME_NONNULL_END
