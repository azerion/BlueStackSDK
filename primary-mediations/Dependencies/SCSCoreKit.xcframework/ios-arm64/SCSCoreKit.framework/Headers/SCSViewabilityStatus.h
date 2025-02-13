//
//  SCSViewabilityStatus.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 28/04/2022.
//  Copyright © 2022 Smart AdServer. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Represents the viewability status of a view.
 */
@interface SCSViewabilityStatus : NSObject

/// The viewable status of a view.
///
/// A view is considered viewable if:
///
/// - it is not hidden (or with an alpha equal to 0)
/// - none of its parents view is hidden (or with an alpha equal to 0)
/// - its viewability percentage is greater than 50%
@property (readonly, getter=isViewable) BOOL viewable;

/// The percentage of the view visible (between 0.0 and 1.0).
///
/// @warning A viewability status will typically not detect if another view is overlapping.
@property (readonly) CGFloat percentage;

/// The viewable rectangle of the view relative to its reference view.
///
/// The origin the position of the upper-left corner of the visible view area, relative of
/// the upper-left corner of the reference view. The size represents the viewable size.
///
/// @warning This value is not relevant if the 'percentage' is equal to 0.0. In this case, the
/// value should be 'CGRectNull'.
@property (readonly) CGRect viewableRect;

/**
 Initialize a new instance of SCSViewabilityStatus.
 
 @param viewable The viewable status of a view.
 @param percentage The percentage of the view visible (between 0.0 and 1.0).
 @param viewableRect The viewable rectangle (valid only if the percentage is NOT 0.0).
 @return An initialized instance of SCSViewabilityStatus.
 */
- (instancetype)initWithViewable:(BOOL)viewable
                      percentage:(CGFloat)percentage
                    viewableRect:(CGRect)viewableRect;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
