//
//  SCSViewabilityManagerProtocol.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 28/04/2022.
//  Copyright © 2022 Smart AdServer. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SCSViewabilityManagerDelegate;
@class SCSViewabilityStatus;

/**
 The viewability manager can track manually or automatically the viewability status of a view.
 
 It can provide information about the viewable status of the view but also on the viewability percentage on screen.
 */
@protocol SCSViewabilityManager <NSObject>

/// The view currently being tracked by the viewability manager.
@property (nonatomic, weak) UIView *view;

/// The delegate that should be warned if the view status changes
@property (nullable, nonatomic, weak) id<SCSViewabilityManagerDelegate> delegate;

/// The viewability status of the view (this will work even if the viewability manager is not started).
///
/// @note This property will return an up-to-date value even if the viewability manager is not started.
@property (readonly) SCSViewabilityStatus *viewabilityStatus;

/**
 Starts tracking for viewability status changes.
 */
- (void)startViewabilityTracking;

/**
 Stops tracking for viewability status changes.
 */
- (void)stopViewabilityTracking;

@end

NS_ASSUME_NONNULL_END
