//
//  MNGDFPAdapter.h
//  MNG-Ads-SDK
//
//  Created by Ben Salah Med Amine on 12/10/14.
//  Edited By Hussein Dimessi.
//  Copyright (c) 2014 MNG. All rights reserved.
//

#import "MNGAdsAdapter.h"
#import <GoogleMobileAds/GoogleMobileAds.h>

@interface MNGDFPAdapter : MNGAdsAdapter<GADBannerViewDelegate,GADFullScreenContentDelegate,GADAdLoaderDelegate,GADNativeAdLoaderDelegate,GADNativeAdDelegate>
/// The interstitial ad.
@property(nonatomic, strong) GADInterstitialAd *interstitial;
/// A pre-loaded rewarded ad.
@property(nonatomic, strong) GADRewardedAd *rewardedAd;
@end
