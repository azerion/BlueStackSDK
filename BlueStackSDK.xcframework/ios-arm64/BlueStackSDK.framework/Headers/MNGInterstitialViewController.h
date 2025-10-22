//
//  MNGInterstitialViewController.h
//  MNGAdServerSdk
//
//  Created by Mohamed Amine Ben Salah on 9/23/15.
//  Copyright © 2015 MNG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <WebKit/WebKit.h>
#import "ExpirableAd.h"
#import "MNGAdLoader.h"

@protocol MNGInterstitialViewDelegate;

@interface MNGInterstitialViewController : UIViewController<UIGestureRecognizerDelegate, WKNavigationDelegate, WKUIDelegate, ExpirableAd>

-(void)loadAd;
-(void)loadAdWithAdResponse:(NSDictionary *)jsonObject;

@property (weak,nonatomic,nullable) id<MNGInterstitialViewDelegate> delegate;
@property (weak,nonatomic, nullable) UIViewController *viewController;
NS_ASSUME_NONNULL_BEGIN
@property NSString *publisherId;
@property NSString *age;
@property NSString *zip;
@property CLLocation *location;
@property NSString *gender;
@property NSString *keyWords;
NS_ASSUME_NONNULL_END

@property BOOL isReady;
-(void)present;

@property (strong, nonatomic) MNGAdLoader *loader;
@end

@protocol MNGInterstitialViewDelegate <NSObject>
@required
//
@optional
-(void)intertitialDidLoad:(nonnull MNGInterstitialViewController *)interstitialViewController;
-(void)intertitial:(nonnull MNGInterstitialViewController *)interstitialViewController didFailWithError:(nullable NSError *)error;
-(void)intertitialWillDisappear:(nonnull MNGInterstitialViewController *)interstitialViewController;
-(void)intertitialDidClicked:(nonnull MNGInterstitialViewController *)interstitialViewController;
-(void)intertitialAdResponse:( nonnull NSDictionary *)jsonObject;
-(void)interstitialDidShown:(nonnull MNGInterstitialViewController *)interstitialViewController;
-(void)interstitial:(nonnull MNGInterstitialViewController *)interstitialViewController didFailToShowWithError:(nullable NSError *)error;

@end
