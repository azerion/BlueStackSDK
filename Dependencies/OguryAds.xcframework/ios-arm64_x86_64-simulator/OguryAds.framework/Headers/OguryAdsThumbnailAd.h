//
//  Copyright © 2019 Ogury Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OguryAdsDelegate.h"
#import <CoreGraphics/CGGeometry.h>
#import "OguryRectCorner.h"
#import "OguryOffset.h"

NS_ASSUME_NONNULL_BEGIN

__deprecated __attribute__((deprecated("Use new api OguryThumbnailAd instead")))
@interface OguryAdsThumbnailAd : NSObject

#pragma mark - Properties

@property (nonatomic, weak) id<OguryAdsThumbnailAdDelegate> thumbnailAdDelegate;
@property (nonatomic, assign) BOOL isLoaded;
@property (nonatomic, assign, readonly) BOOL isExpanded;
@property (nonatomic, strong) NSString  * _Nullable adUnitID;

#pragma mark - Initialization

- (instancetype _Nullable)initWithAdUnitID:(NSString * _Nullable)adUnitID;

#pragma mark - Methods

- (void)load:(CGSize)thumbnailSize;

- (void)load;

- (void)show:(CGPoint)position;

- (void)show;

- (void)showInScene:(UIWindowScene *)scene atPosition:(CGPoint)position API_AVAILABLE(ios(13.0));

- (void)showInScene:(UIWindowScene *)scene API_AVAILABLE(ios(13.0));

- (void)showInScene:(UIWindowScene *)scene withOguryRectCorner:(OguryRectCorner)rectCorner margin:(OguryOffset)offset API_AVAILABLE(ios(13.0));

- (void)setBlacklistViewControllers:(NSArray<NSString *> * _Nullable)viewControllers;

- (void)setWhitelistBundleIdentifiers:(NSArray<NSString *> * _Nullable)bundleIdentifiers;

- (void)showWithOguryRectCorner:(OguryRectCorner)rectCorner margin:(OguryOffset)offset;

@end

NS_ASSUME_NONNULL_END
