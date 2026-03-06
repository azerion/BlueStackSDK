//
//  AdErrorCode.h
//
//
//  Created by Nagib Bin Azad on 27/11/24.
//

#ifndef AdErrorCode_h
#define AdErrorCode_h

typedef NS_ENUM(NSInteger, AdErrorCode) {
    AdErrorWrongPlacement, //Wrong PlacementId
    AdErrorAdServer = -1000,
    AdErrorDataAdServer = -1001,
    AdErrorNoInternet,
    AdErrorSDKUninitialized,
    AdErrorCappedRequest, //Request has been capped
    AdErrorLockedPlacement, //placement locked by another factory
    AdErrorBusyFactory,
    AdErrorBusy,
    AdErrorUnallowedBackgroundRequest, //Cannot send request when application is on background
    AdErrorNoAds,
    AdErrorInterstitialCooldown, //Time between last [interstitalDisappear] and [createInterstital] Must be more than 5s
    AdErrorAlreadyShownInterstitial, //Other Interstitial is shown
    AdErrorAlreadyShownAppOpen, //AppOpenAd is shown
    AdErrorRequestTimedOut,
    AdErrorMissingViewController, //Factory's viewController was not assigned
    AdErrorUnableToDisplayAd,
    AdErrorAdExpired,
    AdErrorNoAdapterFoundForPlacement,
    AdErrorAdapterClassNotFound,
    AdErrorInternal
};

#endif /* AdErrorCode_h */
