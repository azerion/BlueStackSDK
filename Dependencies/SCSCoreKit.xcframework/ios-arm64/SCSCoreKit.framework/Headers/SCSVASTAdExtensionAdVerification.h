//
//  SCSVASTAdExtensionAdVerification.h
//  SCSCoreKit
//
//  Created by Julien GOMEZ on 12/03/2020.
//  Copyright © 2020 Smart AdServer. All rights reserved.
//

// This class is kept only for retrocompatibility with Smart Display SDK with version <= 7.6
// For later versions, Smart Display SDK and Smart Instream SDK will use SCSVASTAdVerification instead.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Represent an Open Measurement ad verification script.
 */
@interface SCSVASTAdExtensionAdVerification : NSObject <NSCoding, NSCopying>

/// The javascript resource URL.
@property (nonatomic, readonly) NSURL *javascriptResourceURL;

/// The vendor name if any, nil otherwise.
@property (nonatomic, readonly, nullable) NSString *vendor;

/// Some verification parameters if any, nil otherwise.
@property (nonatomic, readonly, nullable) NSString *verificationParameters;

/**
 Initialize a new SCSVASTAdExtensionAdVerification instance.
 
 @param javascriptResourceURL The javascript resource URL.
 @param vendor The vendor name if any, nil otherwise.
 @param verificationParameters Some verification parameters if any, nil otherwise.
 */
- (instancetype)initWithJavascriptResourceURL:(NSURL *)javascriptResourceURL vendor:(nullable NSString *)vendor verificationParameters:(nullable NSString *)verificationParameters NS_DESIGNATED_INITIALIZER;

/**
 Initialize a new SCSVASTAdExtensionAdVerification instance.
 
 @param javascriptResourceURL The javascript resource URL.
 */
- (instancetype)initWithJavascriptResourceURL:(NSURL *)javascriptResourceURL;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
