//
//  Copyright © 2020-present Ogury. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, OguryLogLevel);

typedef enum : NSUInteger {
    OGCSDKTypeNative = 0,
    OGCSDKTypeUnity,
    OGCSDKTypeCordova,
    OGCSDKTypeXamarin,
    OGCSDKTypeAdobeAir,
    OGCSDKEnumCount
} OGCSDKType;

NS_ASSUME_NONNULL_BEGIN

@interface OGCInternal : NSObject

+ (instancetype)shared;
- (void)setLogLevel:(OguryLogLevel)logLevel;
- (NSString *)getVersion;
- (NSString *)getAdIdentifier;
- (NSString *)getInstanceToken;
- (NSString *)getConsentToken;
- (OGCSDKType)getFrameworkType;
- (void)updateInstanceToken;
- (BOOL)isAdOptin;

@end

NS_ASSUME_NONNULL_END
