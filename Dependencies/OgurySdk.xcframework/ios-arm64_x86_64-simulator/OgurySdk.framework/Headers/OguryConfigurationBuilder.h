//
//  Copyright © 2020-present Ogury. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <OgurySdk/OguryConfiguration.h>

NS_ASSUME_NONNULL_BEGIN

@interface OguryConfigurationBuilder : NSObject

#pragma mark - Initialization

- (instancetype)initWithAssetKey:(NSString *)assetKey;

#pragma mark - Methods

- (void)putMonitoringInfo:(NSString *)monitoringInfoKey value:(NSString *)value;

- (OguryConfiguration *)build;

@end

NS_ASSUME_NONNULL_END
