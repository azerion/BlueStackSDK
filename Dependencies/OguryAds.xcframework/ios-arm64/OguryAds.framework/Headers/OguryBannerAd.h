//
//  Copyright © 2021 Ogury. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OguryBannerAdDelegate.h"
#import "OguryAdsBannerSize.h"

NS_ASSUME_NONNULL_BEGIN

@interface OguryBannerAd : UIView

#pragma mark - Properties

@property (nonatomic, strong, readonly) NSString *adUnitId;
@property (nonatomic, weak, nullable) id<OguryBannerAdDelegate> delegate;
@property (nonatomic, assign, readonly) BOOL isExpanded;

#pragma mark - Initialization

- (instancetype)initWithAdUnitId:(NSString *)adUnitId;

#pragma mark - Methods

- (void)loadWithSize:(OguryAdsBannerSize *)size;

- (void)loadWithAdMarkup:(NSString *)adMarkup size:(OguryAdsBannerSize *)size;

- (void)destroy;

- (BOOL)isLoaded;

@end

NS_ASSUME_NONNULL_END
