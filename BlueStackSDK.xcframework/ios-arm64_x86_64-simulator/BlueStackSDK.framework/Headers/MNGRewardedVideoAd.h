//
//  MNGRewardedVideoAd.h
//  MNGAdServerSdk
//
//  Created by HtrimechMac on 26/10/2020.
//  Copyright © 2020 MNG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>
#import <CoreLocation/CoreLocation.h>
#import "BlueStackVideoReward.h"

@protocol MNGRewardedVideoDelegate;

NS_ASSUME_NONNULL_BEGIN

@interface MNGRewardedVideoAd : UIViewController<UIGestureRecognizerDelegate, WKNavigationDelegate, WKUIDelegate>

-(void)loadAd;


@property (weak,nonatomic,nullable) id<MNGRewardedVideoDelegate> delegate;
@property (weak,nonatomic, nullable) UIViewController *viewController;
@property NSString *publisherId;
@property NSString *age;
@property NSString *zip;
@property CLLocation *location;
@property NSString *gender;
@property NSString *keyWords;
NS_ASSUME_NONNULL_END

@property BOOL isReady;
-(void)present;

@end


@protocol MNGRewardedVideoDelegate <NSObject>
@required
//
@optional
-(void)onRewardedVideoLoaded:(nonnull MNGRewardedVideoAd *)mnGRewardedVideoAd;
-(void)onRewardedVideo:(nonnull MNGRewardedVideoAd *)mnGRewardedVideoAd didFailWithError:(nullable NSError *)error;
-(void)onRewardedVideoAdWillLogImpression:(nonnull MNGRewardedVideoAd *)mnGRewardedVideoAd;
-(void)onRewardedVideoDidClicked:(nonnull MNGRewardedVideoAd *)mnGRewardedVideoAd;
-(void)onRewardedVideoClosed:(nonnull MNGRewardedVideoAd *)mnGRewardedVideoAd;
-(void)onRewardedVideoCompleted:( nonnull BlueStackVideoReward *)blueStackVideoReward;
-(void)onRewardedVideolAdResponse:( nonnull NSDictionary *)jsonObject;
-(void)onRewardedVideoWillDisappear:(nonnull MNGRewardedVideoAd *)mnGRewardedVideoAd;


///// Tells the delegate that the reward based video ad has rewarded the user.
//- (void)rewardBasedVideoAd:(nonnull GADRewardBasedVideoAd *)rewardBasedVideoAd
//    didRewardUserWithReward:(nonnull GADAdReward *)reward;

@end
