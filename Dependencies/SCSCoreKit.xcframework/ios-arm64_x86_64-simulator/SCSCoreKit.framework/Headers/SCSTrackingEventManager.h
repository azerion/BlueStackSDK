//
//  SCSTrackingEventManager.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 17/05/2017.
//  Copyright © 2017 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>
#if TARGET_OS_IOS || (TARGET_OS_IPHONE && !TARGET_OS_TV)
#import <SCSCoreKit/SCSTrackingEvent.h>
#import <SCSCoreKit/SCSTrackingEventManagerProtocol.h>
#elif TARGET_OS_TV
#import <SCSCoreKitTV/SCSTrackingEvent.h>
#import <SCSCoreKitTV/SCSTrackingEventManagerProtocol.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@protocol SCSTrackingEventFactory, SCSTrackingEventManagerDelegate;
@class SCSPixelManager;

/**
 Default SCSTrackingEventManager protocol implementation.
 */
@interface SCSTrackingEventManager : NSObject <SCSTrackingEventManager>

/**
 Initialize a new instance of SCSTrackingEventManager.
 
 @param eventFactory An object implementing SCSTrackingEventFactory that will provide events to initialize the event manager.
 @param macros A dictionary of macros that have to be replaced (and the substitution values).
 @param delegate The delegate to inform about SCSTrackingEventManager's behavior.
 @return An initialized instance of SCSTrackingEventManager.
 */
- (instancetype)initWithEventFactory:(id <SCSTrackingEventFactory>)eventFactory macros:(NSDictionary<NSString *, NSString *> *)macros delegate:(nullable id <SCSTrackingEventManagerDelegate>)delegate;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
