//
//  SCSOpenMeasurementAdVerificationScript.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 04/06/2019.
//  Copyright © 2019 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Represent an Open Measurement ad verification script.
 */
@interface SCSOpenMeasurementAdVerificationScript : NSObject <NSCoding>

/// The javascript resource URL.
@property (nonatomic, readonly) NSURL *javascriptResourceURL;

/// The vendor name if any, nil otherwise.
@property (nonatomic, readonly, nullable) NSString *vendor;

/// Some verification parameters if any, nil otherwise.
@property (nonatomic, readonly, nullable) NSString *verificationParameters;

/**
 Initialize a new SCSOpenMeasurementAdVerificationScript instance.
 
 @param javascriptResourceURL The javascript resource URL.
 @param vendor The vendor name if any, nil otherwise.
 @param verificationParameters Some verification parameters if any, nil otherwise.
 */
- (instancetype)initWithJavascriptResourceURL:(NSURL *)javascriptResourceURL vendor:(nullable NSString *)vendor verificationParameters:(nullable NSString *)verificationParameters NS_DESIGNATED_INITIALIZER;

/**
 Initialize a new SCSOpenMeasurementAdVerificationScript instance.
 
 @param javascriptResourceURL The javascript resource URL.
 */
- (instancetype)initWithJavascriptResourceURL:(NSURL *)javascriptResourceURL;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
