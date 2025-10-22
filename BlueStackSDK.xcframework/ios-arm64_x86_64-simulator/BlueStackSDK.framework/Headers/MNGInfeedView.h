//
//  MNGInfeedView.h
//  MNGAdServerSdk
//
//  Created by Mohamed Amine Ben Salah on 9/7/15.
//  Copyright (c) 2015 MNG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <WebKit/WebKit.h>

@protocol MNGInfeedViewDelegate;

@interface MNGInfeedView : UIView<UIGestureRecognizerDelegate,WKNavigationDelegate,WKUIDelegate>

-(void)loadAd;

@property (weak, nonatomic) id<MNGInfeedViewDelegate> delegate;

@property (weak, nonatomic) UIViewController *viewController;
@property NSString *publisherId;
@property NSString *age;
@property NSString *zip;
@property CLLocation *location;
@property NSString *gender;
@property CGSize adSize;
@property NSString *keyWords;

@property CGSize returnedAdSize;

@end

@protocol MNGInfeedViewDelegate <NSObject>

@optional

-(void)infeedViewDidLoad:(MNGInfeedView *)infeedView;
-(void)infeedView:(MNGInfeedView *)infeedView didFailWithError:(NSError *)error;
-(void)infeedViewDidClick:(MNGInfeedView *)infeedView;
-(void)infeedAdResponse:(NSDictionary *)jsonObject;

@end
