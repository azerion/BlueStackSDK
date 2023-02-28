//
//  DTBDebugProperties.h
//  DTBiOSSDK
//
//  Copyright (c) 2021 Amazon Publisher Services. All rights reserved.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DTBDebugProperties : NSObject

// Test flag to test out or enable SKAdnetwork response
@property (nonatomic) BOOL skadnTestMode;

+ (BOOL)isDebugFlagTurnedOnForFeature:(NSString *)feature;

@end

NS_ASSUME_NONNULL_END
