//
//  DTBFetchManager.h
//  DTBiOSSDK
//
//  Copyright (c) 2021 Amazon Publisher Services. All rights reserved.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class DTBAdResponse;
@class DTBFetchManager;

@interface DTBFetchManager : NSObject

@property(nonatomic)NSError * _Nullable error;
@property(nonatomic)BOOL isActive;

- (instancetype)init NS_UNAVAILABLE;

- (DTBAdResponse * _Nullable)peek;
- (DTBAdResponse * _Nullable)pop;

- (void)start;
- (void)stop;
- (BOOL)isEmpty;

@end

NS_ASSUME_NONNULL_END
