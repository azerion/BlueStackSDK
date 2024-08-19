//
//  MNGCrossPlatformNativeAd.h
//  BlueStackSDK
//
//  Created by Nagib Bin Azad on 14/9/23.
//

#import <Foundation/Foundation.h>
#import "MNGNativeAdImpressionListener.h"

NS_ASSUME_NONNULL_BEGIN

@protocol MNGCrossPlatformNativeAd <NSObject>

- (void)setNativeAdImpressionListener:(nullable id<MNGNativeAdImpressionListener>)impressionDelegate;
- (void)recordImpression:(nonnull NSDictionary *)args;
- (void)performClick:(nonnull NSDictionary *)args;

@end

NS_ASSUME_NONNULL_END
