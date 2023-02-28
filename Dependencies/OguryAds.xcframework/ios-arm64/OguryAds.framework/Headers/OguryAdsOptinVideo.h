//
//  Copyright © 2019 Ogury. All rights reserved.
//

#import "OguryAdsInterstitial.h"

NS_ASSUME_NONNULL_BEGIN

__deprecated __attribute__((deprecated("Use OguryOptinVideoAd instead.")))
@interface OguryAdsOptinVideo : OguryAdsInterstitial

#pragma mark - Properties

@property (nonatomic, weak) id<OguryAdsOptinVideoDelegate> optInVideoDelegate;

- (instancetype)init;

- (instancetype)initWithAdUnitID:(NSString * _Nullable)adUnitID;

@end

NS_ASSUME_NONNULL_END
