#import "OGARewardItem.h"
#import <UIKit/UIKit.h>

@class OguryAdsBanner;

typedef NS_ENUM(NSInteger, OguryAdsErrorType) {
    OguryAdsErrorLoadFailed                             = 0,
    OguryAdsErrorNoInternetConnection                   = 1,
    OguryAdsErrorAdDisable                              = 2,
    OguryAdsErrorProfigNotSynced                        = 3,
    OguryAdsErrorAdExpired                              = 4,
    OguryAdsErrorSdkInitNotCalled                       = 5,
    OguryAdsErrorAnotherAdAlreadyDisplayed              = 6,
    OguryAdsErrorCantShowAdsInPresentingViewController  = 7,
    OguryAdsErrorUnknown                                = 8
};

@protocol OguryAdsOptinVideoDelegate;
@protocol OguryAdsOptinVideoDelegate <NSObject>
@optional
-(void)oguryAdsOptinVideoAdAvailable;
-(void)oguryAdsOptinVideoAdNotAvailable;
-(void)oguryAdsOptinVideoAdLoaded;
-(void)oguryAdsOptinVideoAdNotLoaded;
-(void)oguryAdsOptinVideoAdDisplayed;
-(void)oguryAdsOptinVideoAdClosed;
-(void)oguryAdsOptinVideoAdRewarded:(OGARewardItem *)item;
-(void)oguryAdsOptinVideoAdError:(OguryAdsErrorType)errorType;
-(void)oguryAdsOptinVideoAdClicked;
-(void)oguryAdsOptinVideoAdOnAdImpression;
@end

@protocol OguryAdsInterstitialDelegate;
@protocol OguryAdsInterstitialDelegate <NSObject>
@optional
-(void)oguryAdsInterstitialAdAvailable;
-(void)oguryAdsInterstitialAdNotAvailable;
-(void)oguryAdsInterstitialAdLoaded;
-(void)oguryAdsInterstitialAdNotLoaded;
-(void)oguryAdsInterstitialAdDisplayed;
-(void)oguryAdsInterstitialAdClosed;
-(void)oguryAdsInterstitialAdError:(OguryAdsErrorType)errorType;
-(void)oguryAdsInterstitialAdClicked;
-(void)oguryAdsInterstitialAdOnAdImpression;
@end

@protocol OguryAdsThumbnailAdDelegate;
@protocol OguryAdsThumbnailAdDelegate <NSObject>
@optional
-(void)oguryAdsThumbnailAdAdAvailable;
-(void)oguryAdsThumbnailAdAdNotAvailable;
-(void)oguryAdsThumbnailAdAdLoaded;
-(void)oguryAdsThumbnailAdAdNotLoaded;
-(void)oguryAdsThumbnailAdAdDisplayed;
-(void)oguryAdsThumbnailAdAdClosed;
-(void)oguryAdsThumbnailAdAdError:(OguryAdsErrorType)errorType;
-(void)oguryAdsThumbnailAdAdClicked;
-(void)oguryAdsThumbnailAdOnAdImpression;
@end

@protocol OguryAdsBannerDelegate;
@protocol OguryAdsBannerDelegate <NSObject>
@optional
-(void)oguryAdsBannerAdAvailable:(OguryAdsBanner*)bannerAds;
-(void)oguryAdsBannerAdNotAvailable:(OguryAdsBanner*)bannerAds;
-(void)oguryAdsBannerAdLoaded:(OguryAdsBanner*)bannerAds;
-(void)oguryAdsBannerAdNotLoaded:(OguryAdsBanner*)bannerAds;
-(void)oguryAdsBannerAdDisplayed:(OguryAdsBanner*)bannerAds;
-(void)oguryAdsBannerAdClicked:(OguryAdsBanner*)bannerAds;
-(void)oguryAdsBannerAdClosed:(OguryAdsBanner*)bannerAds;
-(void)oguryAdsBannerAdError:(OguryAdsErrorType)errorType forBanner:(OguryAdsBanner*)bannerAds;
-(void)oguryAdsBannerAdOnAdImpression;
-(UIViewController *)oguryAdsBannerAdPresentingViewController:(OguryAdsBanner*)bannerAds;
@end

