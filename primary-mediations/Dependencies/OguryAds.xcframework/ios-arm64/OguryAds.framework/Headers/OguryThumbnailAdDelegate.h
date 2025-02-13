//
//  Copyright © 2020 Ogury Ltd. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <OguryCore/OguryError.h>
#import "OguryAdsError.h"

NS_ASSUME_NONNULL_BEGIN

@class OguryThumbnailAd;

@protocol OguryThumbnailAdDelegate <NSObject>
@optional
- (void)didLoadOguryThumbnailAd:(OguryThumbnailAd *)thumbnail;
- (void)didDisplayOguryThumbnailAd:(OguryThumbnailAd *)thumbnail;
- (void)didClickOguryThumbnailAd:(OguryThumbnailAd *)thumbnail;
- (void)didCloseOguryThumbnailAd:(OguryThumbnailAd *)thumbnail;
- (void)didFailOguryThumbnailAdWithError:(OguryError *)error forAd:(OguryThumbnailAd *)thumbnail;
- (void)didTriggerImpressionOguryThumbnailAd:(OguryThumbnailAd *)thumbnail;
@end

NS_ASSUME_NONNULL_END
