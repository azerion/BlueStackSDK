//
//  DTBAdView.h
//  DTBiOSSDK
//
//  Copyright (c) 2021 Amazon Publisher Services. All rights reserved.

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DTBAdView : WKWebView
 
- (void) evaluateJavaScriptFromString:(NSString *)script;
- (BOOL) getVideoFlag;
- (void) setVideoFlag:(NSString *) videoFlag;

@end

NS_ASSUME_NONNULL_END
