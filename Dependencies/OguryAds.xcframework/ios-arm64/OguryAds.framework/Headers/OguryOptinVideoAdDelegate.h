//
//  Copyright © 2020 Ogury Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <OguryCore/OguryError.h>

#import "OGARewardItem.h"
#import "OguryAdsError.h"

NS_ASSUME_NONNULL_BEGIN

@class OguryOptinVideoAd;

@protocol OguryOptinVideoAdDelegate <NSObject>
@optional
- (void)didLoadOguryOptinVideoAd:(OguryOptinVideoAd *)optinVideo;
- (void)didDisplayOguryOptinVideoAd:(OguryOptinVideoAd *)optinVideo;
- (void)didClickOguryOptinVideoAd:(OguryOptinVideoAd *)optinVideo;
- (void)didCloseOguryOptinVideoAd:(OguryOptinVideoAd *)optinVideo;
- (void)didRewardOguryOptinVideoAdWithItem:(OGARewardItem *)item forAd:(OguryOptinVideoAd *)optinVideo;
- (void)didFailOguryOptinVideoAdWithError:(OguryError *)error forAd:(OguryOptinVideoAd *)optinVideo;
- (void)didTriggerImpressionOguryOptinVideoAd:(OguryOptinVideoAd *)optinVideo;
@end

NS_ASSUME_NONNULL_END
