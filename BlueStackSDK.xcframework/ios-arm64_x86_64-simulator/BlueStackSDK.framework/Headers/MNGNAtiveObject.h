//
//  MNGNAtiveObject.h
//  MNG-Ads-SDK
//
//  Created by Ben Salah Med Amine on 12/9/14.
//  Copyright (c) 2014 MNG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MNGNativeAdImpressionListener.h"

typedef NS_ENUM(NSInteger, MNGPriceType) {
    MNGPriceTypeFree,
    MNGPriceTypePayable,
    MNGPriceTypeUnknown
};

typedef NS_ENUM(NSInteger, MNGDisplayType) {
    MNGDisplayTypeUnknown = 0,
    MNGDisplayTypeAppInstall,
    MNGDisplayTypeContent
};

typedef NS_ENUM(NSInteger, MAdvertiseAssetType) {
    MAdvertiseAssetTypeAppIcon = 0,
    MAdvertiseAssetTypeScrennShot
};

@interface MNGNAtiveObject : NSObject

@property (nonatomic, copy, readonly, nullable) NSString *title;
@property (nonatomic, copy, readonly, nullable) NSString *socialContext;
@property (nonatomic, copy, readonly, nullable) NSString *body;
@property (nonatomic, copy, readonly, nullable) NSString *callToAction;
@property (nonatomic, strong, readonly, nullable) UIView *badgeView;
@property (nonatomic, assign, readonly) MNGDisplayType displayType;
@property (nonatomic, assign, readonly) MNGPriceType priceType DEPRECATED_MSG_ATTRIBUTE("Deprecated in MNGAds 2.2");
@property (nonatomic, copy, readonly, nullable) NSString *localizedPrice;
@property (nonatomic, strong, readonly, nullable) UIView *adChoiceBadgeView;

@property (nonatomic, copy, readonly, nullable) NSString *iconUrl;
@property (nonatomic, copy, readonly, nullable) NSString *coverImageUrl;


- (void)registerViewForInteraction:(nonnull UIView *)view
                     withMediaView:(nullable UIView *)mediaView
                 withIconImageView:(nonnull UIImageView *)iconImageView
                withViewController:(nullable UIViewController *)viewController
                 withClickableView:(nullable UIView *)clickableView;

- (void)recordImpression:(nonnull NSDictionary *)args;

- (void)performClick:(nonnull NSDictionary *)args;

- (void)setNativeAdImpressionListener:(nullable id<MNGNativeAdImpressionListener>)impressionDelegate;

@end
