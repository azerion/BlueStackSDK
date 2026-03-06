//
//  BannerAdView.h
//  AdServerSdk
//
//  Created by Mohamed Amine Ben Salah on 9/7/15.
//  Copyright (c) 2015 All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <WebKit/WebKit.h>
#import "AdLoadService.h"

extern CGSize const kAdServerSizeBanner50; //Small Banner screenWidth x 50
extern CGSize const kAdServerSizeLargeBanner100; //Large Banner screenWidth x 100
extern CGSize const kAdServerSizeFullBanner60; //Full Banner ipad screenWidth x 60
extern CGSize const kAdServerSizeLeaderboard90; //Landscape Banner ipad screenWidth x 90
extern CGSize const kAdServerSizeMediumRectangle; //Square Banner 300 x 250


@protocol BannerAdViewDelegate;

@interface BannerAdView : UIView<UIGestureRecognizerDelegate, WKNavigationDelegate, WKUIDelegate>

-(void)loadAd;
-(void)loadAdWithAdResponse:(NSDictionary *)jsonObject;

@property (weak, nonatomic) id<BannerAdViewDelegate> delegate;

@property (weak, nonatomic) UIViewController *viewController;
@property NSString *publisherId;
@property NSString *age;
@property NSString *zip;
@property CLLocation *location;
@property NSString *gender;
@property CGSize adSize;
@property NSString *keyWords;

@property CGSize returnedAdSize;

@property (strong, nonatomic) AdLoadService *loader;

@end

@protocol BannerAdViewDelegate <NSObject>

@optional

-(void)bannerViewDidLoad:(BannerAdView *)bannerView;
-(void)bannerView:(BannerAdView *)bannerView didFailWithError:(NSError *)error;
-(void)bannerViewDidClicked:(BannerAdView *)bannerView;
-(void)bannerAdResponse:(NSDictionary *)jsonObject;

@end
