//
//  MNGNativeObject+Internal.h
//  BlueStackSDK
//
//  Created by Nagib Bin Azad on 6/9/23.
//

#import <Foundation/Foundation.h>
#import "MNGNAtiveObject.h"
#import "MNGCrossPlatformNativeAd.h"

NS_ASSUME_NONNULL_BEGIN

@interface MNGNAtiveObject(Internal)

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *socialContext;
@property (nonatomic, strong) NSString *body;
@property (nonatomic, strong) NSString *callToAction;
@property (nonatomic, strong) UIView *badgeView;
@property (nonatomic, assign) MNGDisplayType displayType;
@property (nonatomic, assign) MNGPriceType priceType DEPRECATED_MSG_ATTRIBUTE("Deprecated in MNGAds 2.2");
@property (nonatomic, strong) NSString *localizedPrice;
@property (nonatomic, strong) UIView *adChoiceBadgeView;

@property (nonatomic, copy, nullable) NSString *iconUrl;
@property (nonatomic, copy, nullable) NSString *coverImageUrl;

@property (nonatomic, weak) id<MNGCrossPlatformNativeAd> delegate;
@property (nonatomic, assign) BOOL cutomizableBadge;
@property (nonatomic, copy) void (^registreBlock)(UIView *view, UIViewController *viewController, UIView *clickableView);
@property (nonatomic, copy) void (^registerViewForInteraction)(UIView *view, UIView *mediaView, UIImageView *iconImageView, UIViewController *viewController, UIView *clickableView);

-(BOOL)updateBadgeTitle:(NSString*)newTitle;

@end

NS_ASSUME_NONNULL_END
