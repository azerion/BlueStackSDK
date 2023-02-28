//
//  IMDInterstitialAd.h
//  ImproveDigital
//
//  Created by Nagib Bin Azad on 10/27/22.
//

#import <Foundation/Foundation.h>
#import <ImproveDigital/IMDInterstitialPlacement.h>
#import <ImproveDigital/IMDInterstitialAdDelegate.h>
#import <ImproveDigital/IMDFullScreenPresentableAd.h>

NS_ASSUME_NONNULL_BEGIN

@interface IMDInterstitialAd : NSObject <IMDFullScreenPresentableAd>

@property (strong, nonatomic, readonly) IMDInterstitialPlacement *placement;

@property(nonatomic, weak, nullable) id<IMDInterstitialAdDelegate> delegate;

-(instancetype)initWithDelegate:(id<IMDInterstitialAdDelegate>)delegate;

-(void)loadAdWithPlacement:(IMDInterstitialPlacement *)placement;

@end

NS_ASSUME_NONNULL_END
