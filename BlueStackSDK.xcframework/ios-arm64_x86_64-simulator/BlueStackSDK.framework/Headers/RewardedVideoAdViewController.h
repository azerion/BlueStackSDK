//
//  RewardedVideoAdViewController.h
//  AdServerSdk
//
//  Created by HtrimechMac on 26/10/2020.
//  Copyright © 2020 All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>
#import <CoreLocation/CoreLocation.h>
#import "VideoAdReward.h"

@protocol RewardedVideoDelegate;

NS_ASSUME_NONNULL_BEGIN

@interface RewardedVideoAdViewController : UIViewController<UIGestureRecognizerDelegate, WKNavigationDelegate, WKUIDelegate>

-(void)loadAd;


@property (weak,nonatomic,nullable) id<RewardedVideoDelegate> delegate;
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


@protocol RewardedVideoDelegate <NSObject>
@required
//
@optional
-(void)onRewardedVideoLoaded:(nonnull RewardedVideoAdViewController *)rewardedVideoAdViewController;
-(void)onRewardedVideo:(nonnull RewardedVideoAdViewController *)rewardedVideoAdViewController didFailWithError:(nullable NSError *)error;
-(void)onRewardedVideoAdWillLogImpression:(nonnull RewardedVideoAdViewController *)rewardedVideoAdViewController;
-(void)onRewardedVideoDidClicked:(nonnull RewardedVideoAdViewController *)rewardedVideoAdViewController;
-(void)onRewardedVideoClosed:(nonnull RewardedVideoAdViewController *)rewardedVideoAdViewController;
-(void)onRewardedVideoCompleted:( nonnull VideoAdReward *)videoAdReward;
-(void)onRewardedVideolAdResponse:( nonnull NSDictionary *)jsonObject;
-(void)onRewardedVideoWillDisappear:(nonnull RewardedVideoAdViewController *)rewardedVideoAdViewController;


///// Tells the delegate that the reward based video ad has rewarded the user.
//- (void)rewardBasedVideoAd:(nonnull GADRewardBasedVideoAd *)rewardBasedVideoAd
//    didRewardUserWithReward:(nonnull GADAdReward *)reward;

@end
