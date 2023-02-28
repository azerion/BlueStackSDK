//
//  SCSViewabilityManager.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 23/05/2017.
//  Copyright © 2017 Smart AdServer. All rights reserved.
//

#import <UIKit/UIKit.h>
#if TARGET_OS_IOS || (TARGET_OS_IPHONE && !TARGET_OS_TV)
#import <SCSCoreKit/SCSViewabilityManagerProtocol.h>
#elif TARGET_OS_TV
#import <SCSCoreKitTV/SCSViewabilityManagerProtocol.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@protocol SCSViewabilityManagerDelegate;
@class SCSViewabilityStatus;

/**
 Default SCSViewabilityManager protocol implementation.
 */
@interface SCSViewabilityManager : NSObject <SCSViewabilityManager>

/**
 Initialize a new instance of SCSViewabilityManager tied with a view.
 
 @param view The view that needs to be tracked by the viewability manager.
 @param delegate An object implementing the SCSViewabilityManagerProtocol that will be warned if the viewability status changes.
 @return An initialized instance of SCSViewabilityManager
 */
- (instancetype)initWithView:(UIView *)view delegate:(nullable id<SCSViewabilityManagerDelegate>)delegate NS_DESIGNATED_INITIALIZER;

/**
 Manually retrieve the viewable status of the view (this will work even if the viewability manager is not started).
 
 A view is considered viewable if:
 
 - it is not hidden (or with an alpha equal to 0)
 - none of its parents view is hidden (or with an alpha equal to 0)
 - its viewability percentage is greater than 50%
 
 @warning This method will not detect if another view is overlapping.
 */
- (BOOL)isViewViewable __deprecated_msg("Use the viewabilityStatus property instead");

/**
 Manually retrieve the viewability percentage of the view (this will work even if the viewability manager is not started).
 
 @warning This method will not detect if another view is overlapping.
 */
- (CGFloat)viewabilityPercentage __deprecated_msg("Use the viewabilityStatus property instead");

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
