//
//  UIView+SubParent.h
//  BlueStackSDK
//
//  Created by Nagib Bin Azad on 17/7/23.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView(SubParent)

/// Moves child views to new parent view
/// - Parameters:
///   - newParent: New parent view
///   - skipTagless: Whether to skip tagless views or not
- (void)addSubstituteParent:(UIView *)newParent skipTaglessViews:(BOOL)skipTagless;

@end

NS_ASSUME_NONNULL_END
