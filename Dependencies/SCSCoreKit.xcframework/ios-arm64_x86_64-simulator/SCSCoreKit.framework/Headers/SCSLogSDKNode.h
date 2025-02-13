//
//  SCSLogSDKNode.h
//  SCSCoreKit
//
//  Created by glaubier on 25/03/2019.
//  Copyright © 2019 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AdSupport/AdSupport.h>
#if TARGET_OS_IOS || (TARGET_OS_IPHONE && !TARGET_OS_TV)
#import <SCSCoreKit/SCSLogNode.h>
#import <SCSCoreKit/SCSIdentity.h>
#import <SCSCoreKit/SCSDeviceInfo.h>
#import <SCSCoreKit/SCSLocation.h>
#import <SCSCoreKit/SCSAppInfo.h>
#import <SCSCoreKit/SCSRemoteLogger.h>
#import <SCSCoreKit/SCSTCFString.h>
#import <SCSCoreKit/SCSCCPAString.h>
#elif TARGET_OS_TV
#import <SCSCoreKitTV/SCSLogNode.h>
#import <SCSCoreKitTV/SCSIdentity.h>
#import <SCSCoreKitTV/SCSDeviceInfo.h>
#import <SCSCoreKitTV/SCSLocation.h>
#import <SCSCoreKitTV/SCSAppInfo.h>
#import <SCSCoreKitTV/SCSRemoteLogger.h>
#import <SCSCoreKitTV/SCSTCFString.h>
#import <SCSCoreKitTV/SCSCCPAString.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@interface SCSLogSDKNode : SCSLogNode

- (instancetype)init NS_UNAVAILABLE;

/**
 Initialize the SDK node with all needed information.
 
 @param sdkName             The name of the SDK.
 @param sdkVersion          The version of the SDK.
 @param sdkVersionID        The version ID of the SDK.
 @param appName             The application name.
 @param appBundleID         The application bundle identifier.
 @param platform            The current platform name.
 @param systemVersion       The current system version.
 @param identityType        The SCSIdentityType of the current SCSIdentity instance.
 @param adTrackingEnabled   Either the Advertising Tracking is enabled or not.
 @param gdprConsentString   The current gdprConsentString (if any).
 @param reachabilityStatus  The current reachability status. Is nullable.
 
 @return an Initialized instance of SCSLogSDKNode.
 */
- (instancetype)initWithSDKName:(NSString *)sdkName
                     sdkVersion:(NSString *)sdkVersion
                   sdkVersionID:(NSUInteger)sdkVersionID
                        appName:(NSString *)appName
                    appBundleID:(NSString *)appBundleID
                       platform:(NSString *)platform
                  systemVersion:(NSString *)systemVersion
                   identityType:(SCSIdentityType)identityType
              adTrackingEnabled:(BOOL)adTrackingEnabled
              gdprConsentString:(nullable NSString *)gdprConsentString
             reachabilityStatus:(nullable NSString *)reachabilityStatus __deprecated;

/**
 Initialize the SDK node with all needed information.
 
 @param sdkName             The name of the SDK.
 @param sdkVersion          The version of the SDK.
 @param sdkVersionID        The version ID of the SDK.
 @param implementationType  The current implementation type of the SDK.
 @param appName             The application name.
 @param appBundleID         The application bundle identifier.
 @param platform            The current platform name.
 @param systemVersion       The current system version.
 @param identityType        The SCSIdentityType of the current SCSIdentity instance.
 @param adTrackingEnabled   Either the Advertising Tracking is enabled or not.
 @param gdprConsentString   The current gdprConsentString (if any).
 @param reachabilityStatus  The current reachability status. Is nullable.
 
 @return an Initialized instance of SCSLogSDKNode.
 */
- (instancetype)initWithSDKName:(NSString *)sdkName
                     sdkVersion:(NSString *)sdkVersion
                   sdkVersionID:(NSUInteger)sdkVersionID
             implementationType:(SCSRemoteLogSDKImplementationType)implementationType
                        appName:(NSString *)appName
                    appBundleID:(NSString *)appBundleID
                       platform:(NSString *)platform
                  systemVersion:(NSString *)systemVersion
                   identityType:(SCSIdentityType)identityType
              adTrackingEnabled:(BOOL)adTrackingEnabled
              gdprConsentString:(nullable NSString *)gdprConsentString
             reachabilityStatus:(nullable NSString *)reachabilityStatus __deprecated;

/**
 Initialize the SDK node with all needed information.

 @param sdkName            The name of the SDK.
 @param sdkVersion         The version of the SDK.
 @param sdkVersionID       The version ID of the SDK.
 @param implementationType The current implementation type of the SDK.
 @param appName            The application name.
 @param appBundleID        The application bundle identifier.
 @param platform           The current platform name.
 @param systemVersion      The current system version.
 @param identityType       The SCSIdentityType of the current SCSIdentity instance.
 @param adTrackingEnabled  Either the Advertising Tracking is enabled or not.
 @param TCFString          The current TCF String.
 @param isTCFStringValid   YES if the TCF String is valid, NO otherwise.
 @param TCFStringVersion   The TCF String version.
 @param reachabilityStatus The current reachability status. Is nullable.

 @return an Initialized instance of SCSLogSDKNode.
*/
- (instancetype)initWithSDKName:(NSString *)sdkName
                     sdkVersion:(NSString *)sdkVersion
                   sdkVersionID:(NSUInteger)sdkVersionID
             implementationType:(SCSRemoteLogSDKImplementationType)implementationType
                        appName:(NSString *)appName
                    appBundleID:(NSString *)appBundleID
                       platform:(NSString *)platform
                  systemVersion:(NSString *)systemVersion
                   identityType:(SCSIdentityType)identityType
              adTrackingEnabled:(BOOL)adTrackingEnabled
                      TCFString:(NSString *)TCFString
               isTCFStringValid:(BOOL)isTCFStringValid
               TCFStringVersion:(SCSTCFStringTCFVersion)TCFStringVersion
             reachabilityStatus:(nullable NSString *)reachabilityStatus __deprecated;

/**
 Initialize the SDK node with all needed information.
 
 @param sdkName            The name of the SDK.
 @param sdkVersion         The version of the SDK.
 @param sdkVersionID       The version ID of the SDK.
 @param implementationType The current implementation type of the SDK.
 @param appName            The application name.
 @param appBundleID        The application bundle identifier.
 @param platform           The current platform name.
 @param systemVersion      The current system version.
 @param identityType       The SCSIdentityType of the current SCSIdentity instance.
 @param adTrackingEnabled  Either the Advertising Tracking is enabled or not.
 @param TCFString          The current TCF String.
 @param isTCFStringValid   YES if the TCF String is valid, NO otherwise.
 @param TCFStringVersion   The TCF String version.
 @param CCPAString         The current CCPA String.
 @param isCCPAStringValid  YES if the CCPA String is valid, NO otherwise.
 @param CCPAStringVersion  The CCPA String version.
 @param reachabilityStatus The current reachability status. Is nullable.
 
 @return an Initialized instance of SCSLogSDKNode.
 */
- (instancetype)initWithSDKName:(NSString *)sdkName
                     sdkVersion:(NSString *)sdkVersion
                   sdkVersionID:(NSUInteger)sdkVersionID
             implementationType:(SCSRemoteLogSDKImplementationType)implementationType
                        appName:(NSString *)appName
                    appBundleID:(NSString *)appBundleID
                       platform:(NSString *)platform
                  systemVersion:(NSString *)systemVersion
                   identityType:(SCSIdentityType)identityType
              adTrackingEnabled:(BOOL)adTrackingEnabled
                      TCFString:(NSString *)TCFString
               isTCFStringValid:(BOOL)isTCFStringValid
               TCFStringVersion:(SCSTCFStringTCFVersion)TCFStringVersion
                     CCPAString:(NSString *)CCPAString
              isCCPAStringValid:(BOOL)isCCPAStringValid
              CCPAStringVersion:(SCSCCPAStringVersion)CCPAStringVersion
             reachabilityStatus:(nullable NSString *)reachabilityStatus __deprecated;

/**
 Initialize the SDK node with all needed information.
 
 @param sdkName                 The name of the SDK.
 @param sdkVersion              The version of the SDK.
 @param sdkVersionID            The version ID of the SDK.
 @param implementationType      The current implementation type of the SDK.
 @param appName                 The application name.
 @param appBundleID             The application bundle identifier.
 @param platform                The current platform name.
 @param systemVersion           The current system version.
 @param identityType            The SCSIdentityType of the current SCSIdentity instance.
 @param adTrackingEnabled       Either the Advertising Tracking is enabled or not.
 @param ATTAuthorizationStatus  The current  ATT Authorization Status.
 @param TCFString               The current TCF String.
 @param isTCFStringValid        YES if the TCF String is valid, NO otherwise.
 @param TCFStringVersion        The TCF String version.
 @param CCPAString              The current CCPA String.
 @param isCCPAStringValid       YES if the CCPA String is valid, NO otherwise.
 @param CCPAStringVersion       The CCPA String version.
 @param reachabilityStatus      The current reachability status. Is nullable.
 
 @return an Initialized instance of SCSLogSDKNode.
 */
- (instancetype)initWithSDKName:(NSString *)sdkName
                     sdkVersion:(NSString *)sdkVersion
                   sdkVersionID:(NSUInteger)sdkVersionID
             implementationType:(SCSRemoteLogSDKImplementationType)implementationType
                        appName:(NSString *)appName
                    appBundleID:(NSString *)appBundleID
                       platform:(NSString *)platform
                  systemVersion:(NSString *)systemVersion
                   identityType:(SCSIdentityType)identityType
              adTrackingEnabled:(BOOL)adTrackingEnabled
         ATTAuthorizationStatus:(NSInteger)ATTAuthorizationStatus
                      TCFString:(NSString *)TCFString
               isTCFStringValid:(BOOL)isTCFStringValid
               TCFStringVersion:(SCSTCFStringTCFVersion)TCFStringVersion
                     CCPAString:(NSString *)CCPAString
              isCCPAStringValid:(BOOL)isCCPAStringValid
              CCPAStringVersion:(SCSCCPAStringVersion)CCPAStringVersion
             reachabilityStatus:(nullable NSString *)reachabilityStatus __deprecated;

/**
 Initialize the SDK node with all needed information.
 
 @param sdkName                 The name of the SDK.
 @param sdkVersion              The version of the SDK.
 @param sdkVersionID            The version ID of the SDK.
 @param coreSdkVersion          The version of the Core SDK.
 @param implementationType      The current implementation type of the SDK.
 @param appName                 The application name.
 @param appVersion              The application version.
 @param appBundleID             The application bundle identifier.
 @param platform                The current platform name.
 @param systemVersion           The current system version.
 @param identityType            The SCSIdentityType of the current SCSIdentity instance.
 @param adTrackingEnabled       Either the Advertising Tracking is enabled or not.
 @param ATTAuthorizationStatus  The current  ATT Authorization Status.
 @param TCFString               The current TCF String.
 @param isTCFStringValid        YES if the TCF String is valid, NO otherwise.
 @param TCFStringVersion        The TCF String version.
 @param CCPAString              The current CCPA String.
 @param isCCPAStringValid       YES if the CCPA String is valid, NO otherwise.
 @param CCPAStringVersion       The CCPA String version.
 @param reachabilityStatus      The current reachability status. Is nullable.
 
 @return an Initialized instance of SCSLogSDKNode.
 */
- (instancetype)initWithSDKName:(NSString *)sdkName
                     sdkVersion:(NSString *)sdkVersion
                   sdkVersionID:(NSUInteger)sdkVersionID
                 coreSdkVersion:(NSString *)coreSdkVersion
             implementationType:(SCSRemoteLogSDKImplementationType)implementationType
                        appName:(NSString *)appName
                     appVersion:(NSString *)appVersion
                    appBundleID:(NSString *)appBundleID
                       platform:(NSString *)platform
                  systemVersion:(NSString *)systemVersion
                   identityType:(SCSIdentityType)identityType
              adTrackingEnabled:(BOOL)adTrackingEnabled
         ATTAuthorizationStatus:(NSInteger)ATTAuthorizationStatus
                      TCFString:(NSString *)TCFString
               isTCFStringValid:(BOOL)isTCFStringValid
               TCFStringVersion:(SCSTCFStringTCFVersion)TCFStringVersion
                     CCPAString:(NSString *)CCPAString
              isCCPAStringValid:(BOOL)isCCPAStringValid
              CCPAStringVersion:(SCSCCPAStringVersion)CCPAStringVersion
             reachabilityStatus:(nullable NSString *)reachabilityStatus __deprecated;

/**
 Initialize the SDK node with all needed information.
 
 @param sdkName                 The name of the SDK.
 @param sdkVersion              The version of the SDK.
 @param sdkVersionID            The version ID of the SDK.
 @param coreSdkVersion          The version of the Core SDK.
 @param implementationType      The current implementation type of the SDK.
 @param appName                 The application name.
 @param appVersion              The application version.
 @param appBundleID             The application bundle identifier.
 @param platform                The current platform name.
 @param systemVersion           The current system version.
 @param identityType            The SCSIdentityType of the current SCSIdentity instance.
 @param isAdTrackingLimited     Either the Advertising Tracking is limited or not.
 @param ATTAuthorizationStatus  The current  ATT Authorization Status.
 @param TCFString               The current TCF String.
 @param isTCFStringValid        YES if the TCF String is valid, NO otherwise.
 @param TCFStringVersion        The TCF String version.
 @param CCPAString              The current CCPA String.
 @param isCCPAStringValid       YES if the CCPA String is valid, NO otherwise.
 @param CCPAStringVersion       The CCPA String version.
 @param reachabilityStatus      The current reachability status. Is nullable.
 
 @return an Initialized instance of SCSLogSDKNode.
 */
- (instancetype)initWithSDKName:(NSString *)sdkName
                     sdkVersion:(NSString *)sdkVersion
                   sdkVersionID:(NSUInteger)sdkVersionID
                 coreSdkVersion:(NSString *)coreSdkVersion
             implementationType:(SCSRemoteLogSDKImplementationType)implementationType
                        appName:(NSString *)appName
                     appVersion:(NSString *)appVersion
                    appBundleID:(NSString *)appBundleID
                       platform:(NSString *)platform
                  systemVersion:(NSString *)systemVersion
                   identityType:(SCSIdentityType)identityType
            isAdTrackingLimited:(BOOL)isAdTrackingLimited
         ATTAuthorizationStatus:(NSInteger)ATTAuthorizationStatus
                      TCFString:(NSString *)TCFString
               isTCFStringValid:(BOOL)isTCFStringValid
               TCFStringVersion:(SCSTCFStringTCFVersion)TCFStringVersion
                     CCPAString:(NSString *)CCPAString
              isCCPAStringValid:(BOOL)isCCPAStringValid
              CCPAStringVersion:(SCSCCPAStringVersion)CCPAStringVersion
             reachabilityStatus:(nullable NSString *)reachabilityStatus __deprecated;

/**
 Initialize the SDK node with all needed information.
 
 @param sdkName                 The name of the SDK.
 @param sdkVersion              The version of the SDK.
 @param sdkVersionID            The version ID of the SDK.
 @param useManualBaseURL        Either the SDK is using manual base URL or not, as NSNumber format (to handle legacy client SDK).
 @param coreSdkVersion          The version of the Core SDK.
 @param implementationType      The current implementation type of the SDK.
 @param appName                 The application name.
 @param appVersion              The application version.
 @param appBundleID             The application bundle identifier.
 @param platform                The current platform name.
 @param systemVersion           The current system version.
 @param identityType            The SCSIdentityType of the current SCSIdentity instance.
 @param isAdTrackingLimited     Either the Advertising Tracking is limited or not.
 @param ATTAuthorizationStatus  The current  ATT Authorization Status.
 @param TCFString               The current TCF String.
 @param isTCFStringValid        YES if the TCF String is valid, NO otherwise.
 @param TCFStringVersion        The TCF String version.
 @param CCPAString              The current CCPA String.
 @param isCCPAStringValid       YES if the CCPA String is valid, NO otherwise.
 @param CCPAStringVersion       The CCPA String version.
 @param reachabilityStatus      The current reachability status. Is nullable.
 
 @return an Initialized instance of SCSLogSDKNode.
 */
- (instancetype)initWithSDKName:(NSString *)sdkName
                     sdkVersion:(NSString *)sdkVersion
                   sdkVersionID:(NSUInteger)sdkVersionID
               useManualBaseURL:(nullable NSNumber *)useManualBaseURL
                 coreSdkVersion:(NSString *)coreSdkVersion
             implementationType:(SCSRemoteLogSDKImplementationType)implementationType
                        appName:(NSString *)appName
                     appVersion:(NSString *)appVersion
                    appBundleID:(NSString *)appBundleID
                       platform:(NSString *)platform
                  systemVersion:(NSString *)systemVersion
                   identityType:(SCSIdentityType)identityType
            isAdTrackingLimited:(BOOL)isAdTrackingLimited
         ATTAuthorizationStatus:(NSInteger)ATTAuthorizationStatus
                      TCFString:(NSString *)TCFString
               isTCFStringValid:(BOOL)isTCFStringValid
               TCFStringVersion:(SCSTCFStringTCFVersion)TCFStringVersion
                     CCPAString:(NSString *)CCPAString
              isCCPAStringValid:(BOOL)isCCPAStringValid
              CCPAStringVersion:(SCSCCPAStringVersion)CCPAStringVersion
             reachabilityStatus:(nullable NSString *)reachabilityStatus NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
