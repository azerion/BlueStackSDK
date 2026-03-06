//
//  CrossPlatformNativeAd.h
//
//
//  Created by Nagib Bin Azad on 14/9/23.
//

#import <Foundation/Foundation.h>
#import "NativeAdImpressionListener.h"

NS_ASSUME_NONNULL_BEGIN

@protocol CrossPlatformNativeAd <NSObject>

- (void)setNativeAdImpressionListener:(nullable id<NativeAdImpressionListener>)impressionDelegate;
- (void)recordImpression:(nonnull NSDictionary *)args;
- (void)performClick:(nonnull NSDictionary *)args;

@end

NS_ASSUME_NONNULL_END
