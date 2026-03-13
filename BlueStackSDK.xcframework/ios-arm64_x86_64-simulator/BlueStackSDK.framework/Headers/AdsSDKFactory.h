//
//  AdsSDKFactory.h
//
//
//  Created by Ben Salah Med Amine on 12/10/14.
//  Edited by Hussein Dimessi.
//  Copyright (c) 2014 All rights reserved.
//

#import "AdsAdapter.h"
#import "MediationInitializationStatus.h"
#import "AdsSDKFactoryDelegate.h"

@class DispatcherConfiguration;
@class PlacementTimeoutController;
@protocol PlacementTimeoutDelegate;
@protocol AdSessionEventDelegate;

@interface AdsSDKFactory : AdsAdapter<AdsAdapterBannerDelegate,AdsAdapterInterstitialDelegate,AdsAdapterNativeDelegate,AdClickDelegate, AdsAdapterInfeedDelegate,AdsAdapterRefreshDelegate,AdsAdapterRewardedVideoAdDelegate,ThumbnailAdDelegate, AdImpressionDelegate, PlacementTimeoutDelegate, AdSessionEventDelegate>

+ (void)initWithAppId:(NSString*)appId;
+ (void)setDelegate:(id<AdsSDKFactoryDelegate>)delegate;
+ (DispatcherConfiguration *)getDispatcherConfig;

@property NSString *placementId;
@property (readonly,getter=isBusy) BOOL busy;
@property (nonatomic, strong) PlacementTimeoutController *placementTimeoutController;


@property (weak) id<AdsAdapterNativeCollectionDelegate> nativeCollectionDelegate;

-(BOOL)createNativeCollection:(NSUInteger)count WithPreferences:(Preference *)preferences;
-(BOOL)createNativeCollection:(NSUInteger)count;
-(BOOL)createNativeCollection:(NSUInteger)count WithPreferences:(Preference *)preferences WithCover:(BOOL)cover;

+(NSString *)getVersion;
+(NSString *)getVersionCacheKey:(NSString* )key;
+(NSString *)getIdfa;
+(NSString *)getVendorId;

//DEBUG

+(void)setDebugModeEnabled:(BOOL)enabled;
+(void)setAudioMixedWithOthersEnabled:(BOOL)enabled;
+(BOOL)getAudioMixedWithOthersEnabled;

+(NSUInteger)numberOfRunningFactory;
-(BOOL)initRequest:(NSString *)method preferences:(Preference *)preferences error:(NSError **)error;
-(void)closeVideoRewarded;

@end
