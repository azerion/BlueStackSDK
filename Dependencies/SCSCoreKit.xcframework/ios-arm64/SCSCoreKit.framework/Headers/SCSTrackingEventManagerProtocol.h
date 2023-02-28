//
//  SCSTrackingEventManagerProtocol.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 28/04/2022.
//  Copyright © 2022 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Helper class to handle a set of tracking events.
 
 This class is instantiated with a factory that will generate all tracking events that have to be sent.
 
 Sent events can be replayed or not depending on their 'consumable' status, and the event manager can
 take care of replacing macros and Smart AdServer variables in events URLs.
 */
@protocol SCSTrackingEventManager <NSObject>

/**
 Consider an event as 'tracked'.
 
 The URL corresponding to the event will be called (with replaced macros and variables) and the event will be discarded if needed.
 
 @warning Variables must be expressed as 'variablename={temporary_value}' where the only part that will be replaced is surrounded
 by curly brackets.
 
 @param eventName The name of the event that should be called.
 @param variables A dictionary of variables that have to be replaced (and the substitution values).
 @return YES if the event has been sent, NO if the event can't be found in the manager events list.
 */
- (BOOL)trackEvent:(NSString *)eventName variables:(NSDictionary<NSString *, NSString *> *)variables;

/**
 Consider an event as 'tracked'.
 
 The URL corresponding to the event will be called (with replaced macros and variables) and the event will be discarded if needed.
 
 @warning Variables must be expressed as 'variablename={temporary_value}' where the only part that will be replaced is surrounded
 by curly brackets.
 
 @param eventName The name of the event that should be called.
 @param variables A dictionary of variables that have to be replaced (and the substitution values).
 @param additionalMacros A dictionary of macros that have to be replaced (and the substitution values) alongside the macros provided in the initializer.
 @return YES if the event has been sent, NO if the event can't be found in the manager events list.
 */
- (BOOL)trackEvent:(NSString *)eventName variables:(NSDictionary<NSString *, NSString *> *)variables additionalMacros:(NSDictionary<NSString *, NSString *> *)additionalMacros;

/**
 This method is used to retrieve the variables dictionary for a given event URL.
 
 This method is used internally by the manager for event tracking and is intended to be overriden. The default
 implementation returns an empty dictionary.
 
 @param URL The URL of the event that is being called.
 @return A dictionary of variables for this event.
 */
- (NSDictionary <NSString *, NSString *> *)variablesForURL:(NSURL *)URL;

/**
 This method is used to retrieve the macros dictionary for a given event.
 
 This method is used internally by the manager for event tracking and is intended to be overriden. The default
 implementation returns an empty dictionary.
 
 @param URL The URL of the event that is being called.
 @return A dictionary of additional macros for this event.
 */
- (NSDictionary <NSString *, NSString *> *)macrosForURL:(NSURL *)URL;

@end

NS_ASSUME_NONNULL_END
