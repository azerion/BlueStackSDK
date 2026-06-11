//
//  SDKDependencyProvider.h
//
//
//  Created by Nagib Bin Azad on 29/7/24.
//

#import <Foundation/Foundation.h>

@class DispatcherConfiguration;
@class UserPrivacySettings;
@class IDFAProvider;
@class Initializer;
@class ConsentProvider;
@protocol UserAgentProviderProtocol;

NS_ASSUME_NONNULL_BEGIN


@interface SDKDependencyProvider : NSObject

+ (SDKDependencyProvider *)shared;

+ (instancetype)new NS_UNAVAILABLE;

@property(nonatomic, strong, nullable) DispatcherConfiguration *dispatcherConfig;
@property (nonatomic, assign) BOOL debugEnabled;

- (UserPrivacySettings *)getPrivacySettings;
- (IDFAProvider *)getIDFAProvider;
- (Initializer *)getInitializer;
- (ConsentProvider *)getConsentProvider;
- (BOOL)isLogDisabled;
- (id<UserAgentProviderProtocol>)getUserAgentProvider;

@end

NS_ASSUME_NONNULL_END
