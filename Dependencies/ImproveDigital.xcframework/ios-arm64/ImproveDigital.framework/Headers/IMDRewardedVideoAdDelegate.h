//
//  IMDRewardedVideoAdDelegate.h
//  ImproveDigital
//
//  Created by Nagib Bin Azad on 10/24/22.
//

#import <Foundation/Foundation.h>
#import <ImproveDigital/IMDError.h>
#import <ImproveDigital/IMDRewardedVideoAd.h>

NS_ASSUME_NONNULL_BEGIN

@class IMDError;
@class IMDRewardedVideoAd;

@protocol IMDRewardedVideoAdDelegate <NSObject>

-(void)onLoadAd:(IMDRewardedVideoAd *)ad;
-(void)onFailedToLoadAd:(IMDRewardedVideoAd *)ad withError:(IMDError *)error;
-(void)onClickedAd:(IMDRewardedVideoAd *)ad;
-(void)onDisplayedAd:(IMDRewardedVideoAd *)ad;
-(void)onFailedToDisplayAd:(IMDRewardedVideoAd *)ad withError:(IMDError *)error;
-(void)onClosedAd:(IMDRewardedVideoAd *)ad;
-(void)rewardEarnedOnRewardedVideoAd:(IMDRewardedVideoAd *)ad;

@end


NS_ASSUME_NONNULL_END
