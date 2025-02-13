//
//  Copyright © 2020 Ogury Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <OguryCore/OguryError.h>

#import "OguryAdsError.h"

NS_ASSUME_NONNULL_BEGIN

@class OguryInterstitialAd;

@protocol OguryInterstitialAdDelegate <NSObject>
@optional
- (void)didLoadOguryInterstitialAd:(OguryInterstitialAd *)interstitial;
- (void)didDisplayOguryInterstitialAd:(OguryInterstitialAd *)interstitial;
- (void)didClickOguryInterstitialAd:(OguryInterstitialAd *)interstitial;
- (void)didCloseOguryInterstitialAd:(OguryInterstitialAd *)interstitial;
- (void)didFailOguryInterstitialAdWithError:(OguryError *)error forAd:(OguryInterstitialAd *)interstitial;
- (void)didTriggerImpressionOguryInterstitialAd:(OguryInterstitialAd *)interstitial;
@end

NS_ASSUME_NONNULL_END
