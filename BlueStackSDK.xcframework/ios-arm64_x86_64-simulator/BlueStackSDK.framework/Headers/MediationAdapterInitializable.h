//
//  MediationAdapterInitializable.h
//
//
//  Created by Nagib Bin Azad on 5/3/24.
//

#import <Foundation/Foundation.h>

@class MediationAdapterInitializationStatus;

@protocol MediationAdapterInitializationDelegate <NSObject>

- (void)didFinishWithStatus:(MediationAdapterInitializationStatus *_Nonnull)status;

@end

@protocol MediationAdapterInitializable <NSObject>

- (void)initializeWithConfig:(NSDictionary * _Nullable)adapterInitConfig withDelegate:(id<MediationAdapterInitializationDelegate> _Nullable)delegate;

@end
