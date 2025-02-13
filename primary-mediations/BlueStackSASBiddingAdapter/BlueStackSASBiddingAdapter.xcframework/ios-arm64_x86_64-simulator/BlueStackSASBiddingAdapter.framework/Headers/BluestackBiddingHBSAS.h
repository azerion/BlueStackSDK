//
//  BluestackBiddingHBSAS.h
//  MngAds
//
//  Created by HtrimechMac on 12/02/2020.
//  Copyright © 2020 MAdvertise. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BlueStackSDK/MNGAdsAdapter.h>
#import <SASDisplayKit/SASDisplayKit.h>
#import <BlueStackSDK/MAdvertiseReward.h>

@interface BluestackBiddingHBSAS : MNGAdsAdapter<SASBiddingManagerDelegate,SASBannerViewDelegate,SASInterstitialManagerDelegate,SASRewardedVideoManagerDelegate>

@end
