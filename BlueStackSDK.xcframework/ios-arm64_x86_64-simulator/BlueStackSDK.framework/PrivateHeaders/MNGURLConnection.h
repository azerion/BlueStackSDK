//
//  MNGURLConnection.h
//  MngAds
//
//  Created by Hussein Dimessi on 10/1/17.
//  Copyright © 2017 MAdvertise. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MNGURLConnection : NSObject

+ (nullable NSData *)sendSynchronousRequest:(nullable NSURLRequest *)request completionHandler:(void (^_Nullable)(NSData * _Nullable data, NSURLResponse * _Nullable sessionResponse, NSError * _Nullable sessionError)) completionHandler;

+ (void)sendAsynchronousRequest:(nullable NSURLRequest*) request
                          queue:(nullable NSOperationQueue*) queue
              completionHandler:(nullable void (^)(NSURLResponse* __nullable response, NSData* __nullable data, NSError* __nullable connectionError)) handler;

@end
