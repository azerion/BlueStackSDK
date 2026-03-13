//
//  WebViewViewController.h
//  AdServerSdk
//
//  Created by Mohamed Amine Ben Salah on 9/9/15.
//  Copyright © 2015 All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MraidController.h"

@interface WebViewViewController : UIViewController<MraidControllerDelegte, WKNavigationDelegate>

@property (nonatomic, copy) NSString* url;
@property WKWebView *wkWebView;
@property MraidController *mraidController;
@property BOOL shouldUseCustomClose;
@property BOOL shouldCloseAfterLoad;
@property BOOL isMraid;



@end
