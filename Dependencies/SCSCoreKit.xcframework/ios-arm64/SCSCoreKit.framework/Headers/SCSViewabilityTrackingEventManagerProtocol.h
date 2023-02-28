//
//  SCSViewabilityTrackingEventManagerProtocol.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 28/04/2022.
//  Copyright © 2022 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>
#if TARGET_OS_IOS || (TARGET_OS_IPHONE && !TARGET_OS_TV)
#import <SCSCoreKit/SCSTrackingEventManagerProtocol.h>
#elif TARGET_OS_TV
#import <SCSCoreKitTV/SCSTrackingEventManagerProtocol.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class SCSViewabilityStatus;

/**
 Helper class to handle a set of viewability tracking events.
 
 This class inherits from SCSTrackingEventManager but can track automatically events that implements SCSViewabilityTrackingEvent.
 
 @warning Since this event manager subclass do some active work in the background, it must be started manually (and stopped when
 not used anymore).
 */
@protocol SCSViewabilityTrackingEventManager <SCSTrackingEventManager>

/**
 Starts the viewability tracking.
 */
- (void)startViewabilityTracking;

/**
 Stops the viewability tracking.
 */
- (void)stopViewabilityTracking;

/**
 Resets the viewability tracking.
 
 Calling this method will reset the current timer cycle and will set the 'current duration'
 property of all tracked events to zero.
 */
- (void)resetViewabilityTracking;

/**
 Updates the viewability information to allow the viewability tracking manager to update all tracking events.
 
 These informations are typically retrieved using an instance of SCSViewabilityManager.
 
 @param viewabilityStatus The viewability status of the tracked view.
 */
- (void)viewabilityUpdatedWithViewabilityStatus:(SCSViewabilityStatus *)viewabilityStatus;

/**
 This method is used to retrieve the variables dictionary for a given event.
 
 This method is used internally by the manager for event tracking and is intended to be overriden. The default
 implementation returns an empty dictionary.
 
 @param event The event that is about to be called.
 @return A dictionary of variables for this event.
 */
- (NSDictionary <NSString *, NSString *> *)variablesForEvent:(id<SCSViewabilityTrackingEvent>)event;

/**
 This method is used to retrieve the additional macros for a given event.
 
 This method is used internally by the manager for event tracking and is intended to be overriden. The default
 implementation returns an empty dictionary.
 
 @param event The event that is about to be called.
 @return A dictionary of additional macros for this event.
 */
- (NSDictionary <NSString *, NSString *> *)additionalMacrosForEvent:(id<SCSViewabilityTrackingEvent>)event;

@end

NS_ASSUME_NONNULL_END
