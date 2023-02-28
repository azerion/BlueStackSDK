//
//  IMDInterstitialAdDelegate.h
//  ImproveDigital
//
//  Created by Nagib Bin Azad on 10/27/22.
//

#import <Foundation/Foundation.h>
#import <ImproveDigital/IMDError.h>
#import <ImproveDigital/IMDInterstitialAd.h>

@class IMDError;
@class IMDInterstitialAd;

NS_ASSUME_NONNULL_BEGIN

@protocol IMDInterstitialAdDelegate <NSObject>
@optional

-(void)onLoadInterstitialAd:(IMDInterstitialAd *)ad;
-(void)onFailedToLoadInterstitialAd:(IMDInterstitialAd *)ad withError:(IMDError *)error;
-(void)onClickedInterstitialAd:(IMDInterstitialAd *)ad;
-(void)onDisplayedInterstitialAd:(IMDInterstitialAd *)ad;
-(void)onFailedToDisplayInterstitialAd:(IMDInterstitialAd *)ad withError:(IMDError *)error;
-(void)onClosedInterstitialAd:(IMDInterstitialAd *)ad;

@end

NS_ASSUME_NONNULL_END
