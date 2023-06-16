//
//  MNGAdsSDKFactory.h
//  MNG-Ads-SDK
//
//  Created by Ben Salah Med Amine on 12/10/14.
//  Edited by Hussein Dimessi.
//  Copyright (c) 2014 MNG. All rights reserved.
//

#import "MNGAdsAdapter.h"
#import "BlueStackInitializationStatus.h"
#import "MNGAdsSDKFactoryDelegate.h"

void DebugLog(NSString *format, ...) NS_FORMAT_FUNCTION(1,2);

@interface MNGAdsSDKFactory : MNGAdsAdapter<MNGAdsAdapterBannerDelegate,MNGAdsAdapterInterstitialDelegate,MNGAdsAdapterNativeDelegate,MNGClickDelegate, MNGAdsAdapterInfeedDelegate,MNGAdsAdapterRefreshDelegate,MAdvertiseAdapterRewardedVideoAdDelegate,BluestackThumbnailAdDelegate>

+ (void)initWithAppId:(NSString*)appId;
+ (BOOL)isInitialized;
+ (void)setDelegate:(id<MNGAdsSDKFactoryDelegate>)delegate;
+ (void)initMAdvertiseDataAfterInitialisedWithOptions:(NSDictionary *)launchOptions;
@property NSString *placementId;
@property (readonly,getter=isBusy) BOOL busy;


@property (weak) id<MNGAdsAdapterNativeCollectionDelegate> nativeCollectionDelegate;

-(BOOL)createNativeCollection:(NSUInteger)count WithPreferences:(MNGPreference *)preferences;
-(BOOL)createNativeCollection:(NSUInteger)count;
-(BOOL)createNativeCollection:(NSUInteger)count WithPreferences:(MNGPreference *)preferences WithCover:(BOOL)cover;

+(NSString *)getVersion;
+(NSString *)getVersionCacheKey:(NSString* )key;
+(NSString *)getAppId;
+(NSString *)getIdfa;
+(NSString *)getIdfaMD5;
+(NSString *)getVendorId;

//DEBUG

+(void)setDebugModeEnabled:(BOOL)enabled;
+(void)setAudioMixedWithOthersEnabled:(BOOL)enabled;
+(BOOL)getAudioMixedWithOthersEnabled;

+(NSUInteger)numberOfRunningFactory;
-(BOOL)initRequest:(NSString *)method preferences:(MNGPreference *)preferences error:(NSError **)error;
-(void)closeVideoRewarded;

@end
