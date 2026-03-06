//
//  MraidController.h
//  AdServerSdk
//
//  Created by Mohamed Amine Ben Salah on 11/30/15.
//  Copyright © 2015 All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

@protocol MraidControllerDelegte;

typedef enum : NSUInteger {
    AdMraidTypeBanner,
    AdMraidTypeInterstitiel,
    AdMraidTypeExpand
} AdMraidType;

@protocol MraidControllerDelegte;

@interface MraidController : NSObject

@property (weak) UIViewController<MraidControllerDelegte> *viewController;
@property (weak) WKWebView *wkWebView;
@property (weak) UIView *closeButton;
@property AdMraidType mraidType;
@property BOOL userInteraction;
@property id<MraidControllerDelegte> delegate;
@property (nonatomic, copy) void (^closeBolck)();

- (void)mraidFinishLoading;
- (void)fireJavaScript:(NSString*)javascript completion:(void (^)(bool , NSError *))completion ;
- (void)handleMraidUrl:(NSURL *)URL dictionary:(NSDictionary *)query;

- (void)setButton:(UIView *)closeButton inPosition:(NSString *)position;
- (void)open:(NSString *)url;
- (void)resize:(CGRect)frame;
- (void)setOrientationProperties:(NSDictionary *)properties;
- (void)playVideo:(NSString*)uri;
- (void)storePicture:(NSString*)uri;
- (void)createCalendarEventWithParameters:(NSDictionary *)parameters;
- (void)close;
- (void)setViewable:(BOOL)Viewable;

@end

@protocol MraidControllerDelegte <NSObject>

@optional
- (void)forceOrientation:(BOOL) orientationIsProtrait allowChangeOrientation:(BOOL) allowChangeOrientation;
- (void)adWasClicked;

@end
