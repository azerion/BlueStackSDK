//
//  SCSPixelManager.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 21/03/2017.
//  Copyright © 2017 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>
#if TARGET_OS_IOS || (TARGET_OS_IPHONE && !TARGET_OS_TV)
#import <SCSCoreKit/SCSPixelManagerProtocol.h>
#elif TARGET_OS_TV
#import <SCSCoreKitTV/SCSPixelManagerProtocol.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@class SCSPixel, SCSPixelStore, SCSURLSession;

/**
 Default SCSPixelManager protocol implementation.
 */
@interface SCSPixelManager : NSObject <SCSPixelManager>

/// The shared instance of the SCSPixelManager object.
@property (class, nonatomic, readonly) SCSPixelManager *sharedInstance NS_SWIFT_NAME(shared);

/**
 Initialize a new SCSPixelManager.
 
 Note: for most cases, you should use the shared instance instead of instanciating a new pixel manager.
 
 @param pixelStore The pixel store used by the pixel manager to store and retrieve its pixels.
 @param urlSession The URL session that must be used to make actual HTTP calls.
 @return An initialized instance of SCSPixelManager.
 */
- (instancetype)initWithPixelStore:(SCSPixelStore *)pixelStore urlSession:(SCSURLSession *)urlSession NS_DESIGNATED_INITIALIZER;

/**
 Call all non expired pixels that are stored in the pixel store and call a completion handler when finished (this
 handler should only be used for testing purpose).
 
 Note: call to the callPixels method on the same pixel manager instance (the shared instance for example) are
 serialized, every call will be sent to a queue and will be executed in order, to prevent some pixels from being
 called multiple times and ensure thread safety.
 
 @param completionHandler Handler called when the callPixels operation is finished.
 */
- (void)callPixelsWithCompletionHandler:(nullable void(^)(void))completionHandler NS_SWIFT_NAME(callPixels(completionHandler:));

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
