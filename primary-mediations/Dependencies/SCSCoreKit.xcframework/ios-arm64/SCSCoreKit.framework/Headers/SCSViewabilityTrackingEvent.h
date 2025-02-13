//
//  SCSViewabilityTrackingEvent.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 23/05/2017.
//  Copyright © 2017 Smart AdServer. All rights reserved.
//

#import <UIKit/UIKit.h>
#if TARGET_OS_IOS || (TARGET_OS_IPHONE && !TARGET_OS_TV)
#import <SCSCoreKit/SCSTrackingEvent.h>
#elif TARGET_OS_TV
#import <SCSCoreKitTV/SCSTrackingEvent.h>
#endif

NS_ASSUME_NONNULL_BEGIN

/**
 Represents a generic video tracking event.
 */
@protocol SCSViewabilityTrackingEvent <NSObject, SCSTrackingEvent>

@required

/**
 Returns the exposition time of the event.
 
 An event must be viewable during this exposition time to trigger the event.
 If the view becomes non viewable, the exposition time tracking is reset.
 
 @return The exposition time of the event.
 */
- (NSTimeInterval)eventExpositionTime;

/**
 Returns the visible area required by this event.
 
 This is the minimum visible area required to considered this event as viewable.
 Reaching the minimum area visible will start allow the tracking manager to start
 counting the exposition time.
 
 @return the visible area required by this event.
 */
- (CGFloat)eventArea;

@end

NS_ASSUME_NONNULL_END
