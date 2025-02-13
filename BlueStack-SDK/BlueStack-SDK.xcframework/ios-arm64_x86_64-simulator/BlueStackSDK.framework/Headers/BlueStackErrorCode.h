//
//  BlueStackErrorCode.h
//  BlueStackSDK
//
//  Created by Nagib Bin Azad on 27/11/24.
//

#ifndef BlueStackErrorCode_h
#define BlueStackErrorCode_h

typedef NS_ENUM(NSInteger, BlueStackErrorCode) {
    BlueStackErrorWrongPlacement, //Wrong PlacementId
    BlueStackErrorAdServer = -1000,
    BlueStackErrorDataAdServer = -1001,
    BlueStackErrorNoInternet,
    BlueStackErrorSDKUninitialized,
    BlueStackErrorCappedRequest, //Request has been capped
    BlueStackErrorLockedPlacement, //placement locked by another factory
    BlueStackErrorBusyFactory,
    BlueStackErrorBusy,
    BlueStackErrorUnallowedBackgroundRequest, //Cannot send request when application is on background
    BlueStackErrorNoAds,
    MAdvertiseErrorInterstitialCooldown, //Time between last [interstitalDisappear] and [createInterstital] Must be more than 5s
    BlueStackErrorAlreadyShownInterstitial, //Other Interstitial is shown
    BlueStackErrorRequestTimedOut,
    BlueStackErrorMissingViewController, //Factory's viewController was not assigned
    BlueStackErrorUnableToDisplayAd
};

#endif /* BlueStackErrorCode_h */
