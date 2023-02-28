//
//  IMDFullScreenPresentableAd.h
//  ImproveDigital
//
//  Created by Nagib Bin Azad on 10/24/22.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol IMDFullScreenPresentableAd <NSObject>

- (void)presentFromRootViewController:(UIViewController *)rootViewController;

@end

NS_ASSUME_NONNULL_END
