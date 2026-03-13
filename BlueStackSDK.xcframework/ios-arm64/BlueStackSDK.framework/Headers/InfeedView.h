//
//  InfeedView.h
//  AdServerSdk
//
//  Created by Mohamed Amine Ben Salah on 9/7/15.
//  Copyright (c) 2015 All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <WebKit/WebKit.h>

@protocol InfeedViewDelegate;

@interface InfeedView : UIView<UIGestureRecognizerDelegate,WKNavigationDelegate,WKUIDelegate>

-(void)loadAd;

@property (weak, nonatomic) id<InfeedViewDelegate> delegate;

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

@protocol InfeedViewDelegate <NSObject>

@optional

-(void)infeedViewDidLoad:(InfeedView *)infeedView;
-(void)infeedView:(InfeedView *)infeedView didFailWithError:(NSError *)error;
-(void)infeedViewDidClick:(InfeedView *)infeedView;
-(void)infeedAdResponse:(NSDictionary *)jsonObject;

@end
