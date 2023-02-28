//
//  Copyright © 2020 Ogury Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "OguryAdsDelegate.h"

NS_ASSUME_NONNULL_BEGIN

__deprecated __attribute__((deprecated("Use OguryInterstitialAd instead.")))
@interface OguryAdsInterstitial : NSObject
 
@property (nonatomic, weak, nullable) id  <OguryAdsInterstitialDelegate> interstitialDelegate;
@property (nonatomic, assign) BOOL isLoaded;
@property (nonatomic, strong, nullable) NSString  * _Nullable adUnitID;
@property (nonatomic, strong, nullable) NSString * userId;

- (instancetype)init;

- (instancetype)initWithAdUnitID:(NSString * _Nullable)adUnitID;

- (void)load;
- (void)showAdInViewController:(UIViewController *)viewController;

///Deprecated use 'showAdInViewController:' method instead
- (void)showInViewController:(UIViewController *)controller __attribute__((deprecated("Use 'showAdInViewController:' method instead")));

@end

NS_ASSUME_NONNULL_END
