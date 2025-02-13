//
//  DTBAdHelper.h
//  DTBiOSSDK
//
//  Copyright (c) 2021 Amazon Publisher Services. All rights reserved.

#import <Foundation/Foundation.h>
#import "DTBExpectedSize.h"

#define APS_ADMOB_CONST_SLOT_UUID @"slotUUId"
#define APS_ADMOB_CONST_REQUEST_ID @"requestId"
#define APS_ADMOB_CONST_SLOT_GROUP @"slotGroup"
#define APS_ADMOB_CONST_WIDTH @"width"
#define APS_ADMOB_CONST_HEIGHT @"height"
#define APS_ADMOB_CONST_CCPA_APS_PRIVACY @"aps_privacy"
#define APS_ADMOB_CONST_CCPA_US_PRIVACY @"us_privacy"

#define APS_AAX_PRICE_POINT_LENGTH 12

#define COMPARE_LESS_THAN_OR_EQUAL_TO @"leq"
#define COMPARE_GREATER_THAN_OR_EQUAL_TO @"geq"
#define COMPARE_EQUAL_TO @"eq"

NS_ASSUME_NONNULL_BEGIN
@class DTBAdResponse;

@protocol MopubObj <NSObject>
@property(nonatomic)NSString *keywords;
@property (nonatomic)NSDictionary *localExtras;
@end

@interface DTBAdHelper : NSObject

+(NSError * _Nonnull) createAmazonErrorWithCode:(NSInteger)code;
+(NSError * _Nonnull) createAmazonErrorWithCode:(NSInteger)code withMessage:(NSString *)msg;

// ADMOB

+(BOOL) validateAdMobBannerCustomEventWithExpectedSizeHandler:(id<DTBExpectedSize>)expectedSizeHandler  serverParameter: (NSString *)serverParameter parameters:(NSDictionary * _Nullable)params;

+(BOOL) validateAdMobInterstitialCustomEvent:(NSString *)serverParameter parameters:(NSDictionary * _Nullable)params;

+(UIView * _Nonnull) viewForAdView:(UIView * _Nonnull)adView expectedSizeHandler:(id<DTBExpectedSize> _Nonnull)expectedSizeHandler
                     requestedSize:(CGSize) requestedSize;

+ (BOOL)handleBannerBidsWith:(id<DTBExpectedSize> _Nonnull)expectedSizeHandler withParams:(NSDictionary * _Nullable)params;

+ (BOOL) validateMopubBannerCustomEventWithLocalInfo:(NSDictionary * _Nullable)localParameters  serverInfo: (NSDictionary * _Nullable) serverInfo;

+ (BOOL) validateMopubInterstitialCustomEventWithLocalInfo:(NSDictionary * _Nullable)localParameters  serverInfo: (NSDictionary * _Nullable) serverInfo;

+ (BOOL) isFetchManagerPresentForSmartBanner;

+(void)skadnHelper:(NSString *)label withInfo:(NSString *)info;

+(NSString *) generateRandomUniqueNumber;

+ (NSArray *)createAdMobBannerRequestKeyword:(NSString * _Nonnull)slotUUId
                                       width:(NSInteger)width
                                      height:(NSInteger)height
                                      extras:(NSDictionary * _Nullable)extras;
+ (NSArray *)createAdMobBannerRequestKeyword:(NSString * _Nonnull)slotUUId
                                       width:(NSInteger)width
                                      height:(NSInteger)height;

+ (NSArray *)createAdMobInterstitialRequestKeyword:(NSString * _Nonnull)slotUUId;
+ (NSArray *)createAdMobInterstitialRequestKeyword:(NSString * _Nonnull)slotUUId extras:(NSDictionary * _Nullable)extras;

+ (NSArray *)createAdMobBannerRequestKeywordWithSlotGroup:(NSString * _Nonnull)slotGroup;
+ (NSArray *)createAdMobBannerRequestKeywordWithSlotGroup:(NSString * _Nonnull)slotGroup
                                                   extras:(NSDictionary * _Nullable)extras;

+ (NSString *)getValueForKeyFromAdMobKeywords:(NSArray * _Nonnull)adMobKeywords key:(NSString * _Nonnull)key;
+(BOOL) validateAdMobCustomSingleEventPricePoint:(NSString *)serverParameter parameters:(NSDictionary * _Nullable)params;
+(NSString *) reverseString:(NSString *)input;
+(BOOL) validateAdMobBannerCustomEventWithExpectedSizeHandlerGeneric:(id<DTBExpectedSize>)expectedSizeHandler  serverParameter: (NSString *)serverParameter parameters:(NSDictionary * _Nullable)params isSpp:(BOOL)isSpp;
+(BOOL) validateAdMobInterstitialCustomEventGeneric:(NSString *)serverParameter parameters:(NSDictionary * _Nullable)params isSpp:(BOOL)isSpp;


@end

NS_ASSUME_NONNULL_END
