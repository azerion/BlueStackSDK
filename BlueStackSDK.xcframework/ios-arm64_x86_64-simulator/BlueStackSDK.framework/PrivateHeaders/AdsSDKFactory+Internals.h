//
//  AdsSDKFactory+Internals.h
//
//
//  Created by MedSghaier on 14/3/2023.
//

#import <BlueStackSDK/BlueStackSDK.h>

@class PlacementTimeoutController;
@class Initializer;

@interface AdsSDKFactory (Internals)

@property(nonatomic,assign) BOOL isrefreshFactory;

@property (nonatomic, strong, nullable) SDKDependencyProvider *dependencyProvider;

- (instancetype _Nonnull)initWithDependencyProvider:(SDKDependencyProvider * _Nonnull)dependencyProvider;
- (instancetype _Nonnull)initWithDependencyProvider:(SDKDependencyProvider * _Nonnull)dependencyProvider
                         placementTimeoutController:(PlacementTimeoutController * _Nullable)placementTimeoutController;

@end
