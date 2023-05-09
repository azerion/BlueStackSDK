//
//  Copyright © 10/11/2020-present Ogury. All rights reserved.
//

#import <Foundation/Foundation.h>

@class OguryNetworkClientError;

NS_ASSUME_NONNULL_BEGIN

@interface OguryNetworkClient : NSObject

#pragma mark - Methods

+ (instancetype)shared;

- (void)performRequest:(NSURLRequest *)request completionHandler:(void(^)(NSData * _Nullable result, NSError * _Nullable error))completionHandler;

- (void)performRequest:(NSURLRequest *)request completionHandlerWithUrlResponse:(void(^)(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error))completionHandler;

@end

NS_ASSUME_NONNULL_END
