//
//  IMDBannerViewDelegate.h
//  ImproveDigital
//
//  Created by Nagib Bin Azad on 10/31/22.
//

#import <Foundation/Foundation.h>
#import <ImproveDigital/IMDError.h>
#import <ImproveDigital/IMDBannerView.h>

NS_ASSUME_NONNULL_BEGIN

@class IMDBannerView;
@class IMDError;

@protocol IMDBannerViewDelegate <NSObject>

-(void)onLoadBannerView:(IMDBannerView *)bannerView;
-(void)onFailedToLoadBannerView:(IMDBannerView *)bannerView withError:(IMDError *)error;
-(void)onClickedBannerView:(IMDBannerView *)bannerView;
-(void)onDisplayedBannerView:(IMDBannerView *)bannerView;
-(void)onFailedToDisplayBannerView:(IMDBannerView *)bannerView withError:(IMDError *)error;

@end

NS_ASSUME_NONNULL_END
