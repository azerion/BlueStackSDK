//
//  SASBidderAdapter.h
//  SmartAdServer
//
//  Created by Thomas Geley on 07/02/2018.
//  Copyright © 2018 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SASBannerBidderAdapterDelegate, SASInterstitialBidderAdapterDelegate;

/// Bidder adapter competition type, indicates which mode to use for Holistic competition.
typedef NS_ENUM(NSInteger, SASBidderAdapterCompetitionType) {
    
    /// Smart Display SDK will leverage the whole Holistic+ feature by passing the real price, unobfuscated.
    SASBidderAdapterCompetitionTypePrice            = 0,
    
    /// Smart Display SDK will pass the price or its representation as a keyword for insertion selection, real price is hosted server-side.
    SASBidderAdapterCompetitionTypeKeyword          = 1,
    
};


/// Bidder adapter rendering type, indicates which rendering mode should be triggered if
/// the winning auction comes from the in-app bidding after Holistic+ competition.
typedef NS_ENUM(NSInteger, SASBidderAdapterCreativeRenderingType) {
    
    /// Smart Display SDK is responsible for rendering the third party winning creative.
    SASBidderAdapterCreativeRenderingTypePrimarySDK            = 0,
    
    /// Third party, such as the publisher, is responsible for rendering the winning creative.
    SASBidderAdapterCreativeRenderingType3rdParty              = 1,
    
    /// The bidder SDK is reponsible for rendering the winning creative and is mediated by Smart Display SDK
    SASBidderAdapterCreativeRenderingTypeMediation             = 2,
    
};

/**
 A protocol to be implemented by bidder adapter classes to beneficiate of inapp in-app bidding and Holistic+ capabilities.
 */
@protocol SASBidderAdapterProtocol <NSObject>

#pragma mark - Adapter informations

/// The competition type for the adapter.
@property (nonatomic, assign) SASBidderAdapterCompetitionType competitionType;

/// The creative rendering type for the adapter.
@property (nonatomic, assign) SASBidderAdapterCreativeRenderingType creativeRenderingType;

/// The name of the adapter.
@property (nonatomic, strong) NSString *adapterName;


#pragma mark - Winning creative informations

/// The name of the winning SSP after bidder competition.
@property (nonatomic, strong) NSString *winningSSPName;

/// The winning creative ID.
@property (nonatomic, strong, nullable) NSString *winningCreativeID;

/// The CPM value of the winner ad. Mandatory for true Price competition.
@property (nonatomic, assign) float price;

/// The CPM currency of the winner ad. Mandatory for true Price competition.
@property (nonatomic, strong, nullable) NSString *currency;

/// The Smart Keywords if any available, nil otherwise. Mandatory for Keyword competition.
@property (nonatomic, strong, nullable) NSString *keyword;

/// The Smart DealID if any available, nil otherwise.
@property (nonatomic, strong, nullable) NSString *dealID;


#pragma mark - Win notification callback

/**
 This method is called when Smart Display SDK did not return an ad with a better CPM than the bidder ad.
 */
- (void)primarySDKLostBidCompetition;

#pragma mark - Smart Display SDK Creative Rendering

/**
 Implements this method with the HTML markup to be displayed by Smart Display SDK when the winning creative
 is the one returned by the bidder.
 
 This markup is available in the documentation of each in-app bidding partner and often depends on several
 parameters, including the creative size.
 */
- (NSString *)bidderWinningAdMarkup;

/**
 This method is called when the bidder's winning ad is displayed, in case Smart Display SDK is responsible for creative rendering.
 
 You may perform actions when receiving this event, like counting impressions on your side, or trigger a new in-app bidding call, etc…
 */
- (void)primarySDKDisplayedBidderAd;

/**
 This method is called when the bidder's winning ad is clicked, in case the Smart Display SDK is responsible for creative rendering.
 
 You may perform action when receiving this event, like counting clicks on your side, etc…
 */
- (void)primarySDKClickedBidderAd;


#pragma mark - Third party Creative Rendering

/**
 This method is called when Smart Display SDK did not return an ad with a better CPM than the bidder ad.
 
 If rendering the ad is a third party responsibility, you should cascade the information, with all necessary
 parameters so that the winning ad is properly displayed.
 */
- (void)primarySDKRequestedThirdPartyRendering;


#pragma mark - Bidder SDK Mediation Rendering - Banner

/**
This method is called when Smart Display SDK is ready to display the banner ad of the Bidder SDK.

You should add your ad view as a subview of the inputed view and forward all Bidder SDK events to the delegate.
 
 @param view the view instanciated by the publisher, that should be the container of the winning ad.
 @param delegate to be informed about the ad view events, this delegate will also forward events to the publisher's integration.
 */
- (void)loadBidderBannerAdInView:(UIView *)view delegate:(nullable id <SASBannerBidderAdapterDelegate>)delegate;


#pragma mark - Bidder SDK Mediation Rendering - Interstitial

/**
This method is called when Smart Display SDK is asking the Bidder SDK to load the interstitial ad.
 
 @param delegate to be informed about the interstitial events, this delegate will also forward events to the publisher's integration.
 */
- (void)loadBidderInterstitialWithDelegate:(nullable id <SASInterstitialBidderAdapterDelegate>)delegate;

/**
This method is called when Smart Display SDK is ready to display the interstitial ad of the Bidder SDK.
 
 @param viewController the viewcontroller instance to be used as the presentor of the Insterstitial ad.
 @param delegate to be informed about the interstitial events, this delegate will also forward events to the publisher's integration.
 */
- (void)showBidderInterstitialFromViewController:(UIViewController *)viewController delegate:(nullable id <SASInterstitialBidderAdapterDelegate>)delegate;

/**
This method returns whether or not the interstitial ad is ready to be displayed
  
 @return YES if interstitial ad is ready, NO otherwise;
 */
- (BOOL)isInterstitialAdReady;

@end

NS_ASSUME_NONNULL_END
