//
//  SCSVASTAdVerification.h
//  SCSCoreKit
//
//  Created by Thomas Geley on 24/05/2020.
//  Copyright © 2020 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class SCSVASTAdVerificationResource, SCSVASTAdVerificationEvent;

/**
 Represent an AdVerification.
*/
@interface SCSVASTAdVerification : NSObject <NSCoding, NSCopying>

/// The vendor name if any, nil otherwise.
@property (nullable, nonatomic, readonly) NSString *vendor;

/// The Verifications Resources for this AdVerification.
@property (nonatomic, readonly) NSMutableArray <SCSVASTAdVerificationResource *> *resources;

/// The Tracking Events for this AdVerification.
@property (nonatomic, readonly) NSMutableArray <SCSVASTAdVerificationEvent *> *trackingEvents;

/// Some verification parameters if any, nil otherwise.
@property (nullable, nonatomic, readonly) NSString *verificationParameters;

- (instancetype)init NS_UNAVAILABLE;

/**
 Initialize a new SCSVASTAdVerification instance.

 @param vendor The vendor name if any, nil otherwise.
 @param resources The resources for verification.
 @param trackingEvents The tracking events for verification if any, nil otherwise.
 @param verificationParameters Some verification parameters if any, nil otherwise.
 @return An initialized SCSVASTAdVerification instance.
 */
- (instancetype)initWithVendor:(nullable NSString *)vendor resources:(NSArray <SCSVASTAdVerificationResource *> *)resources trackingEvents:(nullable NSArray <SCSVASTAdVerificationEvent *> *)trackingEvents verificationParameters:(nullable NSString *)verificationParameters NS_DESIGNATED_INITIALIZER;

/**
 Convenience initializer from a XML represented as a dictionary.

 @param dictionary The XML represented as a dictionary type.
 @return An initialized SCSVASTAdVerification instance if the dictionary is valid, nil otherwise.
 */
- (nullable instancetype)initWithDictionary:(NSDictionary *)dictionary;

/**
 Convenience initializer that returns a SCSVASTAdVerification instance with a single OMID Javascript resource.
 
 @param javascriptResourceURL The OMID javascript resource URL.
 @param vendor The vendor name if any, nil otherwise.
 @param verificationParameters Some verification parameters if any, nil otherwise.
 @return An initialized SCSVASTAdVerification instance.
 */
- (instancetype)initWithOMIDJavascriptResourceURL:(NSURL *)javascriptResourceURL vendor:(nullable NSString *)vendor verificationParameters:(nullable NSString *)verificationParameters;

@end

NS_ASSUME_NONNULL_END
