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

@class DispatcherConfiguration;
@class PlacementTimeoutController;
@protocol PlacementTimeoutDelegate;

@interface MNGAdsSDKFactory : MNGAdsAdapter<MNGAdsAdapterBannerDelegate,MNGAdsAdapterInterstitialDelegate,MNGAdsAdapterNativeDelegate,MNGClickDelegate, MNGAdsAdapterInfeedDelegate,MNGAdsAdapterRefreshDelegate,MAdvertiseAdapterRewardedVideoAdDelegate,BluestackThumbnailAdDelegate, BlueStackImpressionDelegate, PlacementTimeoutDelegate>

+ (void)initWithAppId:(NSString*)appId;
+ (void)setDelegate:(id<MNGAdsSDKFactoryDelegate>)delegate;
+ (DispatcherConfiguration *)getBlueStackConfig;

@property NSString *placementId;
@property (readonly,getter=isBusy) BOOL busy;
@property (nonatomic, strong) PlacementTimeoutController *placementTimeoutController;


@property (weak) id<MNGAdsAdapterNativeCollectionDelegate> nativeCollectionDelegate;

-(BOOL)createNativeCollection:(NSUInteger)count WithPreferences:(MNGPreference *)preferences;
-(BOOL)createNativeCollection:(NSUInteger)count;
-(BOOL)createNativeCollection:(NSUInteger)count WithPreferences:(MNGPreference *)preferences WithCover:(BOOL)cover;

+(NSString *)getVersion;
+(NSString *)getVersionCacheKey:(NSString* )key;
+(NSString *)getIdfa;
+(NSString *)getVendorId;

//DEBUG

+(void)setDebugModeEnabled:(BOOL)enabled;
+(void)setAudioMixedWithOthersEnabled:(BOOL)enabled;
+(BOOL)getAudioMixedWithOthersEnabled;

+(NSUInteger)numberOfRunningFactory;
-(BOOL)initRequest:(NSString *)method preferences:(MNGPreference *)preferences error:(NSError **)error;
-(void)closeVideoRewarded;

@end
