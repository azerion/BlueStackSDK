//
//  SCSVASTAdVerificationEvent.h
//  SCSCoreKit
//
//  Created by Thomas Geley on 24/05/2020.
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
 Class representing an ad verification event.
 */
@interface SCSVASTAdVerificationEvent : NSObject <SCSTrackingEvent, NSCopying, NSCoding>

/// The name of the event.
///
/// Event names are the same than in the VAST standard.
@property (nonatomic, readonly) NSString *name;

/// The URL to be called when the event is triggered.
@property (nonatomic, readonly) NSURL *url;

- (instancetype)init NS_UNAVAILABLE;

/**
 Initialize the SCSVASTAdVerificationEvent using name and URL values.
 
 @param name The name of the tracking event.
 @param url The url that will be called when the event is triggered.
 @return An initialized SCSVASTAdVerificationEvent instance if parameters are valid, nil otherwise.
 */
- (nullable instancetype)initWithName:(NSString *)name url:(NSURL *)url NS_DESIGNATED_INITIALIZER;

/**
 Convenience initializer from a dictionary
 
 @param dictionary The dictionary with the key/values representing the Verification TrackingEvent.
 @return An initialized SCSVASTAdVerificationEvent instance if the dictionary is valid, nil otherwise.
 */
- (nullable instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
