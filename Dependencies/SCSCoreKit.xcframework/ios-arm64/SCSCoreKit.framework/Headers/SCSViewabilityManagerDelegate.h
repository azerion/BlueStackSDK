//
//  SCSViewabilityManagerDelegate.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 23/05/2017.
//  Copyright © 2017 Smart AdServer. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class SCSViewabilityManager, SCSViewabilityStatus;

/**
 SCSViewabilityManager delegate.
 
 @note There is two possible methods to get viewability information. The one sending viewable & percentage separately
 is deprecated and should be used for compatibility reason only.
 */
@protocol SCSViewabilityManagerDelegate <NSObject>

@optional

/**
 This method is called when the viewability status of the view is updated (the manager must be started).
 
 @param manager The manager that detected the viewability status update (can be used to retrieve easily the view that has been updated).
 @param viewabilityStatus The new viewability status.
 */
- (void)viewabilityManager:(SCSViewabilityManager *)manager didChangeViewabilityStatus:(SCSViewabilityStatus *)viewabilityStatus;

/**
 This method is called when the viewability status of the view is updated (the manager must be started).
 
 @param manager The manager that detected the viewability status update (can be used to retrieve easily the view that has been updated).
 @param viewable YES if the view is now viewable, NO otherwise.
 @param percentage The new viewability percentage of the view.
 */
- (void)viewabilityManager:(SCSViewabilityManager *)manager viewableStatus:(BOOL)viewable withPercentage:(CGFloat)percentage __deprecated_msg("Implement the method using SCSViewabilityStatus instead");

@end

NS_ASSUME_NONNULL_END
