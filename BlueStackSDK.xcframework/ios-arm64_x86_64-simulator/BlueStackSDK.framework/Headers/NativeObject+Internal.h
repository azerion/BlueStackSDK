//
//  NativeObject+Internal.h
//
//
//  Created by Nagib Bin Azad on 6/9/23.
//

#import <Foundation/Foundation.h>
#import "NativeObject.h"
#import "CrossPlatformNativeAd.h"
#import "NativeAdViewProvider.h"

NS_ASSUME_NONNULL_BEGIN

@interface NativeObject(Internal)

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *socialContext;
@property (nonatomic, strong) NSString *body;
@property (nonatomic, strong) NSString *callToAction;
@property (nonatomic, strong) UIView *badgeView;
@property (nonatomic, assign) DisplayType displayType;
@property (nonatomic, assign) PriceType priceType DEPRECATED_MSG_ATTRIBUTE("Deprecated in Ads 2.2");
@property (nonatomic, strong) NSString *localizedPrice;
@property (nonatomic, strong) UIView *adChoiceBadgeView;

@property (nonatomic, copy, nullable) NSString *iconUrl;
@property (nonatomic, copy, nullable) NSString *coverImageUrl;

@property (nonatomic, strong) NSDecimalNumber *starRating;
@property (nonatomic, assign) BOOL hasVideoContent;

@property (nonatomic, weak) id<CrossPlatformNativeAd> delegate;
@property (nonatomic, weak, nullable) id<NativeAdViewProvider> nativeAdViewProvider;
@property (nonatomic, assign) BOOL cutomizableBadge;
@property (nonatomic, copy) void (^registreBlock)(UIView *view, UIViewController *viewController, UIView *clickableView);
@property (nonatomic, copy) void (^registerViewForInteraction)(UIView *view, UIView *mediaView, UIImageView *iconImageView, UIViewController *viewController, UIView *clickableView);

-(BOOL)updateBadgeTitle:(NSString*)newTitle;

- (nullable UIView *)getMediaView;

@end

NS_ASSUME_NONNULL_END
