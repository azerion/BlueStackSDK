#import <CoreGraphics/CGGeometry.h>

NS_ASSUME_NONNULL_BEGIN

@interface OguryAdsBannerSize : NSObject

- (instancetype)init NS_UNAVAILABLE;

- (CGSize)getSize;

+ (OguryAdsBannerSize *)small_banner_320x50;

+ (OguryAdsBannerSize *)mpu_300x250;

@end

NS_ASSUME_NONNULL_END
