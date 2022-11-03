//
//  MNGAdsSDKFactory.h
//  MNG-Ads-SDK
//
//  Created by Ben Salah Med Amine on 12/10/14.
//  Edited by Hussein Dimessi.
//  Copyright (c) 2014 MNG. All rights reserved.
//

#import "MNGAdsAdapter.h"

void DebugLog(NSString *format, ...) NS_FORMAT_FUNCTION(1,2);

/**
 Enumeration that define the type of error incase an ad fails to load
 */
typedef NS_ENUM(NSInteger, MAdvertiseError) {
    MAdvertiseErrorWrongPlacement, //Wrong PlacementId
    MAdvertiseErrorNoInternet,
    MAdvertiseErrorSDKUninitialized,
    MAdvertiseErrorCappedRequest, //Request has been capped
    MAdvertiseErrorLockedPlacement, //placement locked by another factory
    MAdvertiseErrorBusyFactory,
    MAdvertiseErrorBusy,
    MAdvertiseErrorUnallowedBackgroundRequest, //Cannot send request when application is on background
    MAdvertiseErrorNoAds,
    MAdvertiseErrorInterstitialCooldown, //Time between last [interstitalDisappear] and [createInterstital] Must be more than 5s
    MAdvertiseErrorAlreadyShownInterstitial, //Other Interstitial is shown
    MAdvertiseErrorRequestTimedOut,
    MAdvertiseErrorMissingViewController //Factory's viewController was not assigned
};

@protocol MNGAdsSDKFactoryDelegate <NSObject>

@optional
-(void)MNGAdsSDKFactoryDidFinishInitializing;
-(void)MNGAdsSDKFactoryDidFailInitializationWithError:(NSError*) error;
@end

@interface MNGAdsSDKFactory : MNGAdsAdapter<MNGAdsAdapterBannerDelegate,MNGAdsAdapterInterstitialDelegate,MNGAdsAdapterNativeDelegate,MNGClickDelegate, MNGAdsAdapterInfeedDelegate,MNGAdsAdapterRefreshDelegate,MAdvertiseAdapterRewardedVideoAdDelegate,BluestackThumbnailAdDelegate>

+ (void)initWithAppId:(NSString*)appId;
+ (BOOL)isInitialized;
+ (void)setDelegate:(id<MNGAdsSDKFactoryDelegate>)delegate;
+ (void)initMAdvertiseDataAfterInitialisedWithOptions:(NSDictionary *)launchOptions;
@property NSString *placementId;
@property (readonly,getter=isBusy) BOOL busy;
@property BOOL isrefreshFactory;

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

@end
