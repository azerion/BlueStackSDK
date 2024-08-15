//
//  MNGAdsAdapter.h
//  MNG-Ads-SDK
//  Edited By Hussein Dimessi.
//  Created by Ben Salah Med Amine on 12/9/14.
//  Copyright (c) 2014 MNG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MNGPreference.h"
#import "Protocols.h"
#import "MAdvertiseInfeedFrame.h"
#import "BlueStackAdapterStatus.h"
/**
 Enumeration that define the type of requested ad
 */
typedef NS_ENUM(NSInteger, MNGAdsType) {
    MNGAdsTypeBanner, //Banner ad
    MNGAdsTypeInterstitial, //Interstitial ad
    MNGAdsTypeNative, //Native ad
    MNGAdsTypeInfeed,
    MAdvertiseTypeRewardedVideoAd,
    MAdvertiseTypeThumbnailAd

    
};
/**
 MNGAdSize the same of CGRect
 */
typedef CGRect MNGAdSize;

extern MNGAdSize const kMNGAdSizeBanner; //Small Banner 320 x 50
extern MNGAdSize const kMNGAdSizeDynamicBanner; //Small Banner Screen width x 50
extern MNGAdSize const kMNGAdSizeLargeBanner; //Large Banner 320 x 100
extern MNGAdSize const kMNGAdSizeFullBanner; //Full Banner ipad 468 x 60
extern MNGAdSize const kMNGAdSizeLeaderboard; //Landscape Banner ipad 728 x 90
extern MNGAdSize const kMNGAdSizeDynamicLeaderboard; //Landscape Banner ipad Screen width x 90
extern MNGAdSize const kMNGAdSizeMediumRectangle; //Square Banner 300 x 250

/**
 MNGAdsAdapter is an abstract class that allow communication between the SDK and any Ads server
 */

@interface MNGAdsAdapter : NSObject

/**
 *The parameters of initialisation
 */

@property NSDictionary *parameters;
@property NSDictionary *mngAdServer;


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
@property (weak) id<MNGAdsAdapterBannerDelegate> bannerDelegate;

/**
 * used only for banner
 */
@property (weak) id<MNGAdsAdapterRefreshDelegate> refreshDelegate;

/**
 * used only for interstitial
 */
@property (weak) id<MNGAdsAdapterInterstitialDelegate> interstitialDelegate;

/**
 * used only for native
 */
@property (weak) id<MNGAdsAdapterNativeDelegate> nativeDelegate;

/**
 * used only for infeed
 */
@property (weak) id<MNGAdsAdapterInfeedDelegate> infeedDelegate;

/**
 * used only for rewardVideoAd
 */
@property (weak) id<MAdvertiseAdapterRewardedVideoAdDelegate> rewardVideoAdDelegate;

@property (weak) id<MNGClickDelegate> clickDelegate;

@property (weak) id<BluestackBiddingHBAmazonAPSDelegate> bluestackBiddingHBAmazonAPSDelegate;
@property (weak) id<BluestackBiddingHBSASDelegate> bluestackBiddingHBSASDelegate;
@property (weak) id<BluestackBiddingAdResponseDelegate> bluestackBiddingAdResponseDelegate;


@property (weak) id<BluestackBiddingSASReawardDelegate> bluestackBiddingSASRewardDelegate;

@property (weak) id<BluestackThumbnailAdDelegate> thumbnailAdDelegate;

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


-(BOOL)createBannerInFrame:(CGRect)frame withPreferences:(MNGPreference*)preferences error:(NSError **)error;

-(void)loadBannerInFrame:(CGRect)frame withPreferences:(MNGPreference*)preferences;
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

-(BOOL)createInfeedInFrame:(CGRect)frame withPreferences:(MNGPreference*)preferences error:(NSError **)error;

-(void)loadInfeedInFrame:(MAdvertiseInfeedFrame *)madvertiseFrame withPreferences:(MNGPreference*)preferences;
-(void)loadInfeedInFrame:(MAdvertiseInfeedFrame *)madvertiseFrame ;

/** Create a interstitial view
 request a interstitial view from the SDK that will be returned in the delegate methods
 
 @param preferences user's preferences
 @param autoDisplayed interstitial will be displayed automatically
 
 @return success
 */
-(BOOL)createInterstitialWithPreferences:(MNGPreference*)preferences autoDisplayed:(BOOL)autoDisplayed error:(NSError **)error;

-(void)loadInterstitialWithPreferences:(MNGPreference*)preferences autoDisplayed:(BOOL)autoDisplayed;
-(void)loadInterstitialAutoDisplayed:(BOOL)autoDisplayed;
-(void)loadInterstitialWithPreferences:(MNGPreference*)preferences;
-(void)loadInterstitial;

/** Create a rewardedViewAd
 request a rewardedViewAd from the SDK that will be returned in the delegate methods
 
 @param preferences user's preferences
 */

-(void)loadRewardedVideoAdWithPreferences:(MNGPreference*)preferences;
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
-(BOOL)createNativeWithPreferences:(MNGPreference*)preferences withCover:(BOOL)cover error:(NSError **)error ;

-(void)loadNativeWithPreferences:(MNGPreference*)preferences;
-(void)loadNative;
-(void)loadNativeWithPreferences:(MNGPreference*)preferences withCover:(BOOL)cover;


-(void)releaseMemory;

-(BOOL)showThumbnail;
-(BOOL)showThumbnailInGravity:(MNGPreference*)preferenceGravity  inXMargin:(CGFloat)xMargin inyMargin:(CGFloat)yMargin;
/** Manual Displaying Methods
 check if interstitial is ready
 
 @return can display interstitial
 */

-(BOOL)createThumbnailAdInMaxWidth:(CGFloat)maxWidth  withMaxHeight:(CGFloat)maxHeight
                   withPreferences:(MNGPreference*)preferences error:(NSError **)error;
-(BOOL)createThumbnailAdInMaxWidth:(CGFloat)maxWidth  withMaxHeight:(CGFloat)maxHeight
                   withPreferences:(MNGPreference*)preferences;

-(void)loadThumbnailAdInMaxWidth:(CGFloat)maxWidth  withMaxHeight:(CGFloat)maxHeight withPreferences:(MNGPreference*)preferences;
-(void)loadThumbnailWithPreferences:(MNGPreference*)preferences;





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
