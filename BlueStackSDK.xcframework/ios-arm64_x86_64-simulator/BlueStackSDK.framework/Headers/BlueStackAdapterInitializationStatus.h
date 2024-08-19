//
//  BlueStackAdapterInitializationStatus.h
//  BlueStackSDK
//
//  Created by Nagib Bin Azad on 5/6/23.
//

#import <Foundation/Foundation.h>
#import "BlueStackAdapterStatus.h"

NS_ASSUME_NONNULL_BEGIN

@interface BlueStackAdapterInitializationStatus : NSObject

@property (nonatomic, strong) NSArray<BlueStackAdapterStatus *> *mediationAdapters;

@end

NS_ASSUME_NONNULL_END
