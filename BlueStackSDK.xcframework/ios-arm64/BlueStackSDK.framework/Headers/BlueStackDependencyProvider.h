//
//  BlueStackDependencyProvider.h
//  BlueStackSDK
//
//  Created by Nagib Bin Azad on 29/7/24.
//

#import <Foundation/Foundation.h>

@class DispatcherConfiguration;
@class PrivacySettings;
@class IDFAProvider;
@class Initializer;

NS_ASSUME_NONNULL_BEGIN


@interface BlueStackDependencyProvider : NSObject

+ (BlueStackDependencyProvider *)shared;

+ (instancetype)new NS_UNAVAILABLE;

@property(nonatomic, strong, nullable) DispatcherConfiguration *blueStackConfig;
@property (nonatomic, assign) BOOL debugEnabled;

- (PrivacySettings *)getPrivacySettings;
- (IDFAProvider *)getIDFAProvider;
- (Initializer *)getInitializer;
- (BOOL)isLogDisabled;

@end

NS_ASSUME_NONNULL_END
