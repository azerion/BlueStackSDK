//
//  BlueStackConfig.h
//  BlueStackSDK
//
//  Created by Nagib Bin Azad on 31/5/23.
//

#import <Foundation/Foundation.h>
#import "AdapterInitConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface BlueStackConfig : NSObject

@property (nonatomic, strong, nullable) NSString *supplyChainObject;
@property (nonatomic, strong, nullable) NSArray<AdapterInitConfig *> *adapterInitConfigs;

- (NSArray<NSString *> *)getAdapterWaitList;

@end

NS_ASSUME_NONNULL_END
