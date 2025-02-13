//
//  Protocols.h
//  MNG-Ads-SDK
//
//  Created by Ben Salah Med Amine on 12/9/14.
//  Copyright (c) 2014 MNG. All rights reserved.
//

#import <UIKit/UIKit.h>


@class MNGAdsAdapter,MNGNAtiveObject, MAdvertiseReward;

/**
 
 The delegate of a MNGAdsAdapter object must adopt the MNGAdsAdapterBannerDelegate protocol.
 
 Many methods of MNGAdsAdapterBannerDelegate return the ad view sent by the message.
 The protocol methods allow the delegate to be aware of the ad-related events.
 You can use it to handle your app's or the ad's behavior like adapting your viewController's view size depending on the ad being displayed or not.
 
 */


@protocol MNGAdsAdapterBannerDelegate <NSObject>

@optional

/** Notifies the delegate that the creative from the banner ad has been loaded.
 
 @param adView An ad view object informing the delegate about the banner being loaded.
 
 */

- (void)adsAdapter:(MNGAdsAdapter *)adsAdapter bannerDidLoad:(UIView *)adView preferredHeight:(CGFloat)preferredHeight;

/** Notifies the delegate that the creative from the banner ad has been failed.
 
 
 */

- (void)adsAdapter:(MNGAdsAdapter *)adsAdapter bannerDidFailWithError:(NSError *)error;

-(void)adsAdapter:(MNGAdsAdapter *)adsAdapter bannerDidChangeFrame:(CGRect)frame;

@end

@protocol MNGAdsAdapterInfeedDelegate <NSObject>

@optional

/** Notifies the delegate that the creative from the banner ad has been loaded.
 
 @param adView An ad view object informing the delegate about the banner being loaded.
 
 */

- (void)adsAdapter:(MNGAdsAdapter *)adsAdapter infeedDidLoad:(UIView *)adView; __attribute__((deprecated("use adsAdapter:infeedDidLoad:preferredHeight: instead.")));

- (void)adsAdapter:(MNGAdsAdapter *)adsAdapter infeedDidLoad:(UIView *)adView preferredHeight:(CGFloat)preferredHeight;

/** Notifies the delegate that the creative from the banner ad has been failed.
 
 
 */

- (void)adsAdapter:(MNGAdsAdapter *)adsAdapter infeedDidFailWithError:(NSError *)error;



@end

@protocol MNGAdsAdapterRefreshDelegate <NSObject>

@optional

/** Notifies the delegate that the creative from the banner ad has been refreshed.
 
 */

- (void)adsAdapterBannerDidRefresh:(MNGAdsAdapter *)adsAdapter;

/** Notifies the delegate that the creative from the banner ad has been failed to refresh.
 
 
 */

- (void)adsAdapter:(MNGAdsAdapter *)adsAdapter bannerDidFailToRefreshWithError:(NSError *)error;

@end

/**
 
 The delegate of a MNGAdsAdapter object must adopt the MNGAdsAdapterInterstitialDelegate protocol.
 
 Many methods of MNGAdsAdapterInterstitialDelegate return the ad view sent by the message.
 The protocol methods allow the delegate to be aware of the ad-related events.
 You can use it to handle your app's or the ad's behavior like adapting your viewController's view size depending on the ad being displayed or not.
 
 */


@protocol MNGAdsAdapterInterstitialDelegate <NSObject>

@optional

/** Notifies the delegate that the creative from the interstitial ad has been loaded.
 
 
 */

- (void)adsAdapterInterstitialDidLoad:(MNGAdsAdapter *)adsAdapter;

/** Notifies the delegate that the creative from the interstitial ad has been disappeared.
 
 
 */

- (void)adsAdapterInterstitialDisappear:(MNGAdsAdapter *)adsAdapter;

/** Notifies the delegate that the creative from the interstitial ad has been failed.
 
 
 */

- (void)adsAdapter:(MNGAdsAdapter *)adsAdapter interstitialDidFailWithError:(NSError *)error;


/** Notifies the delegate that the creative from the interstitial ad has been shown.
 
 
 */

- (void)adsAdapterInterstitialDidShown:(MNGAdsAdapter *)adsAdapter;

@end

/**
 
 The delegate of a MNGAdsAdapter object must adopt the MNGAdsAdapterNativeDelegate protocol.
 
 Many methods of MNGAdsAdapterNativeDelegate return the ad view sent by the message.
 The protocol methods allow the delegate to be aware of the ad-related events.
 You can use it to handle your app's or the ad's behavior like adapting your viewController's view size depending on the ad being displayed or not.
 
 */


@protocol MNGAdsAdapterNativeDelegate <NSObject>

@optional

/** Notifies the delegate that the creative from the nativeObject ad has been loaded.
 
 @param adView An ad view object informing the delegate about the nativeObject being loaded.
 
 */

- (void)adsAdapter:(MNGAdsAdapter *)adsAdapter nativeObjectDidLoad:(MNGNAtiveObject *)adView;

/** Notifies the delegate that the creative from the nativeObject ad has been failed.
 
 
 */

- (void)adsAdapter:(MNGAdsAdapter *)adsAdapter nativeObjectDidFailWithError:(NSError *)error withCover:(BOOL)cover;

@end

@protocol MNGAdsAdapterNativeCollectionDelegate <NSObject>

@optional

/** Notifies the delegate that the creative from the nativeObjects ad has been loaded.
 
 @param adView An ad view object informing the delegate about the nativeObject being loaded.
 
 */

- (void)adsAdapter:(MNGAdsAdapter *)adsAdapter nativeCollectionDidLoad:(NSArray *)adView;

/** Notifies the delegate that the creative from the nativeCollection ad has been failed.
 
 
 */

- (void)adsAdapter:(MNGAdsAdapter *)adsAdapter nativeCollectionDidFailWithError:(NSError *)error;

- (void)adsAdapterNativeAdWasClicked:(MNGAdsAdapter *)adsAdapter nativeObjectClicked:(MNGNAtiveObject *)clickedAdView;

@end

/**
 
 The delegate of a MNGAdsAdapter object must adopt the MNGAdsAdapterInterstitialDelegate protocol.
 
 Many methods of MNGAdsAdapterInterstitialDelegate return the ad view sent by the message.
 The protocol methods allow the delegate to be aware of the ad-related events.
 You can use it to handle your app's or the ad's behavior like adapting your viewController's view size depending on the ad being displayed or not.
 
 */


@protocol MAdvertiseAdapterRewardedVideoAdDelegate <NSObject>

@optional

/** Notifies the delegate that the creative from the interstitial ad has been loaded.
 
 
 */

- (void)adsAdapterRewardedVideoAdDidLoad:(MNGAdsAdapter *)adsAdapter;

/** Notifies the delegate that the creative from the interstitial ad has been failed.
 
 
 */

- (void)adsAdapter:(MNGAdsAdapter *)adsAdapter rewardedVideoAdDidFailWithError:(NSError *)error;


/** Notifies the delegate that the creative from the interstitial ad has been disappeared.
 
 
 */

- (void)adsAdapterRewardedVideoAdDidClose:(MNGAdsAdapter *)adsAdapter;

/** Notifies the delegate that the creative from the interstitial ad has been disappeared.
 
 
 */

- (void)adsAdapterRewardedVideoAdDidClick:(MNGAdsAdapter *)adsAdapter;

/** Notifies the delegate that the creative from the interstitial ad has been disappeared.
 
 
 */

- (void)adsAdapterRewardedVideoAd:(MNGAdsAdapter *)adsAdapter withReward:(MAdvertiseReward *)reward;

/** Notifies the delegate that the method  rewardEarnedOnRewardedVideoAd is fired
 
 
 */
- (void)adsAdapterRewardEarnedOnRewardedVideoAd:(MNGAdsAdapter *)adsAdapter;

/** Notifies the delegate that the creative from the interstitial ad has been disappeared.
 
 
 */

- (void)adsAdapterRewardedVideoAdWillLogImpression:(MNGAdsAdapter *)adsAdapter;

@end


@protocol MNGClickDelegate <NSObject>

@optional

-(void)adsAdapterAdWasClicked:(MNGAdsAdapter *)adsAdapter;
-(void)adsAdapterNativeAdWasClicked:(MNGAdsAdapter *)adsAdapter nativeObjectClicked:(MNGNAtiveObject *)clickedAdView;

@end

@protocol BluestackBiddingHBAmazonAPSDelegate <NSObject>

@optional

-(void)bluestackBiddingHBAmazonAPSDidLoad:(NSString*)keyword WithAdType:( int)typeAd;
-(void)bluestackBiddingHBAmazonAPSDidFail:(NSError*)error WithAdType:( int)typeAd;
@end

@protocol BluestackBiddingHBSASDelegate <NSObject>

@optional

-(void)bluestackBiddingHBSASDidLoad:(NSString*)keyWordSAS WithAdType:( int)typeAd;
-(void)bluestackBiddingHBSASDidFail:(NSError*)error WithAdType:( int)typeAd;

@end
@protocol BluestackBiddingAdResponseDelegate <NSObject>

@optional

-(void)bluestackBiddingBannerAdResponse:(NSDictionary*)jsonObject;
-(void)bluestackBiddingIntersitialAdResponse:(NSDictionary*)jsonObject;
-(void)bluestackBiddingInfeedAdResponse:(NSDictionary*)jsonObject;
-(void)bluestackBiddingReawardVideoAdResponse:(NSDictionary*)jsonObject;
-(void)bluestackBiddingNativeAdResponse:(NSDictionary*)jsonObject;

@end

@protocol BluestackBiddingSASReawardDelegate <NSObject>

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
- (void)rewardedVideoManagerDidCollectReward:(MAdvertiseReward*)reward;

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

@protocol BluestackThumbnailAdDelegate <NSObject>
@optional
-(void)adsAdapterThumbnailAdAdAvailable:(MNGAdsAdapter *)adsAdapter;
-(void)adsAdapterThumbnailAdAdLoaded:(MNGAdsAdapter *)adsAdapter;
-(void)adsAdapterThumbnailAdAdDisplayed:(MNGAdsAdapter *)adsAdapter;
-(void)adsAdapterThumbnailAdAdClosed:(MNGAdsAdapter *)adsAdapter;
-(void)adsAdapterThumbnailAdAdError:(MNGAdsAdapter *)adsAdapter withError:(NSError *)error;
-(void)adsAdapterThumbnailAdAdClicked:(MNGAdsAdapter *)adsAdapter;
@end

