//
//  SCSPostClickManagerProtocol.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 14/04/2022.
//  Copyright © 2022 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SCSPostClickManagerDelegate;
@class SCSPostClickManagerConfig;

/**
 A class to handle clicks.
 
 Depending on the format of the URL the SCSPostClickManager instance will trigger the right post click behavior:
 - Opening in SFSafariViewController (>= iOS 9)
 - Opening in SKStoreKitViewController
 - Opening outside the application for deeplinks or HTTP links on version < iOS 9.
 
 Once the URL is opened, the click pixels will be triggered by the SCSPostClickManager instance.
 */
@protocol SCSPostClickManager <NSObject>

/// The delegate that should be warned if the view status changes
@property (nullable, nonatomic, weak) id<SCSPostClickManagerDelegate> delegate;

/**
 Indicates whether or not an URL can be opened by the SCSPostClickManager.
 Use this method to decide which URL of an Ad Object to open.
 
 @param url The NSURL to be tested.
 
 @return whether or not this URL can be opened by the SCSPostClickManager.
 */
- (BOOL)canOpenURL:(NSURL *)url;

/**
 Call this method to open an URL in the most appropriate target. Click trackings pixels will be triggered if the URL opens successfully.
 
 @param url The URL to open.
 @param clickPixels The pixels to be called if URL opening is successful.
 */
- (void)openURL:(NSURL *)url clickPixels:(nullable NSArray <NSURL *> *)clickPixels;

/**
 Open a deep link URL if possible or fallback on a regular URL otherwise.
 
 @param url The web URL that will be used if the deep link URL cannot be open.
 @param deepLinkUrl The deep link URL if any, nil otherwise.
 @param config A config instance to customize the post click manager behavior, or nil to request default behavior.
 @param clickPixels The pixels to be called if URL opening is successful.
 */
- (void)openURL:(NSURL *)url deepLinkURL:(nullable NSURL *)deepLinkUrl config:(nullable SCSPostClickManagerConfig *)config clickPixels:(nullable NSArray <NSURL *> *)clickPixels;

@end

NS_ASSUME_NONNULL_END
