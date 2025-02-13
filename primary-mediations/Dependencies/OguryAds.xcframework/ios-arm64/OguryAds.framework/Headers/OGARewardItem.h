//
//  Copyright © 2020 Ogury Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OGARewardItem : NSObject

@property (nonatomic, strong) NSString *rewardName;
@property (nonatomic, strong) NSString *rewardValue;

- (instancetype)initWithRewardName:(NSString*)rewardName  rewardValue:(NSString*)rewardValue;

@end

NS_ASSUME_NONNULL_END
