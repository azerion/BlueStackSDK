//
//  MAdvertiseRewardedVideoAd.h
//  MngAds
//
//  Created by Hussein Dimessi on 19/10/2017.
//  Copyright © 2017 Bensalah Med Amine. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Protocols.h"
#import "MNGPreference.h"
#import "MNGAdsAdapter.h"

@interface MAdvertiseRewardedVideoAd : MNGAdsAdapter <MAdvertiseAdapterRewardedVideoAdDelegate>

/**
 Typed access to the id of the ad placement.
 */
@property (nonatomic, copy, readonly) NSString *placementID;

/**
 Returns true if the rewarded video ad has been successfully loaded.
 
 
 You should check `isAdValid` before trying to show the ad.
 */
@property (nonatomic, getter=isAdValid, readonly) BOOL adValid;

/**
 the delegate
 */

@property (weak) id<MAdvertiseAdapterRewardedVideoAdDelegate> delegate;

/**
 This is a method to initialize an MAdvertiseRewardedVideoAd matching the given placement id.
 
 - Parameter placementID: The id of the ad placement.
 */
- (instancetype)initWithPlacementID:(NSString *)placementID;

/**
 Begins loading the MAdvertiseRewardedVideoAd content.
 */

-(void)loadAd;

-(void)loadAdWithPreferences:(MNGPreference*)prefrences;

/**
 Presents the rewarded video ad modally from the specified view controller.
 
 - Parameter rootViewController: The view controller that will be used to present the rewarded video ad.
 - Parameter flag: Pass YES to animate the presentation; otherwise, pass NO.
 
 */

-(void)showAdFromRootViewController:(UIViewController*)rootViewController animated:(BOOL)flag;

@end


