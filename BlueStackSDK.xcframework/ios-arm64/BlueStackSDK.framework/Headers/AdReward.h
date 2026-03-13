//
//  AdReward.h
// 
//
//  Created by Hussein Dimessi on 19/10/2017.
//  Copyright © 2017 Bensalah Med Amine. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AdReward : NSObject

@property (nonatomic) NSString* type;
@property (nonatomic) NSNumber* amount;

-(instancetype)initWithRewardType:(NSString *)type andAmount:(NSNumber *)amount;

@end
