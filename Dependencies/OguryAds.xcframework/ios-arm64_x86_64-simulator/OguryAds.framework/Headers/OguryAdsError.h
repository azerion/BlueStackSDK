//
//  Copyright © 2020 Ogury Ltd. All rights reserved.
//

typedef NS_ENUM(NSInteger, OguryAdsError) {
    // 2000 for LOAD_FAILED on Android

    /// Ad serving has been disabled for this placement/application.
    OguryAdsAdDisabledError = 2001,

    /// An internal SDK error occurred.
    OguryAdsProfigNotSyncedError = 2002,

    /// The loaded ad is expired. You must call the show method within 4 hours after the load.
    OguryAdsAdExpiredError = 2003,

    /// The setup method has not been called before a call to the load or show methods.
    OguryAdsSdkInitNotCalledError = 2004,

    /// Another ad is already displayed on the screen.
    OguryAdsAnotherAdAlreadyDisplayedError = 2005,

    /// An error occurred during the initialization of the SDK.
    OguryAdsAssetKeyNotValidError = 2006,

    // 2007 for ACTIVITY_IN_BACKGROUND on Android

    /// The server returns no ads.
    OguryAdsNotAvailableError = 2008,

    /// The server returns an ad but something went wrong with the ad precaching.
    OguryAdsNotLoadedError = 2009,

    /// Currently a ViewController is being presented and it is preventing the ad from displaying.
    OguryAdsCantShowAdsInPresentingViewControllerError = 2010,

    /// Unknown error type.
    OguryAdsUnknownError = 2011
};
