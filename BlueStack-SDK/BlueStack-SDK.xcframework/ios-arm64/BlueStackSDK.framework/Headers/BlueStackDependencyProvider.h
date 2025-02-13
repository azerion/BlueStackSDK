//
//  BlueStackDependencyProvider.h
//  BlueStackSDK
//
//  Created by Nagib Bin Azad on 29/7/24.
//

#import <Foundation/Foundation.h>

@class BlueStackConfig;
@class PrivacySettings;
@class IDFAProvider;

NS_ASSUME_NONNULL_BEGIN


@interface BlueStackDependencyProvider : NSObject

+ (BlueStackDependencyProvider *)shared;

+ (instancetype)new NS_UNAVAILABLE;

@property(nonatomic, strong, nullable) BlueStackConfig *blueStackConfig;

- (PrivacySettings *)getPrivacySettings;
- (IDFAProvider *)getIDFAProvider;

@end

NS_ASSUME_NONNULL_END
