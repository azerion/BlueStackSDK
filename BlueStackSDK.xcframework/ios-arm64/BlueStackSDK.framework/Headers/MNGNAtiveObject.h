//
//  MNGNAtiveObject.h
//  MNG-Ads-SDK
//
//  Created by Ben Salah Med Amine on 12/9/14.
//  Copyright (c) 2014 MNG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

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

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *socialContext;
@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSString *callToAction;
@property (nonatomic, strong) UIView *badgeView;
@property BOOL cutomizableBadge;
@property (nonatomic, strong) UIView *adChoiceBadgeView;
@property MNGPriceType priceType DEPRECATED_MSG_ATTRIBUTE("Deprecated in MNGAds 2.2");
@property (nonatomic, copy) NSString *localizedPrice;
@property MNGDisplayType displayType;
@property (nonatomic, copy) void (^registreBlock)(UIView *view, UIViewController *viewController, UIView *clickableView);
@property (nonatomic, copy) void (^registerViewForInteraction)(UIView *view, UIView *mediaView, UIImageView *iconImageView, UIViewController *viewController, UIView *clickableView);

-(BOOL)updateBadgeTitle:(NSString*)newTitle;

- (void)registerViewForInteraction:(UIView *)view
                     withMediaView: (UIView *)mediaView
                 withIconImageView: (UIImageView *)iconImageView
                withViewController:(UIViewController *)viewController
                 withClickableView:(UIView *)clickableView;

@end
