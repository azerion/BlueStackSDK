//
//  SCSOpenMeasurementManagerProtocol.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 09/05/2022.
//  Copyright © 2022 Smart AdServer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

@class SCSOpenMeasurementAdVerificationScript, SCSOpenMeasurementAdVerificationScript, SCSVASTAdVerification;
@protocol SCSOpenMeasurementAdSession;

/**
 Handles the Open Measurement SDK.
 
 This class does not call any third party API directly and rely instead on an abstract
 provider for easier third party library deactivation if needed.
 */
@protocol SCSOpenMeasurementManager <NSObject>

/// YES if the open measurement manager has fetched the OM JS library, NO otherwise.
///
/// @note Some features of the open measurement manager might still work when isReady is NO.
@property (nonatomic, readonly) BOOL isReady;

#pragma mark - Native implementations

/**
 Return a new session for a given native view.
 
 @param view The view that should be used to create the session.
 @param scripts An array of scripts that will be executed by the session.
 @param isVideo YES if the tracked ad is a video, NO otherwise.
 @return A new session for the given view if successful, nil otherwise.
 */
- (nullable id<SCSOpenMeasurementAdSession>)sessionWithView:(UIView *)view isVideo:(BOOL)isVideo scripts:(NSArray<SCSOpenMeasurementAdVerificationScript *> *)scripts;

#pragma mark - Web implementations

/**
 Return a new session for a given web view.
 
 @param wkWebView The web view that should be used to create the session.
 @param isImpressionPixelInAdMarkup Whether there is an impression pixel in the admarkup or not.
 @return A new session for the given web view if successful, nil otherwise.
 */
- (nullable id<SCSOpenMeasurementAdSession>)sessionWithWebView:(WKWebView *)wkWebView isImpressionPixelInAdMarkup:(BOOL)isImpressionPixelInAdMarkup;

/**
 Inject the Open Measurement SDK JS library into an HTML script.
 
 The place where the actual injection will take place depends of the HTML itself and the
 value of the kSCSForceEndOfHTMLInjection constant.
 
 @param html The HTML script.
 @return A copy of the HTML script in which the Open Measurement SDK JS library has been added.
 */
- (NSString *)injectLibraryIntoHTML:(NSString *)html;

/**
 Inject the Open Measurement SDK JS library into an HTML script.
 
 @param html The HTML script.
 @param forceEndOfHTMLInjection YES to force the JS library insertion to be done at the end of the HTML file, NO to attempt the insertion in the header instead.
 @return A copy of the HTML script in which the Open Measurement SDK JS library has been added.
 */
- (NSString *)injectLibraryIntoHTML:(NSString *)html forceEndOfHTMLInjection:(BOOL)forceEndOfHTMLInjection;

#pragma mark - Utils

/**
 Download or refresh the OM JS library.
 
 @note This method will not do anything if a refresh is still pending.
 */
- (void)refreshJSLibrary;

/**
 Convert an ad verifications array into an array of validation scripts.

 @param adVerifications An array of ad verifications if any, nil otherwise.
 @return An array of validation scripts (empty if no valid scripts are found).
 */
- (NSArray<SCSOpenMeasurementAdVerificationScript *> *)scriptsFromAdVerifications:(nullable NSArray<SCSVASTAdVerification *> *)adVerifications;

@end

NS_ASSUME_NONNULL_END
