//
//  SASRewardedVideoManager.h
//  SmartAdServer
//
//  Created by Thomas Geley on 13/06/2017.
//  Copyright © 2018 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SASDisplayKit/SASRewardedVideoManagerDelegate.h>
#import <SASDisplayKit/SASBaseInterstitialManager.h>
#import <SASDisplayKit/SASBiddingAdResponse.h>

NS_ASSUME_NONNULL_BEGIN

@class SASAdPlacement;

/**
 Class used to load and display rewarded interstitial ads.
 */
@interface SASRewardedVideoManager : SASBaseInterstitialManager

/// An object implementing the SASRewardedVideoManagerDelegate protocol.
@property (nonatomic, weak, nullable) id<SASRewardedVideoManagerDelegate> delegate;

/**
 Initializes a new SASRewardedVideoManager instance.
 
 @param placement The placement that will be used to load rewarded interstitial ads.
 @param delegate An object implementing the SASRewardedVideoManagerDelegate protocol.
 
 @return An initialized instance of SASRewardedVideoManager.
 */
- (instancetype)initWithPlacement:(SASAdPlacement *)placement delegate:(nullable id<SASRewardedVideoManagerDelegate>)delegate;

/**
 Initialize a new SASRewardedVideoManager instance with a bidding ad response.
 
 A bidding ad response can be retrieved using an instance of SASBiddingManager.
 
 @param biddingAdResponse The bidding ad reponse that will be used to load the interstitial ad.
 @param delegate An object implementing the SASRewardedVideoManagerDelegate protocol.
 
 @return An initialized instance of SASInterstitialManager.
 */
- (instancetype)initWithBiddingAdResponse:(SASBiddingAdResponse *)biddingAdResponse delegate:(nullable id <SASRewardedVideoManagerDelegate>)delegate;

- (instancetype)init NS_UNAVAILABLE;

/**
 Loads a Rewarded Video Ad with a secured transaction token.
 
 @param securedTransactionToken A secured transaction token, base64 encoded, to be forwarded to Smart's delivery engine.
 */
- (void)loadWithSecuredTransactionToken:(nullable NSString *)securedTransactionToken NS_SWIFT_NAME(load(securedTransactionToken:));


@end

NS_ASSUME_NONNULL_END
