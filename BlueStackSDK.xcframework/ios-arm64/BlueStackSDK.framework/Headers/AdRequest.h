//
//  AdRequest.h
//  AdServerSdk
//
//  Created by Mohamed Amine Ben Salah on 9/7/15.
//  Copyright (c) 2015 All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKIt/UIkit.h>
#import <CoreGraphics/CoreGraphics.h>
#import <CoreLocation/CoreLocation.h>

typedef enum : NSUInteger {
    AdServerTypeBanner,
    AdServerTypeInterstitiel,
    AdServerTypeNative,
    AdServerTypeInfeed,
    AdServerTypeThumbnail
} AdServerType;

@interface AdRequest : NSObject

@property NSString *rt;
@property NSString *publisherId;
@property NSString *age;
@property NSString *zip;
@property CLLocation *location;
@property NSString *gender;
@property CGSize adSize;
@property NSString *keyWords;
@property NSString *faceDetection;
@property NSString *skadnetworkVersion;


@property BOOL acceptVideo;
@property BOOL dontAcceptVast;
@property BOOL c_parallax;

@property AdServerType type;

/**
 read only
 **/
@property (readonly, copy) NSString *deviceid;
@property (readonly, copy) NSString *locale;
@property (readonly, copy) NSString *os;
@property (readonly, copy) NSString *osVersion;
@property (readonly, copy) NSString *bundleId;
@property (readonly, copy) NSString *connexion;
@property (readonly, copy) NSString *carrier;

@property (readonly, copy) NSString *urlString;

+ (void)loadProductWithParameters:(NSDictionary *)parameters
               fromViewController:(UIViewController *)controller;

@end
