//
//  SCSScriptDownloader.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 29/01/2019.
//  Copyright © 2019 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#define SCSScriptDownloader_Error_Domain                    @"SCSScriptDownloaderErrorDomain"

#define SCSScriptDownloader_Error_InvalidScript_Code        100
#define SCSScriptDownloader_Error_InvalidScript_Message     @"The downloaded script is empty or invalid!"

@protocol SCSScriptDownloaderDelegate;
@class SCSURLSession;

/**
 Component used to download a script from network sources and alter it using a block.
 
 It can also be used locally using a script provided as a script.
 */
@interface SCSScriptDownloader : NSObject

/// The delegate of the script downloader.
@property (nonatomic, weak, nullable) id<SCSScriptDownloaderDelegate> delegate;

/**
 Initialize a new instance of SCSScriptDownloader using an URL request.
 
 @param request The URL request that will be used to retrieve the script.
 @param delegate The delegate of the script downloader.
 @return An initialized instance of SCSScriptDownloader.
 */
- (instancetype)initWithRequest:(NSURLRequest *)request delegate:(id<SCSScriptDownloaderDelegate>)delegate;

/**
 Initialize a new instance of SCSScriptDownloader using a script and a base URL.
 
 @param script The script that must be altered
 @param baseURL The base URL from which the script has been retrieved.
 @param delegate The delegate of the script downloader.
 @return An initialized instance of SCSScriptDownloader.
 */
- (instancetype)initWithScript:(NSString *)script baseURL:(NSURL *)baseURL delegate:(id<SCSScriptDownloaderDelegate>)delegate;

/**
 Initialize a new instance of SCSScriptDownloader using an URL request and an URL session.
 
 @note This method should be used for unit testing purpose only.
 
 @param request The URL request that will be used to retrieve the script.
 @param delegate The delegate of the script downloader.
 @param urlSession The URL session that will be used for network retrieval.
 @return An initialized instance of SCSScriptDownloader.
 */
- (instancetype)initWithRequest:(NSURLRequest *)request delegate:(id<SCSScriptDownloaderDelegate>)delegate urlSession:(SCSURLSession *)urlSession;

/**
 Initialize a new instance of SCSScriptDownloader using a script, a base URL and an URL session.
 
 @note This method should be used for unit testing purpose only.
 
 @param script The script that must be altered
 @param baseURL The base URL from which the script has been retrieved.
 @param delegate The delegate of the script downloader.
 @param urlSession The URL session that will be used for network retrieval.
 @return An initialized instance of SCSScriptDownloader.
 */
- (instancetype)initWithScript:(NSString *)script baseURL:(NSURL *)baseURL delegate:(id<SCSScriptDownloaderDelegate>)delegate urlSession:(SCSURLSession *)urlSession;

/**
 Load the script (if necessary).
 
 @note Calling this method will cancel any pending loading.
 */
- (void)load;

/**
 Load the script and alter it using the handler (if necessary).
 
 @note Calling this method will cancel any pending loading.
 
 @param handler A block that will be called to alter the script before it is sent back to the delegate.
 */
- (void)loadWithScriptHandler:(NSString *(^ _Nullable)(NSString *))handler;

/**
 Cancel the current script loading if any.
 */
- (void)cancel;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
