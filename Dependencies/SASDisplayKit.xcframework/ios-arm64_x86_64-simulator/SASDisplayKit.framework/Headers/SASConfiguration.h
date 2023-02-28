//
//  SASConfiguration.h
//  SmartAdServer
//
//  Created by Clémence Laurent on 28/01/13.
//  Copyright © 2018 Smart AdServer. All rights reserved.
//

#import <CoreLocation/CoreLocation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Hold the configuration of the Smart Display SDK.
 
 @note This singleton class is used for the initial SDK configuration. This configuration is MANDATORY
 and should be done before performing any ad call. Check the complete documentation for more information.
 */
@interface SASConfiguration : NSObject

#pragma mark - Shared instance

/// The shared instance of the SASConfiguration object.
@property (class, nonatomic, readonly) SASConfiguration *sharedInstance NS_SWIFT_NAME(shared);

#pragma mark - Read only SDK properties

/// The site id used by your application.
@property (nonatomic, readonly) unsigned long siteId;

/// The base URL used for ad calls.
@property (nonatomic, readonly, nullable) NSString *baseURL;

/// The manual base URL used for ad calls if defined, nil otherwise.
///
/// Setting this URL will override the base URL set for your network.
@property (nonatomic, assign, nullable) NSString *manualBaseURL;


#pragma mark - Configurable SDK properties

/// YES if the SDK needs to display debug informations in the Xcode console, NO otherwise.
@property (nonatomic, assign, getter=isLoggingEnabled) BOOL loggingEnabled NS_SWIFT_NAME(loggingEnabled);

/// YES if location information can be used automatically by the SDK (if available), NO otherwise.
@property (nonatomic, assign) BOOL allowAutomaticLocationDetection;

/// Coordinate that will be used instead of the actual device location (for testing purpose for instance), kCLLocationCoordinate2DInvalid otherwise (default value).
@property (nonatomic, assign) CLLocationCoordinate2D manualLocation;

/// YES if a temporary transient ID can be used if the advertising ID is not available, NO otherwise.
@property (nonatomic, assign) BOOL transientIDEnabled;

/// The custom identifier for this device. This property will be sent along with the IDFA of this device, if available, when requesting an ad.
///
/// @note Providing an empty string will be considered as providing nil.
@property (nullable, nonatomic, copy) NSString *customIdentifier;

/// Ad call timeout in seconds.
///
/// The value set must be equal to or greater than 1, otherwise the default timeout of 10s will be used.
@property (nonatomic, assign) NSTimeInterval adCallTimeout;

/// YES if the configureWithSiteID method has been called, NO otherwise.
@property (nonatomic, readonly, getter=isConfigured) BOOL configured;

/// YES if the SDK is used as a Primary SDK, NO otherwise.
@property (nonatomic, assign, getter=isPrimarySDK) BOOL primarySDK NS_SWIFT_NAME(primarySDK);

/// The bundle for localized strings - See documentation for keys. By default the strings of the framework bundle will be used.
@property (nonatomic, strong) NSBundle *stringsBundle;

#pragma mark - Configuration method

/**
 Configures the SDK for a given siteId. This will customize the SDK behavior for your site id.
 
 @note This method MUST be called before performing any ad request and only once per application's lifecycle.
 Make sure you call this method in the application:didFinishLaunchingWithOptions: method of your application's delegate.
 
 If you don't know your siteId, please contact your sales house which can retrieve them from its Smart account (sites &amp; pages).
 
 @param siteId The site id used by your application.
 */
- (void)configureWithSiteId:(NSInteger)siteId NS_SWIFT_NAME(configure(siteId:));

/**
 Configures the SDK for a given siteId. This will customize the SDK behavior for your site id.
 
 @param siteId The site id used by your application.
 @param baseURL The base URL , but this will have no effect anymore, use manualBaseURL property instead.
 
 @deprecated This method is deprecated, use configureWithSiteId: instead. If you need to manually override the base URL, please use the manualBaseURL property.
 */
- (void)configureWithSiteId:(NSInteger)siteId baseURL:(NSString *)baseURL NS_SWIFT_NAME(configure(siteId:baseURL:)) __attribute((deprecated("use configureWithSiteId: instead")));

@end

NS_ASSUME_NONNULL_END
