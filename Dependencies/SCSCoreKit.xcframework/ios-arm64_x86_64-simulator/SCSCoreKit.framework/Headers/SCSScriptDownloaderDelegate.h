//
//  SCSScriptDownloaderDelegate.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 29/01/2019.
//  Copyright © 2019 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class SCSScriptDownloader;

/**
 SCSScriptDownloader delegate.
 */
@protocol SCSScriptDownloaderDelegate <NSObject>

/**
 Called when the script downloader successfully downloaded a script (and applied the script handler if any).
 
 @param scriptDownloader The script downloader calling the delegate.
 @param script The downloaded (and altered) script.
 @param baseURL The script base URL.
 */
- (void)scriptDownloader:(SCSScriptDownloader *)scriptDownloader didDownloadScript:(NSString *)script withBaseURL:(NSURL *)baseURL;

/**
 Called when the script downloader did fail to download the script.
 
 @param scriptDownloader The script downloader calling the delegate.
 @param error The error that has prevented the script downloader from fetching the script.
 */
- (void)scriptDownloader:(SCSScriptDownloader *)scriptDownloader didFailToLoadWithError:(NSError *)error;

@end

NS_ASSUME_NONNULL_END
