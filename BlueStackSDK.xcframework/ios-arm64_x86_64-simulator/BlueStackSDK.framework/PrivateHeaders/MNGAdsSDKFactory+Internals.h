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
@property (nonatomic, strong, nullable) Initializer *initializer;

- (instancetype _Nonnull)initWithDependencyProvider:(BlueStackDependencyProvider * _Nonnull)dependencyProvider initializer:(Initializer * _Nonnull)initializer;
- (instancetype _Nonnull)initWithDependencyProvider:(BlueStackDependencyProvider * _Nonnull)dependencyProvider
                                        initializer:(Initializer * _Nonnull)initializer
                         placementTimeoutController:(PlacementTimeoutController * _Nullable)placementTimeoutController;

@end
