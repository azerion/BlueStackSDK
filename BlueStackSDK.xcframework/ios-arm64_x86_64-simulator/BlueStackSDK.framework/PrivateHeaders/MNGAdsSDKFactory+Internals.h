//
//  MNGAdsSDKFactory+Internals.h
//  BlueStackSDK
//
//  Created by MedSghaier on 14/3/2023.
//

#import <BlueStackSDK/BlueStackSDK.h>

@class PlacementTimeoutController;
@class Initializer;

@interface MNGAdsSDKFactory (Internals)

@property(nonatomic,assign) BOOL isrefreshFactory;

@property (nonatomic, strong, nullable) BlueStackDependencyProvider *dependencyProvider;

- (instancetype _Nonnull)initWithDependencyProvider:(BlueStackDependencyProvider * _Nonnull)dependencyProvider;
- (instancetype _Nonnull)initWithDependencyProvider:(BlueStackDependencyProvider * _Nonnull)dependencyProvider
                         placementTimeoutController:(PlacementTimeoutController * _Nullable)placementTimeoutController;

@end
