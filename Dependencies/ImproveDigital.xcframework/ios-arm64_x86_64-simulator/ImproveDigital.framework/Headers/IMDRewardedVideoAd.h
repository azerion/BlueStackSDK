//
//  IMDRewardedVideoAd.h
//  ImproveDigital
//

#import <Foundation/Foundation.h>
#import <ImproveDigital/IMDFullScreenPresentableAd.h>
#import <ImproveDigital/IMDRewardedVideoAdDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface IMDRewardedVideoAd : NSObject <IMDFullScreenPresentableAd>

@property (strong, nonatomic, nonnull) NSString *placementId;

@property(nonatomic, weak, nullable) id<IMDRewardedVideoAdDelegate> delegate;

-(instancetype)initWithPlacementId:(NSString *)placementId withDelegate:(id<IMDRewardedVideoAdDelegate>)delegate;
-(void)loadAd;

@end

NS_ASSUME_NONNULL_END
