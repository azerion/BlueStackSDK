//
//  SCSVASTManager.h
//  SCSCoreKit
//
//  Created by Thomas Geley on 22/03/2017.
//  Copyright © 2017 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>
#if TARGET_OS_IOS || (TARGET_OS_IPHONE && !TARGET_OS_TV)
#import <SCSCoreKit/SCSVASTManagerProtocol.h>
#elif TARGET_OS_TV
#import <SCSCoreKitTV/SCSVASTManagerProtocol.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@protocol SCSVASTManagerDelegate, SCSVASTAdAdapterProtocol, SCSVASTErrorRemoteLoggerProtocol;
@class SCSURLSession, SCSPixelManager, SCSVASTManagerResponse, SCSVASTPixelManager, SCSVASTManagerConfig;

/**
 Default implementation of the SCSCoreKit's VAST Manager.
 */
@interface SCSVASTManager : NSObject <SCSVASTManagerProtocol>

/// The delegate of the VASTManager instance
@property (nullable, nonatomic, weak) id <SCSVASTManagerDelegate> delegate;

/// The adapter used to transform VASTAds into consumable ads.
@property (nullable, nonatomic, weak) id <SCSVASTAdAdapterProtocol> adapter;

- (instancetype)init NS_UNAVAILABLE;

/**
 Public initializer
 
 @param delegate The Manager's delegate.
 @param adapter The adapter to transform VAST Ads in the relevant video ad for the given SDK.
 @param sessionManager The Session manager for distant calls. Used only for Unit testing.
 @param config The VAST manager configuration.
 
 @return An initialized instance of SCSVASTManager.
 */
- (instancetype)initWithDelegate:(nullable id <SCSVASTManagerDelegate>)delegate
                         adapter:(nullable id <SCSVASTAdAdapterProtocol>)adapter
                  sessionManager:(nullable SCSURLSession *)sessionManager //The session manager is only passed for unit tests…
                          config:(SCSVASTManagerConfig *)config NS_DESIGNATED_INITIALIZER;

/**
 Public initializer
 
 @param delegate The Manager's delegate.
 @param adapter The adapter to transform VAST Ads in the relevant video ad for the given SDK.
 @param sessionManager The Session manager for distant calls. Used only for Unit testing.
 @param requestTimeout The timeout for requests (wrapper resolution).
 @param maximumWrappers The maximum number of wrappers that can be resolved in a wrapper chain.
 @param handleWrappersAdpods Indicates whether or not the manager should "insert" wrapper adpods in the ad store.
 
 @return An initialized instance of SCSVASTManager.
 */
- (instancetype)initWithDelegate:(nullable id <SCSVASTManagerDelegate>)delegate
                         adapter:(nullable id <SCSVASTAdAdapterProtocol>)adapter
                  sessionManager:(nullable SCSURLSession *)sessionManager //The session manager is only passed for unit tests…
                  requestTimeout:(NSTimeInterval)requestTimeout
                 maximumWrappers:(NSInteger)maximumWrappers
            handleWrappersAdpods:(BOOL)handleWrappersAdpods NS_DESIGNATED_INITIALIZER __deprecated;

/**
 Public initializer
 
 @param delegate The Manager's delegate.
 @param adapter The adapter to transform VAST Ads in the relevant video ad for the given SDK.
 @param sessionManager The Session manager for distant calls. Used only for Unit testing.
 @param pixelManager The pixel manager instance to call error pixels.
 @param requestTimeout The timeout for requests (wrapper resolution).
 @param maximumWrappers The maximum number of wrappers that can be resolved in a wrapper chain.
 @param handleWrappersAdpods Indicates whether or not the manager should "insert" wrapper adpods in the ad store.
 
 @return An initialized instance of SCSVASTManager.
 */
- (instancetype)initWithDelegate:(nullable id <SCSVASTManagerDelegate>)delegate
                         adapter:(nullable id <SCSVASTAdAdapterProtocol>)adapter
                  sessionManager:(nullable SCSURLSession *)sessionManager //The session manager is only passed for unit tests…
                    pixelManager:(nullable SCSPixelManager *)pixelManager //The pixel manager is only passed for unit tests…
                  requestTimeout:(NSTimeInterval)requestTimeout
                 maximumWrappers:(NSInteger)maximumWrappers
            handleWrappersAdpods:(BOOL)handleWrappersAdpods NS_DESIGNATED_INITIALIZER __deprecated;

/**
 Generate the default macros that should be replaced in VAST URLs with the relevant values.
 
 @warning some macros might contains some timestamp or random values so the result of this method should never be stored.
 
 @param appBundleIdentifier The bundle identifier of the current application.
 @param OMPartnerName The Open Measurement SDK partner name.
 @param OMFrameworkVersion The framework version provided to the Open Measurement SDK.
 @param apiFrameworks An array of supported IAB API frameworks.
 @return A dictionary of macros and values that should be replaced in VAST URLs.
 */
+ (NSDictionary<NSString *, NSString *> *)generateDefaultVASTMacrosWithAppBundleIdentifier:(NSString *)appBundleIdentifier
                                                                             OMPartnerName:(NSString *)OMPartnerName
                                                                        OMFrameworkVersion:(NSString *)OMFrameworkVersion
                                                                             apiFrameworks:(nullable NSArray<NSNumber *> *)apiFrameworks;

@end

NS_ASSUME_NONNULL_END
