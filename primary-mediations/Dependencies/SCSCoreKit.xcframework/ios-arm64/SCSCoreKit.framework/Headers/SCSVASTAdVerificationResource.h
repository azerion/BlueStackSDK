//
//  SCSVASTAdVerificationResource.h
//  SCSCoreKit
//
//  Created by Thomas Geley on 24/05/2020.
//  Copyright © 2020 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Enumeration of the possible resource type
typedef NS_ENUM(NSInteger, SCSVASTAdVerificationResourceType) {
    
    /// Javascript type.
    SCSVASTAdVerificationResourceTypeJavascript = 0,
    
    /// Executable type.
    SCSVASTAdVerificationResourceTypeExecutable = 1,
    
};

/**
 Represent an AdVerification Resource.
 */
@interface SCSVASTAdVerificationResource : NSObject <NSCoding, NSCopying>

/// The type of the resource.
@property (nonatomic, readonly) SCSVASTAdVerificationResourceType type;

/// The resource URL.
@property (nonatomic, readonly) NSURL *url;

/// The API framework of the resource if any, nil otherwise.
@property (nullable, nonatomic, readonly) NSString *apiFramework;

/// NO if a browser is needed for execution, YES otherwise.
///
/// If true, this resource is optimized and able to execute in an environment without DOM.
@property (nonatomic, readonly) BOOL browserOptional;

/// The type of the executable resource if any, nil otherwise.
@property (nullable, nonatomic, readonly) NSString *executableType;

- (instancetype)init NS_UNAVAILABLE;

/**
 Initialize a new SCSVASTAdVerificationResource instance.

 @param type The resource type.
 @param url The resource url.
 @param apiFramework The resource API framework (e.g "omid", "vpaid", etc…) if available, nil otherwise.
 @param browserOptional YES if the resource is optimized to be executed in a DOMless environment, NO otherwise.
 @param executabletype The type of the executable resource if available, nil otherwise.
 @return An initialized instance of SCSVASTAdVerificationResource.
 */
- (instancetype)initWithType:(SCSVASTAdVerificationResourceType)type url:(NSURL *)url apiFramework:(nullable NSString *)apiFramework browserOptional:(BOOL)browserOptional executableType:(nullable NSString *)executabletype;

/**
 Initialize a new SCSVASTAdVerificationResource instance with javascript type from a XML represented as a dictionary.

 @param dictionary The XML represented as a dictionary type.
 @return An initialized instance of SCSVASTAdVerificationResource if the dictionary is valid, nil otherwise.
 */
- (nullable instancetype)initJavascriptResourceWithDictionary:(NSDictionary *)dictionary;

/**
 Initialize a new SCSVASTAdVerificationResource instance with executable type from a XML represented as a dictionary.

 @param dictionary The XML represented as a dictionary type.
 @return An initialized instance of SCSVASTAdVerificationResource if the dictionary is valid, nil otherwise. 
 */
- (nullable instancetype)initExecutableResourceWithDictionary:(NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
