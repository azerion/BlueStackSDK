//
//  InterstitialViewController.h
//  AdServerSdk
//
//  Created by Mohamed Amine Ben Salah on 9/23/15.
//  Copyright © 2015 All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <WebKit/WebKit.h>
#import "ExpirableAd.h"
#import "AdLoadService.h"

@protocol InterstitialViewDelegate;

@interface InterstitialViewController : UIViewController<UIGestureRecognizerDelegate, WKNavigationDelegate, WKUIDelegate, ExpirableAd>

-(void)loadAd;
-(void)loadAdWithAdResponse:(NSDictionary *)jsonObject;

@property (weak,nonatomic,nullable) id<InterstitialViewDelegate> delegate;
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

@property (strong, nonatomic) AdLoadService *loader;
@end

@protocol InterstitialViewDelegate <NSObject>
@required
//
@optional
-(void)intertitialDidLoad:(nonnull InterstitialViewController *)interstitialViewController;
-(void)intertitial:(nonnull InterstitialViewController *)interstitialViewController didFailWithError:(nullable NSError *)error;
-(void)intertitialWillDisappear:(nonnull InterstitialViewController *)interstitialViewController;
-(void)intertitialDidClicked:(nonnull InterstitialViewController *)interstitialViewController;
-(void)intertitialAdResponse:( nonnull NSDictionary *)jsonObject;
-(void)interstitialDidShown:(nonnull InterstitialViewController *)interstitialViewController;
-(void)interstitial:(nonnull InterstitialViewController *)interstitialViewController didFailToShowWithError:(nullable NSError *)error;

@end
