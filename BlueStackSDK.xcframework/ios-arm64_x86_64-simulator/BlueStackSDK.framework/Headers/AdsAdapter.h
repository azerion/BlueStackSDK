//
//  AdsAdapter.h
//
//  Edited By Hussein Dimessi.
//  Created by Ben Salah Med Amine on 12/9/14.
//  Copyright (c) 2014 All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Preference.h"
#import "Protocols.h"
#import "InfeedFrame.h"
/**
 Enumeration that define the type of requested ad
 */
typedef NS_ENUM(NSInteger, AdsType) {
    AdsTypeBanner, //Banner ad
    AdsTypeInterstitial, //Interstitial ad
    AdsTypeNative, //Native ad
    AdsTypeInfeed,
    AdsTypeRewardedVideoAd,
    AdsTypeThumbnailAd,
    AdsTypeAppOpenAd
};
/**
 BannerAdSize the same of CGRect
 */
typedef CGRect BannerAdSize;

extern BannerAdSize const kBannerAdSizeBanner; //Small Banner 320 x 50
extern BannerAdSize const kBannerAdSizeDynamicBanner; //Small Banner Screen width x 50
extern BannerAdSize const kBannerAdSizeLargeBanner; //Large Banner 320 x 100
extern BannerAdSize const kBannerAdSizeFullBanner; //Full Banner ipad 468 x 60
extern BannerAdSize const kBannerAdSizeLeaderboard; //Landscape Banner ipad 728 x 90
extern BannerAdSize const kBannerAdSizeDynamicLeaderboard; //Landscape Banner ipad Screen width x 90
extern BannerAdSize const kBannerAdSizeMediumRectangle; //Square Banner 300 x 250

/**
 AdsAdapter is an abstract class that allow communication between the SDK and any Ads server
 */

@interface AdsAdapter : NSObject

/**
 *The parameters of initialisation
 */

@property NSDictionary *parameters;
@property NSDictionary *adServer;


/**
  viewController that th ad will be shown
 @warning required in interstitial
 */

@property (weak) UIViewController *viewController;

@property (atomic) BOOL completed;

@property (atomic) BOOL gdpr;

/**
 *timeout of one ads server
 */

@property NSTimeInterval timeout;


@property (nonatomic, strong, nullable) NSString *supplyChainObject;

/**
 *Delegates
 */

/**
 * used only for banner
 */
@property (weak) id<AdsAdapterBannerDelegate> bannerDelegate;

/**
 * used only for banner
 */
@property (weak) id<AdsAdapterRefreshDelegate> refreshDelegate;

/**
 * used only for interstitial
 */
@property (weak) id<AdsAdapterInterstitialDelegate> interstitialDelegate;

/**
 * used only for native
 */
@property (weak) id<AdsAdapterNativeDelegate> nativeDelegate;

/**
 * used only for infeed
 */
@property (weak) id<AdsAdapterInfeedDelegate> infeedDelegate;

/**
 * used only for rewardVideoAd
 */
@property (weak) id<AdsAdapterRewardedVideoAdDelegate> rewardVideoAdDelegate;

@property (weak) id<AdClickDelegate> clickDelegate;

@property (weak) id<AmazonBiddingDelegate> amazonBiddingDelegate;
@property (weak) id<EquativBiddingDelegate> equativBiddingDelegate;
@property (weak) id<BiddingAdResponseDelegate> biddingAdResponseDelegate;


@property (weak) id<EquativBiddingRewardDelegate> equativBiddingRewardDelegate;

@property (weak) id<ThumbnailAdDelegate> thumbnailAdDelegate;

/**
 * used for sending impression data
 */
@property (weak) id<AdImpressionDelegate> biddingImpressionDelegate;

/** Init the Ads server
 Any Ads server need some parameters to be inited
 
 @param parameters the parameters of initialisation
 
 */

-(id)initWithParameters:(NSDictionary*)parameters;

/** Create a banner view
 request a banner view from the SDK that will be returned in the delegate methods
 
 @param preferences user's preferences
 
 @return success
 */


-(BOOL)createBannerInFrame:(CGRect)frame withPreferences:(Preference*)preferences error:(NSError **)error;

-(void)loadBannerInFrame:(CGRect)frame withPreferences:(Preference*)preferences;
-(void)loadBannerInFrame:(CGRect)frame;
-(void)toggleRefresh:(BOOL)status;


-(void)createBiddingBanner:(NSDictionary*)data;
-(void)createBiddingInterstitial:(NSDictionary*)data;
-(void)createBiddingInfeed:(NSDictionary*)data;
-(void)createBiddingRewardVideo:(NSDictionary*)data;
-(void)createBiddingNativeAd:(NSDictionary*)data;


/** Create a infeed view
 request a infeed view from the SDK that will be returned in the delegate methods
 
 @param preferences user's preferences
 
 @return success
 */

-(BOOL)createInfeedInFrame:(CGRect)frame withPreferences:(Preference*)preferences error:(NSError **)error;

-(void)loadInfeedInFrame:(InfeedFrame *)infeedFrame withPreferences:(Preference*)preferences;
-(void)loadInfeedInFrame:(InfeedFrame *)infeedFrame ;

/** Create a interstitial view
 request a interstitial view from the SDK that will be returned in the delegate methods
 
 @param preferences user's preferences
 @param autoDisplayed interstitial will be displayed automatically
 
 @return success
 */
-(BOOL)createInterstitialWithPreferences:(Preference*)preferences autoDisplayed:(BOOL)autoDisplayed error:(NSError **)error;

-(void)loadInterstitialWithPreferences:(Preference*)preferences autoDisplayed:(BOOL)autoDisplayed;
-(void)loadInterstitialAutoDisplayed:(BOOL)autoDisplayed;
-(void)loadInterstitialWithPreferences:(Preference*)preferences;
-(void)loadInterstitial;

/** Create a rewardedViewAd
 request a rewardedViewAd from the SDK that will be returned in the delegate methods
 
 @param preferences user's preferences
 */

-(void)loadRewardedVideoAdWithPreferences:(Preference*)preferences;
-(void)loadRewardedVideoAd;

/**
 Presents the rewarded video ad modally from the specified view controller.
 
 - Parameter rootViewController: The view controller that will be used to present the rewarded video ad.
 - Parameter flag: Pass YES to animate the presentation; otherwise, pass NO.
 
 */
-(void)showAdFromRootViewController:(UIViewController*)rootViewController animated:(BOOL)flag;

/** Manual Displaying Methods
 Display interstitial
 
 @return success
 */

-(BOOL)displayInterstitial;

/** Manual Displaying Methods
 check if interstitial is ready
 
 @return can display interstitial
 */

-(BOOL)isInterstitialReady;




/** Create a native Ads view
 request a native object from the SDK that will be returned in the delegate methods
 
 @param preferences user's preferences
 
 @return success
 */
-(BOOL)createNativeWithPreferences:(Preference*)preferences withCover:(BOOL)cover error:(NSError **)error ;

-(void)loadNativeWithPreferences:(Preference*)preferences;
-(void)loadNative;
-(void)loadNativeWithPreferences:(Preference*)preferences withCover:(BOOL)cover;


-(void)releaseMemory;

-(BOOL)showThumbnail;
-(BOOL)showThumbnailInGravity:(Preference*)preferenceGravity  inXMargin:(CGFloat)xMargin inyMargin:(CGFloat)yMargin;
/** Manual Displaying Methods
 check if interstitial is ready
 
 @return can display interstitial
 */

-(BOOL)createThumbnailAdInMaxWidth:(CGFloat)maxWidth  withMaxHeight:(CGFloat)maxHeight
                   withPreferences:(Preference*)preferences error:(NSError **)error;
-(BOOL)createThumbnailAdInMaxWidth:(CGFloat)maxWidth  withMaxHeight:(CGFloat)maxHeight
                   withPreferences:(Preference*)preferences;

-(void)loadThumbnailAdInMaxWidth:(CGFloat)maxWidth  withMaxHeight:(CGFloat)maxHeight withPreferences:(Preference*)preferences;
-(void)loadThumbnailWithPreferences:(Preference*)preferences;





-(BOOL)isThumbnailReady;

/** DebugLog
 active debug log for specific adapter
 
 @param enabled  active debug log for specific adapter

 */

-(void)enableDebugLog:(BOOL)enabled;

/** GetVersion
 return the version of the sdk
 */

+(NSString *)getVersion;
 

-(void)sendMessageToBanner:(NSString*) command;

@end
