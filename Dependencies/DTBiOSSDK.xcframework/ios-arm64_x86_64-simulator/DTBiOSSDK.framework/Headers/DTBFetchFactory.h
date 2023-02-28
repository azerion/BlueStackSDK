//
//  DTBFetchFactory.h
//  DTBiOSSDK
//
//  Copyright (c) 2021 Amazon Publisher Services. All rights reserved.

#import <Foundation/Foundation.h>
#import "DTBSlotGroup.h"

NS_ASSUME_NONNULL_BEGIN

@class DTBFetchManager;
@class DTBAdLoader;

@interface DTBFetchFactory : NSObject

+ (DTBFetchFactory * _Nonnull)sharedInstance;

/* CREATING FETCH MANAGERS */
- (NSError * _Nullable) createFetchManagerForLoader:(DTBAdLoader * _Nonnull)loader;
- (NSError * _Nullable) createFetchManagerForLoader:(DTBAdLoader * _Nonnull)loader isSmartBanner:(BOOL)isSmartBanner;

/* RETRIEVING FETCH MANAGERS */
- (DTBFetchManager * _Nullable) fetchManagerBySlotType:(DTBSlotType)slotType;

/* REMOVING FETCH MANAGERS */
- (void)removeFetchManagerForSlotType:(DTBSlotType)slotType;

@end

NS_ASSUME_NONNULL_END
