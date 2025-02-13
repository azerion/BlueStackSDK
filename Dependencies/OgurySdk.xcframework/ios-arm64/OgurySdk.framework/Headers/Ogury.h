//
//  Copyright © 2021 Ogury Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <OgurySdk/OguryConfiguration.h>
#import <OgurySdk/OguryConfigurationBuilder.h>
#import <OguryCore/OguryLogLevel.h>

NS_ASSUME_NONNULL_BEGIN

@interface Ogury : NSObject

+ (void)startWithConfiguration:(OguryConfiguration *)configuration;

+ (void)setLogLevel:(OguryLogLevel)logLevel;

+ (NSString *)getSdkVersion;

+ (void)registerAttributionForSKAdNetwork;

@end

NS_ASSUME_NONNULL_END
