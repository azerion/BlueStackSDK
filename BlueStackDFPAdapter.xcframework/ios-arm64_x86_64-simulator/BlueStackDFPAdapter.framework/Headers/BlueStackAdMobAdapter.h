//
//  BlueStackAdMobAdapter.h
//  BlueStackSDK
//
//  Created by Nagib Bin Azad on 27/4/23.
//

#import <Foundation/Foundation.h>
#import <BlueStackSDK/BlueStackSDK.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^CompletionBlock)(NSDictionary* initDict);

@interface BlueStackAdMobAdapter : MNGAdsAdapter



+(void)initADMob:(CompletionBlock)completionBlock;

@end

NS_ASSUME_NONNULL_END
