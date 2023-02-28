//
//  SCSVASTViewabilityEvent.h
//  SCSCoreKit
//
//  Created by Thomas Geley on 23/05/2020.
//  Copyright © 2020 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>
#if TARGET_OS_IOS || (TARGET_OS_IPHONE && !TARGET_OS_TV)
#import <SCSCoreKit/SCSTrackingEvent.h>
#elif TARGET_OS_TV
#import <SCSCoreKitTV/SCSTrackingEvent.h>
#endif

NS_ASSUME_NONNULL_BEGIN

/**
 Class that represents a VAST viewability event.
 */
@interface SCSVASTViewabilityEvent : NSObject <SCSTrackingEvent, NSCopying, NSCoding>

/// The name of the event. Event names are the same than in the VAST standard.
@property (nonatomic, readonly) NSString *name;

/// URL to be called when the event is triggered.
@property (nonatomic, readonly) NSURL *url;

- (instancetype)init NS_UNAVAILABLE;

/**
 Initialize the SCSVASTViewabilityEvent using name and URL values.
 
 @param name The name of the tracking event.
 @param url The url that will be called when the event is triggered.
 @return An initialized instance of SCSVASTViewabilityEvent if the event name is valid, nil otherwise.
 */
- (nullable instancetype)initWithName:(NSString *)name url:(NSURL *)url;

/**
 Utility initializer for a Viewable Event

 @param url The URL to be called when the event is triggered.
 @return An initialized instance of SCSVASTViewabilityEvent.
 */
+ (instancetype)viewableEventWithURL:(NSURL *)url;

/**
 Utility initializer for a NotViewable Event

 @param url The URL to be called when the event is triggered.
 @return an initialized instance of SCSVASTViewabilityEvent.
 */
+ (instancetype)notViewableEventWithURL:(NSURL *)url;

/**
 Utility initializer for a ViewUndetermined Event

 @param url The URL to be called when the event is triggered.
 @return an initialized instance of SCSVASTViewabilityEvent.
 */
+ (instancetype)viewUndeterminedEventWithURL:(NSURL *)url;

@end
NS_ASSUME_NONNULL_END
