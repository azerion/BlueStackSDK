//
//  SCSOpenMeasurementManagerProvider.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 15/01/2019.
//  Copyright © 2019 Smart AdServer. All rights reserved.
//

#import <UIKit/UIKit.h>
#if TARGET_OS_IOS || (TARGET_OS_IPHONE && !TARGET_OS_TV)
#import <WebKit/WebKit.h>
#endif
#import <SCSCoreKit/SCSOpenMeasurementAdSession.h>
#import <SCSCoreKit/SCSOpenMeasurementAdVerificationScript.h>

NS_ASSUME_NONNULL_BEGIN

@class WKWebView;

/**
 Protocol that should be implemented by objects used as SCSOpenMeasurementManager providers.
 */
@protocol SCSOpenMeasurementManagerProvider <NSObject>

/**
 Initialize a new instance of SCSOpenMeasurementManagerProvider.
 
 @param frameworkVersion The version of the display framework (will be forwarded to the third party SDK).
 @return An initialized instance of SCSOpenMeasurementManagerProvider.
 */
- (nullable instancetype)initWithFrameworkVersion:(NSString *)frameworkVersion __deprecated;

/**
 Initialize a new instance of SCSOpenMeasurementManagerProvider.
 
 @param frameworkVersion The version of the display framework (will be forwarded to the third party SDK).
 @param partnerName The name of the partner of the display framework (will be forwarded to the third party SDK).
 @return An initialized instance of SCSOpenMeasurementManagerProvider.
 */
- (nullable instancetype)initWithFrameworkVersion:(NSString *)frameworkVersion partnerName:(NSString *)partnerName;

/**
 Return the URL of the Open Measurement JS library.
 
 @return The URL of the Open Measurement JS library.
 */
- (NSString *)JSLibraryURL;

/**
 Return the partner name (that will be forwarded to the third party SDK).
 
 @return The partner name.
 */
- (NSString *)partnerName;

/**
 Return a new session for a given native view.
 
 @param view The view that should be used to create the session.
 @param JSLibrary The Open Measurement JS library.
 @param scripts An array of scripts that will be executed by the session.
 @param isVideo YES if the tracked ad is a video, NO otherwise.
 @param error A pointer to a NSError reference that will be filled by the method in case of error.
 @return A new session for the given view if successful, nil otherwise.
 */
- (nullable id<SCSOpenMeasurementAdSession>)sessionWithView:(UIView *)view JSLibrary:(NSString *)JSLibrary scripts:(NSArray<SCSOpenMeasurementAdVerificationScript *> *)scripts isVideo:(BOOL)isVideo error:(NSError **)error;

/**
 Return a new session for a given web view.
 
 @param webView The web view that should be used to create the session.
 @param isImpressionPixelInAdMarkup Whether there is an impression pixel in the admarkup or not.
 @param error A pointer to a NSError reference that will be filled by the method in case of error.
 @return A new session for the given web view if successful, nil otherwise.
 */
- (nullable id<SCSOpenMeasurementAdSession>)sessionWithWebView:(WKWebView *)webView isImpressionPixelInAdMarkup:(BOOL)isImpressionPixelInAdMarkup error:(NSError **)error;

@end

NS_ASSUME_NONNULL_END
