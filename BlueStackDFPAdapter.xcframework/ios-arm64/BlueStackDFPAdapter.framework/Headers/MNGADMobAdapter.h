//
//  MNGADMobAdapter.h
//  BlueStackSDK
//
//  Created by MedSghaier on 17/10/2022.
//

#import <BlueStackSDK/BlueStackSDK.h>

NS_ASSUME_NONNULL_BEGIN


typedef void (^CompletionBlock)(NSDictionary* initDict);

@interface MNGADMobAdapter : MNGAdsAdapter



+(void)initADMob:(CompletionBlock)completionBlock;

@end

NS_ASSUME_NONNULL_END
