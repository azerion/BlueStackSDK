//
//  DTBOmSdkHelper.h
//  DTBiOSSDK
//
//  Created by Thanislas, Sahaya on 2/3/22.
//  Copyright © 2022 amazon.com. All rights reserved.
//

#ifndef APSOmSdkHelper_h
#define APSOmSdkHelper_h

#import <WebKit/WebKit.h>

#define INTEGRATED_OM_VERSION @"1_3_28"
#define DEFAULT_OMSDK_PARTNER_NAME @"Amazon1"

@interface APSOmSdkHelper : NSObject

+ (void)initOmSdk;
+ (BOOL)getFeatureEnableFlag;

- (instancetype)init;
- (BOOL)isInitialized;
- (void)startHTMLDisplayOMSDKAdSession:(WKWebView *)webView;
- (void)startVideoOMSDKAdSession:(WKWebView *)webView;
- (void)signalAdImpression;
- (void)signalAdLoaded;
- (void)addFriendlyObstruction:(UIView *)view;
- (void)cleanup;

@end


#endif /* DTBOmSdkHelper_h */

