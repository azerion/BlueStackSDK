//
//  NativeObject.h
//
//
//  Created by Ben Salah Med Amine on 12/9/14.
//  Copyright (c) 2014 . All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NativeAdImpressionListener.h"

typedef NS_ENUM(NSInteger, PriceType) {
    PriceTypeFree,
    PriceTypePayable,
    PriceTypeUnknown
};

typedef NS_ENUM(NSInteger, DisplayType) {
    DisplayTypeUnknown = 0,
    DisplayTypeAppInstall,
    DisplayTypeContent
};

typedef NS_ENUM(NSInteger, AdAssetType) {
    AdAssetTypeAppIcon = 0,
    AdAssetTypeScrennShot
};

@interface NativeObject : NSObject

@property (nonatomic, copy, readonly, nullable) NSString *title;
@property (nonatomic, copy, readonly, nullable) NSString *socialContext;
@property (nonatomic, copy, readonly, nullable) NSString *body;
@property (nonatomic, copy, readonly, nullable) NSString *callToAction;
@property (nonatomic, strong, readonly, nullable) UIView *badgeView;
@property (nonatomic, assign, readonly) DisplayType displayType;
@property (nonatomic, assign, readonly) PriceType priceType DEPRECATED_MSG_ATTRIBUTE("Deprecated in Ads 2.2");
@property (nonatomic, copy, readonly, nullable) NSString *localizedPrice;
@property (nonatomic, strong, readonly, nullable) UIView *adChoiceBadgeView;

@property (nonatomic, copy, readonly, nullable) NSString *iconUrl;
@property (nonatomic, copy, readonly, nullable) NSString *coverImageUrl;
@property (nonatomic, copy, readonly, nullable) NSDecimalNumber *starRating;
@property (nonatomic, assign, readonly) BOOL hasVideoContent;

- (void)registerViewForInteraction:(nonnull UIView *)view
                     withMediaView:(nullable UIView *)mediaView
                 withIconImageView:(nonnull UIImageView *)iconImageView
                withViewController:(nullable UIViewController *)viewController
                 withClickableView:(nullable UIView *)clickableView;

- (void)recordImpression:(nonnull NSDictionary *)args;

- (void)performClick:(nonnull NSDictionary *)args;

- (void)setNativeAdImpressionListener:(nullable id<NativeAdImpressionListener>)impressionDelegate;

- (nullable UIView *)getMediaView;

@end
