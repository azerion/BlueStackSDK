//
//  RewardedVideoAd.h
// 
//
//  Created by Hussein Dimessi on 19/10/2017.
//  Copyright © 2017 Bensalah Med Amine. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Protocols.h"
#import "Preference.h"
#import "AdsAdapter.h"

@interface RewardedVideoAd : AdsAdapter <AdsAdapterRewardedVideoAdDelegate>

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

@property (weak) id<AdsAdapterRewardedVideoAdDelegate> delegate;

/**
 This is a method to initialize an RewardedVideoAd matching the given placement id.
 
 - Parameter placementID: The id of the ad placement.
 */
- (instancetype)initWithPlacementID:(NSString *)placementID;

/**
 Begins loading the RewardedVideoAd content.
 */

-(void)loadAd;

-(void)loadAdWithPreferences:(Preference*)prefrences;

/**
 Presents the rewarded video ad modally from the specified view controller.
 
 - Parameter rootViewController: The view controller that will be used to present the rewarded video ad.
 - Parameter flag: Pass YES to animate the presentation; otherwise, pass NO.
 
 */

-(void)showAdFromRootViewController:(UIViewController*)rootViewController animated:(BOOL)flag;

@end


