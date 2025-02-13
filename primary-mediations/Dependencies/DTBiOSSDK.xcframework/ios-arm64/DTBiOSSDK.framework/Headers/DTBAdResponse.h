//
//  DTBAdResponse.h
//  DTBiOSSDK
//
//  Copyright (c) 2021 Amazon Publisher Services. All rights reserved.

#import <Foundation/Foundation.h>
#import "DTBAdSize.h"

NS_ASSUME_NONNULL_BEGIN

@class DTBAdLoader;
@class DTBPricePoint;

typedef enum {
    NETWORK_ERROR = 81,
    NETWORK_TIMEOUT,
    NO_FILL,
    INTERNAL_ERROR,
    REQUEST_ERROR
} DTBAdError;

@interface DTBAdResponse : NSObject

@property (nonatomic) NSString *bidId;

@property (nonatomic) BOOL isVideo;

@property NSDictionary *kvp;

@property (nullable) NSDictionary *skAdNetworkParams;

@property (nonatomic, nullable) NSArray *clickTrackersArray;

@property (nullable) DTBAdLoader *dtbAdLoader;

/** The number of seconds of video playback before a video can be skipped. If the value is zero, the video is not skippable.
 */
@property (nonatomic, assign, readonly) NSInteger videoSkipAfterDurationInSeconds;
/** This represents the video inventory type from AAX if video flag is set to true
 */
@property (nonatomic, copy, readonly) NSString *videoInventoryType;

/**
 Add a non-null price point into an internal array.
 @param pp A non-null  DTBPricePoint object to be added.
 */
- (void)addDTBPricePoint:(DTBPricePoint *)pp;

/**
 @return A nullable crid string.
 */
- (NSString * _Nullable)crid;

/**
 @return A host name string.
 */
- (NSString * _Nonnull)hostname;

/**
 @return An array of DTBAdSize objects from all DTBPricePoint objects in the internal array.
 */
- (NSArray *)adSizes;

/**
 @deprecated
 */
- (NSString * _Nullable)pricePoints:(DTBAdSize *)adSize __deprecated;

/**
 @deprecated
 */
- (NSString * _Nullable)defaultPricePoints __deprecated;

/**
 @return A DTBAdSize of the first DTBPricePoint in the internal array.
 */
- (DTBAdSize *)adSize;

/**
 @return A dictionary with string keys and values of custom targeting from all price points in the internal array.
 */
- (NSDictionary<NSString *, NSString *> * _Nullable)customTargeting;

/**
 @return A Mopub keyword string from the internal array of price points.
 */
- (NSString *)keywordsForMopub;

/**
 @return An ad loader object. Returns nil if the ad loader has not been previously set.
 */
-(DTBAdLoader *_Nullable)getAdLoader;

@end

NS_ASSUME_NONNULL_END
