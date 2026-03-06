//
//  Protocols.h
//
//
//  Created by Ben Salah Med Amine on 12/9/14.
//  Copyright (c) 2014 All rights reserved.
//

#import <UIKit/UIKit.h>


@class AdsAdapter,NativeObject, AdReward;

/**
 
 The delegate of a AdsAdapter object must adopt the AdsAdapterBannerDelegate protocol.
 
 Many methods of AdsAdapterBannerDelegate return the ad view sent by the message.
 The protocol methods allow the delegate to be aware of the ad-related events.
 You can use it to handle your app's or the ad's behavior like adapting your viewController's view size depending on the ad being displayed or not.
 
 */


@protocol AdsAdapterBannerDelegate <NSObject>

@optional

/** Notifies the delegate that the creative from the banner ad has been loaded.
 
 @param adView An ad view object informing the delegate about the banner being loaded.
 
 */

- (void)adsAdapter:(AdsAdapter *)adsAdapter bannerDidLoad:(UIView *)adView preferredHeight:(CGFloat)preferredHeight;

/** Notifies the delegate that the creative from the banner ad has been failed.
 
 
 */

- (void)adsAdapter:(AdsAdapter *)adsAdapter bannerDidFailWithError:(NSError *)error;

-(void)adsAdapter:(AdsAdapter *)adsAdapter bannerDidChangeFrame:(CGRect)frame;

@end

@protocol AdsAdapterInfeedDelegate <NSObject>

@optional

/** Notifies the delegate that the creative from the banner ad has been loaded.
 
 @param adView An ad view object informing the delegate about the banner being loaded.
 
 */

- (void)adsAdapter:(AdsAdapter *)adsAdapter infeedDidLoad:(UIView *)adView; __attribute__((deprecated("use adsAdapter:infeedDidLoad:preferredHeight: instead.")));

- (void)adsAdapter:(AdsAdapter *)adsAdapter infeedDidLoad:(UIView *)adView preferredHeight:(CGFloat)preferredHeight;

/** Notifies the delegate that the creative from the banner ad has been failed.
 
 
 */

- (void)adsAdapter:(AdsAdapter *)adsAdapter infeedDidFailWithError:(NSError *)error;



@end

@protocol AdsAdapterRefreshDelegate <NSObject>

@optional

/** Notifies the delegate that the creative from the banner ad has been refreshed.
 
 */

- (void)adsAdapterBannerDidRefresh:(AdsAdapter *)adsAdapter;

/** Notifies the delegate that the creative from the banner ad has been failed to refresh.
 
 
 */

- (void)adsAdapter:(AdsAdapter *)adsAdapter bannerDidFailToRefreshWithError:(NSError *)error;

@end

/**
 
 The delegate of a AdsAdapter object must adopt the AdsAdapterInterstitialDelegate protocol.
 
 Many methods of AdsAdapterInterstitialDelegate return the ad view sent by the message.
 The protocol methods allow the delegate to be aware of the ad-related events.
 You can use it to handle your app's or the ad's behavior like adapting your viewController's view size depending on the ad being displayed or not.
 
 */


@protocol AdsAdapterInterstitialDelegate <NSObject>

@optional

/** Notifies the delegate that the creative from the interstitial ad has been loaded.
 
 
 */

- (void)adsAdapterInterstitialDidLoad:(AdsAdapter *)adsAdapter;

/** Notifies the delegate that the creative from the interstitial ad has been disappeared.
 
 
 */

- (void)adsAdapterInterstitialDisappear:(AdsAdapter *)adsAdapter;

/** Notifies the delegate that the creative from the interstitial ad has been failed.
 
 
 */

- (void)adsAdapter:(AdsAdapter *)adsAdapter interstitialDidFailWithError:(NSError *)error;


/** Notifies the delegate that the creative from the interstitial ad has been shown.
 
 
 */

- (void)adsAdapterInterstitialDidShown:(AdsAdapter *)adsAdapter;

@end

/**
 
 The delegate of a AdsAdapter object must adopt the AdsAdapterNativeDelegate protocol.
 
 Many methods of AdsAdapterNativeDelegate return the ad view sent by the message.
 The protocol methods allow the delegate to be aware of the ad-related events.
 You can use it to handle your app's or the ad's behavior like adapting your viewController's view size depending on the ad being displayed or not.
 
 */


@protocol AdsAdapterNativeDelegate <NSObject>

@optional

/** Notifies the delegate that the creative from the nativeObject ad has been loaded.
 
 @param adView An ad view object informing the delegate about the nativeObject being loaded.
 
 */

- (void)adsAdapter:(AdsAdapter *)adsAdapter nativeObjectDidLoad:(NativeObject *)adView;

/** Notifies the delegate that the creative from the nativeObject ad has been failed.
 
 
 */

- (void)adsAdapter:(AdsAdapter *)adsAdapter nativeObjectDidFailWithError:(NSError *)error withCover:(BOOL)cover;

@end

@protocol AdsAdapterNativeCollectionDelegate <NSObject>

@optional

/** Notifies the delegate that the creative from the nativeObjects ad has been loaded.
 
 @param adView An ad view object informing the delegate about the nativeObject being loaded.
 
 */

- (void)adsAdapter:(AdsAdapter *)adsAdapter nativeCollectionDidLoad:(NSArray *)adView;

/** Notifies the delegate that the creative from the nativeCollection ad has been failed.
 
 
 */

- (void)adsAdapter:(AdsAdapter *)adsAdapter nativeCollectionDidFailWithError:(NSError *)error;

- (void)adsAdapterNativeAdWasClicked:(AdsAdapter *)adsAdapter nativeObjectClicked:(NativeObject *)clickedAdView;

@end

/**
 
 The delegate of a AdsAdapter object must adopt the AdsAdapterInterstitialDelegate protocol.
 
 Many methods of AdsAdapterInterstitialDelegate return the ad view sent by the message.
 The protocol methods allow the delegate to be aware of the ad-related events.
 You can use it to handle your app's or the ad's behavior like adapting your viewController's view size depending on the ad being displayed or not.
 
 */


@protocol AdsAdapterRewardedVideoAdDelegate <NSObject>

@optional

/** Notifies the delegate that the creative from the interstitial ad has been loaded.
 
 
 */

- (void)adsAdapterRewardedVideoAdDidLoad:(AdsAdapter *)adsAdapter;

/** Notifies the delegate that the creative from the interstitial ad has been failed.
 
 
 */

- (void)adsAdapter:(AdsAdapter *)adsAdapter rewardedVideoAdDidFailWithError:(NSError *)error;


/** Notifies the delegate that the creative from the interstitial ad has been disappeared.
 
 
 */

- (void)adsAdapterRewardedVideoAdDidClose:(AdsAdapter *)adsAdapter;

/** Notifies the delegate that the creative from the interstitial ad has been disappeared.
 
 
 */

- (void)adsAdapterRewardedVideoAdDidClick:(AdsAdapter *)adsAdapter;

/** Notifies the delegate that the creative from the interstitial ad has been disappeared.
 
 
 */

- (void)adsAdapterRewardedVideoAd:(AdsAdapter *)adsAdapter withReward:(AdReward *)reward;

/** Notifies the delegate that the method  rewardEarnedOnRewardedVideoAd is fired
 
 
 */
- (void)adsAdapterRewardEarnedOnRewardedVideoAd:(AdsAdapter *)adsAdapter;

/** Notifies the delegate that the creative from the interstitial ad has been disappeared.
 
 
 */

- (void)adsAdapterRewardedVideoAdWillLogImpression:(AdsAdapter *)adsAdapter;

@end


@protocol AdClickDelegate <NSObject>

@optional

-(void)adsAdapterAdWasClicked:(AdsAdapter *)adsAdapter;
-(void)adsAdapterNativeAdWasClicked:(AdsAdapter *)adsAdapter nativeObjectClicked:(NativeObject *)clickedAdView;

@end

@protocol AmazonBiddingDelegate <NSObject>

@optional

-(void)amazonDidReceiveBid:(NSString*)keyword forAdType:(int)typeAd;
-(void)amazonDidFailToReceiveBidWithError:(NSError*)error forAdType:(int)typeAd;

@end

@protocol EquativBiddingDelegate <NSObject>

@optional

-(void)equativDidReceiveBid:(NSString*)keyword forAdType:(int)typeAd;
-(void)equativDidFailToReceiveBidWithError:(NSError*)error forAdType:(int)typeAd;

@end

@protocol BiddingAdResponseDelegate <NSObject>

@optional

-(void)biddingBannerAdResponse:(NSDictionary*)jsonObject;
-(void)biddingIntersitialAdResponse:(NSDictionary*)jsonObject;
-(void)biddingInfeedAdResponse:(NSDictionary*)jsonObject;
-(void)biddingReawardVideoAdResponse:(NSDictionary*)jsonObject;
-(void)biddingNativeAdResponse:(NSDictionary*)jsonObject;

@end

@protocol EquativBiddingRewardDelegate <NSObject>

@optional

/**
 Notifies the delegate that an ad has been loaded and is ready to be displayed.

 */
- (void)rewardedVideoManagerDidLoadAd;

/**
 Notifies the delegate that the last ad call has failed. Check the error for more information.
 
 @param error The error that occurred during the ad loading.
 */
- (void)rewardedVideoManagerDidFailToLoadWithError:(NSError *)error;

/**
 Notifies the delegate that the ad cannot be displayed. Check the error for more information.
 
 @param error The error that occurred when showing the ad.
 */
- (void)rewardedVideoManagerDidFailToShowWithError:(NSError *)error;

/**
 Notifies the delegate that the ad has been displayed.
 
 @param viewController The view controller used to display the ad.
 */
- (void)rewardedVideoManagerDidAppearFromViewController:(UIViewController *)viewController;

/**
 Notifies the delegate that the ad has been closed.
 
 @param viewController The view controller used to display the ad.
 */
- (void)rewardedVideoManagerDidDisappearFromViewController:(UIViewController *)viewController;


/**
 Notifies the delegate that a reward has been granted to the user.
 
 @param reward The reward that has been retrieved.
 */
- (void)rewardedVideoManagerDidCollectReward:(AdReward*)reward;

/**
 Returns whether the SDK should handle the opening of a given click URL.
 
 @note Click counting will happen no matter if the URL is handled by the SDK or by your application.
 
 @param URL The URL that must be handled.
 @return YES if the URL must be handled by the SDK, NO if your application will handle the URL itself.
 */
- (BOOL)rewardedVideoManagerShouldHandleURL:(NSURL *)URL;

/**
 Notifies the delegate that a click modal view controller will be open.
 
 @param viewController The view controller used to display the ad.
 */
- (void)rewardedVideoManagerWillPresentModalViewFromViewController:(UIViewController *)viewController;

/**
 Notifies the delegate that a click modal view controller will be closed.
 
 @param viewController The view controller used to display the ad.
 */
- (void)rewardedVideoManagerWillDismissModalViewFromViewController:(UIViewController *)viewController;

/**
 Returns whether the SDK should handle the audio session.
 
 The SDK might want to handle the audio session when playing some video ads to control how the ad sound will
 interact with other apps or to completely mute the ad.
 
 @return YES if the SDK can handle the audio session, NO if your application can handle the session itself.
 */
- (BOOL)rewardedVideoManagerShouldHandleAudioSession;

/**
 Notifies the delegate that the ad will start playing audio.
 
 */
- (void)rewardedVideoManagerWillPlayAudio;

/**
 Notifies the delegate that the ad will stop playing audio.
 
 */
- (void)rewardedVideoManagerDidFinishPlayingAudio;

/**
 Notifies the delegate that the ad has finished playing the video ad and has open an HTML end card.
 
 @param viewController The view controller used to display the end card.
 */
- (void)rewardedVideoManagerDidLoadEndCardFromViewController:(UIViewController *)viewController;
@end

@protocol ThumbnailAdDelegate <NSObject>
@optional
-(void)adsAdapterThumbnailAdAdAvailable:(AdsAdapter *)adsAdapter;
-(void)adsAdapterThumbnailAdAdLoaded:(AdsAdapter *)adsAdapter;
-(void)adsAdapterThumbnailAdAdDisplayed:(AdsAdapter *)adsAdapter;
-(void)adsAdapterThumbnailAdAdClosed:(AdsAdapter *)adsAdapter;
-(void)adsAdapterThumbnailAdAdError:(AdsAdapter *)adsAdapter withError:(NSError *)error;
-(void)adsAdapterThumbnailAdAdClicked:(AdsAdapter *)adsAdapter;
@end

@protocol AdImpressionDelegate <NSObject>

@optional

/** Notifies the delegate with list of URLs to send impression log
 
 @param impressionURLStrings An array containing the impression URL string
 
 */

- (void)adsAdapter:(AdsAdapter *)adsAdapter onImpression:(NSArray<NSString *> *)impressionURLStrings;

@end
