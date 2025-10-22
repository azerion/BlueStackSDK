//
//  BlueStackVideoReward.h
//  MNGAdServerSdk
//
//  Created by HtrimechMac on 12/11/2020.
//  Copyright © 2020 MNG. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BlueStackVideoReward : NSObject
@property NSString *amount;
@property NSString *currency;
-(instancetype)initWithDictionary:(NSDictionary *)dictionary ;

@end

NS_ASSUME_NONNULL_END
