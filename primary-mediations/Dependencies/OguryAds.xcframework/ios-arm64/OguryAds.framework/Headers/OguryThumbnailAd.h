//
//  Copyright © 2020 Ogury Ltd. All rights reserved.
//

#import "OguryThumbnailAdDelegate.h"
#import <UIKit/UIKit.h>
#import "OguryRectCorner.h"
#import "OguryOffset.h"

NS_ASSUME_NONNULL_BEGIN

@interface OguryThumbnailAd : NSObject

@property (nonatomic, strong, readonly) NSString *adUnitId;
@property (nonatomic, weak, nullable) id<OguryThumbnailAdDelegate> delegate;
@property (nonatomic, assign, readonly) BOOL isExpanded;

- (instancetype)initWithAdUnitId:(NSString* _Nonnull)adUnitId;

#pragma mark - Methods

- (void)load;

- (void)load:(CGSize)thumbnailSize;

- (void)loadWithAdMarkup:(NSString *)adMarkup size:(CGSize)thumbnailSize;

- (BOOL)isLoaded;

- (void)show;

- (void)show:(CGPoint)position;

- (void)showWithOguryRectCorner:(OguryRectCorner)rectCorner margin:(OguryOffset)offset;

- (void)showInScene:(UIWindowScene *)scene API_AVAILABLE(ios(13.0));

- (void)showInScene:(UIWindowScene *)scene atPosition:(CGPoint)position API_AVAILABLE(ios(13.0));

- (void)showInScene:(UIWindowScene *)scene withOguryRectCorner:(OguryRectCorner)rectCorner margin:(OguryOffset)offset API_AVAILABLE(ios(13.0));

- (void)setBlacklistViewControllers:(NSArray<NSString *> * _Nullable)viewControllers;

- (void)setWhitelistBundleIdentifiers:(NSArray<NSString *> * _Nullable)bundleIdentifiers;

@end

NS_ASSUME_NONNULL_END
