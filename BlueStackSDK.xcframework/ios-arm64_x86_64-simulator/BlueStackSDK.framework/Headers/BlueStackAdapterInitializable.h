//
//  BlueStackAdapterInitializable.h
//  BlueStackSDK
//
//  Created by Nagib Bin Azad on 5/3/24.
//

#import <Foundation/Foundation.h>
#import "BlueStackAdapterStatus.h"

@protocol BlueStackAdapterInitializationDelegate <NSObject>

- (void)didFinishWithStatus:(BlueStackAdapterStatus *)status;

@end

@protocol BlueStackAdapterInitializable <NSObject>

- (void)initializeWithConfig:(NSDictionary *)adapterInitConfig withDelegate:(id<BlueStackAdapterInitializationDelegate>)delegate;

@end
