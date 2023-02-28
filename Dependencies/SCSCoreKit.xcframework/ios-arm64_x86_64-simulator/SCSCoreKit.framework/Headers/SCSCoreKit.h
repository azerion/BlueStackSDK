//
//  SCSCoreKit.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 11/01/2017.
//  Copyright © 2017 Smart AdServer. All rights reserved.
//

// Components
#import <SCSCoreKit/SCSVASTErrors.h>
#import <SCSCoreKit/SCSVASTError.h>
#import <SCSCoreKit/SCSVASTURL.h>
#import <SCSCoreKit/SCSVASTTrackingEvent.h>
#import <SCSCoreKit/SCSVASTViewabilityEvent.h>
#import <SCSCoreKit/SCSVASTClickEvent.h>

#import <SCSCoreKit/SCSVASTModel.h>
#import <SCSCoreKit/SCSVASTAd.h>
#import <SCSCoreKit/SCSVASTAdInline.h>
#import <SCSCoreKit/SCSVASTAdWrapper.h>
#import <SCSCoreKit/SCSVASTCreative.h>
#import <SCSCoreKit/SCSVASTCreativeLinear.h>
#import <SCSCoreKit/SCSVASTCreativeNonLinear.h>
#import <SCSCoreKit/SCSVASTCreativeCompanion.h>
#import <SCSCoreKit/SCSVASTCreativeIcon.h>
#import <SCSCoreKit/SCSVASTMediaFile.h>
#import <SCSCoreKit/SCSVASTAdExtension.h>
#import <SCSCoreKit/SCSVASTMediaFileSelector.h>
#import <SCSCoreKit/SCSVASTPixelManager.h>
#import <SCSCoreKit/SCSVASTAdVerification.h>
#import <SCSCoreKit/SCSVASTAdVerificationResource.h>
#import <SCSCoreKit/SCSVASTAdVerificationEvent.h>
#import <SCSCoreKit/SCSVASTUniversalAdId.h>

#import <SCSCoreKit/SCSVASTParser.h>
#import <SCSCoreKit/SCSVASTParserResponse.h>
#import <SCSCoreKit/SCSVASTModelGenerator.h>

#import <SCSCoreKit/SCSVideoAdProtocol.h>
#import <SCSCoreKit/SCSVASTAdAdapterProtocol.h>
#import <SCSCoreKit/SCSVASTManagerProtocol.h>
#import <SCSCoreKit/SCSVASTManagerDelegate.h>
#import <SCSCoreKit/SCSVASTManagerConfig.h>
#import <SCSCoreKit/SCSVASTManager.h>
#import <SCSCoreKit/SCSVASTManagerResponse.h>
#import <SCSCoreKit/SCSVASTTrackingEventFactory.h>
#import <SCSCoreKit/SCSVASTAdExtensionAdVerification.h>

#import <SCSCoreKit/SCSTrackingEvent.h>
#import <SCSCoreKit/SCSTrackingEventFactory.h>
#import <SCSCoreKit/SCSTrackingEventDefaultFactory.h>
#import <SCSCoreKit/SCSTrackingEventManagerProtocol.h>
#import <SCSCoreKit/SCSTrackingEventManager.h>
#import <SCSCoreKit/SCSTrackingEventManagerDelegate.h>
#import <SCSCoreKit/SCSVideoTrackingEvent.h>
#import <SCSCoreKit/SCSVideoTrackingEventManagerProtocol.h>
#import <SCSCoreKit/SCSVideoTrackingEventManager.h>
#import <SCSCoreKit/SCSViewabilityTrackingEvent.h>
#import <SCSCoreKit/SCSViewabilityTrackingEventManagerProtocol.h>
#import <SCSCoreKit/SCSViewabilityTrackingEventManager.h>

#import <SCSCoreKit/SCSViewabilityManagerProtocol.h>
#import <SCSCoreKit/SCSViewabilityManagerDelegate.h>
#import <SCSCoreKit/SCSViewabilityManager.h>
#import <SCSCoreKit/SCSViewabilityStatus.h>

#import <SCSCoreKit/SCSPostClickManagerProtocol.h>
#import <SCSCoreKit/SCSPostClickManagerDelegate.h>
#import <SCSCoreKit/SCSPostClickManager.h>

#import <SCSCoreKit/SCSOpenMeasurementManagerProtocol.h>
#import <SCSCoreKit/SCSOpenMeasurementManager.h>
#import <SCSCoreKit/SCSOpenMeasurementManagerProvider.h>
#import <SCSCoreKit/SCSOpenMeasurementAdSession.h>
#import <SCSCoreKit/SCSOpenMeasurementRemoteLoggerProtocol.h>
#import <SCSCoreKit/SCSOpenMeasurementManagerDefaultProvider.h>
#import <SCSCoreKit/SCSOpenMeasurementVASTProperties.h>
#import <SCSCoreKit/SCSOpenMeasurementAdVerificationScript.h>
#import <SCSCoreKit/SCSOpenMeasurementJSLibrary.h>

// System
#import <SCSCoreKit/SCSAppInfo.h>
#import <SCSCoreKit/SCSAppInfoProtocol.h>

#import <SCSCoreKit/SCSIdentity.h>
#import <SCSCoreKit/SCSIdentityProviderProtocol.h>
#import <SCSCoreKit/SCSTransientID.h>

#import <SCSCoreKit/SCSDeviceInfo.h>
#import <SCSCoreKit/SCSAppInfoProtocol.h>
#import <SCSCoreKit/SCSDeviceInfoProviderProtocol.h>

#import <SCSCoreKit/SCSFrameworkInfo.h>
#import <SCSCoreKit/SCSFrameworkInfoProtocol.h>

#import <SCSCoreKit/SCSLocation.h>
#import <SCSCoreKit/SCSLocationManager.h>
#import <SCSCoreKit/SCSLocationManagerDataSource.h>
#import <SCSCoreKit/SCSLocationProviderDelegate.h>
#import <SCSCoreKit/SCSLocationProviderProtocol.h>

// Maths
#import <SCSCoreKit/SCSQuaternion.h>
#import <SCSCoreKit/SCSAxis3.h>
#import <SCSCoreKit/SCSAngleUtils.h>

// Config Manager
#import <SCSCoreKit/SCSRemoteConfigManager.h>
#import <SCSCoreKit/SCSRemoteConfigManagerDelegate.h>
#import <SCSCoreKit/SCSPropertyCacheManager.h>

// Model
#import <SCSCoreKit/SCSConfiguration.h>

// Logger
#import <SCSCoreKit/SCSLogNode.h>
#import <SCSCoreKit/SCSVASTErrorRemoteLoggerProtocol.h>
#import <SCSCoreKit/SCSLogVASTErrorNode.h>
#import <SCSCoreKit/SCSLogSDKNode.h>
#import <SCSCoreKit/SCSLogMeasureNode.h>
#import <SCSCoreKit/SCSLogErrorNode.h>
#import <SCSCoreKit/SCSRemoteLoggerProtocol.h>
#import <SCSCoreKit/SCSRemoteLogger.h>
#import <SCSCoreKit/SCSRemoteLog.h>
#import <SCSCoreKit/SCSRemoteLogUtils.h>
#import <SCSCoreKit/SCSRemoteConfigurationErrorRemoteLogger.h>
#import <SCSCoreKit/SCSLogOpenMeasurementNode.h>

// Network
#import <SCSCoreKit/SCSAdRequestManager.h>
#import <SCSCoreKit/SCSAdRequestValidatorProtocol.h>
#import <SCSCoreKit/SCSAdRequestErrors.h>

#import <SCSCoreKit/SCSNetworkInfo.h>
#import <SCSCoreKit/SCSNetworkInfoProtocol.h>

#import <SCSCoreKit/SCSScriptDownloader.h>
#import <SCSCoreKit/SCSScriptDownloaderDelegate.h>

#import <SCSCoreKit/SCSPixel.h>
#import <SCSCoreKit/SCSPixelManagerProtocol.h>
#import <SCSCoreKit/SCSPixelManager.h>
#import <SCSCoreKit/SCSPixelStore.h>
#import <SCSCoreKit/SCSPixelStoreProviderProtocol.h>

#import <SCSCoreKit/SCSURLSession.h>
#import <SCSCoreKit/SCSURLSessionResponse.h>
#import <SCSCoreKit/SCSURLSessionProviderProtocol.h>
#import <SCSCoreKit/SCSURLSessionTask.h>

// Utils
#import <SCSCoreKit/SCSUtils.h>
#import <SCSCoreKit/SCSUIUtils.h>
#import <SCSCoreKit/SCSURLUtils.h>
#import <SCSCoreKit/SCSStringUtils.h>
#import <SCSCoreKit/SCSHTMLUtils.h>
#import <SCSCoreKit/SCSTimeUtils.h>
#import <SCSCoreKit/SCSHash.h>
#import <SCSCoreKit/SCSRandom.h>
#import <SCSCoreKit/SCSLog.h>
#import <SCSCoreKit/SCSLogDataSource.h>
#import <SCSCoreKit/SCSLogOutput.h>
#import <SCSCoreKit/SCSProdURL.h>
#import <SCSCoreKit/SCSTimer.h>
#import <SCSCoreKit/SCSTimerInterval.h>
#import <SCSCoreKit/SCSTimerDelegate.h>
#import <SCSCoreKit/SCSFuture.h>
#import <SCSCoreKit/SCSTCFString.h>
#import <SCSCoreKit/SCSCCPAString.h>

// Platform specific headers
#if TARGET_OS_IOS || (TARGET_OS_IPHONE && !TARGET_OS_TV)

// Maths
#import <SCSCoreKit/SCSQuaternion+CoreMotion.h>

#elif TARGET_OS_TV

#endif

//! Project version number for SCSCoreKit.
FOUNDATION_EXPORT double SCSCoreKitVersionNumber;

//! Project version string for SCSCoreKit.
FOUNDATION_EXPORT const unsigned char SCSCoreKitVersionString[];
