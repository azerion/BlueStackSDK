//
//  Copyright © 2019 Ogury. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OguryAdsDelegate.h"
#import "OguryAdsBannerSize.h"

NS_ASSUME_NONNULL_BEGIN

__deprecated __attribute__((deprecated("Use OguryBannerAd instead.")))
@interface OguryAdsBanner : UIView

#pragma mark - Properties

@property (nonatomic, weak) id<OguryAdsBannerDelegate> bannerDelegate;
@property (nonatomic, strong) NSString * _Nullable adUnitID;
@property (nonatomic, assign) BOOL isLoaded;
@property (nonatomic, assign, readonly) BOOL isExpanded;

#pragma mark - Initialization

- (instancetype _Nullable)initWithAdUnitID:(NSString * _Nullable)adUnitID;

#pragma mark - Methods

- (void)loadWithSize:(OguryAdsBannerSize *)size;
- (void)close;

@end

NS_ASSUME_NONNULL_END
