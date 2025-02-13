//
//  BlueStackInitializationStatus.h
//  BlueStackSDK
//
//  Created by Nagib Bin Azad on 1/6/23.
//

#import <Foundation/Foundation.h>
#import "BlueStackAdapterStatus.h"

NS_ASSUME_NONNULL_BEGIN

@interface BlueStackInitializationStatus : NSObject

@property (nonatomic, strong) NSArray<BlueStackAdapterStatus *> *adaptersStatus;

@end

NS_ASSUME_NONNULL_END
