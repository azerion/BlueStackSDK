//
//  BlueStackAdapterInitializable.h
//  BlueStackSDK
//
//  Created by Nagib Bin Azad on 5/3/24.
//

#import <Foundation/Foundation.h>
#import "BlueStackAdapterInitializationStatus.h"

@protocol BlueStackAdapterInitializationDelegate <NSObject>

- (void)didFinishWithStatus:(BlueStackAdapterInitializationStatus *_Nonnull)status;

@end

@protocol BlueStackAdapterInitializable <NSObject>

- (void)initializeWithConfig:(NSDictionary * _Nullable)adapterInitConfig withDelegate:(id<BlueStackAdapterInitializationDelegate> _Nullable)delegate;

@end
