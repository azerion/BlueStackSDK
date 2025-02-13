//
//  Copyright © 10/11/2020-present Ogury. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OguryNetworkRequestBuilder : NSObject

#pragma mark - Constants

typedef NS_ENUM(NSInteger, OguryNetworkRequestMethod) {
    OguryNetworkRequestHTTPMethodGET,
    OguryNetworkRequestHTTPMethodPOST,
    OguryNetworkRequestHTTPMethodPUT,
    OguryNetworkRequestHTTPMethodDELETE
};

extern NSString * const OguryNetworkRequestBuilderHeaderAccept;
extern NSString * const OguryNetworkRequestBuilderHeaderAcceptEncoding;
extern NSString * const OguryNetworkRequestBuilderHeaderContentType;
extern NSString * const OguryNetworkRequestBuilderHeaderContentEncoding;
extern NSString * const OguryNetworkRequestBuilderHeaderContentLength;
extern NSString * const OguryNetworkRequestBuilderHeaderUserAgent;

extern NSString * const OguryNetworkRequestBuilderHeaderApplicationJSON;
extern NSString * const OguryNetworkRequestBuilderHeaderEncodingGZIP;

#pragma mark - Properties

@property (nonatomic, assign, readonly) OguryNetworkRequestMethod method;
@property (nonatomic, strong, readonly) NSURL *url;
@property (nonatomic, strong, readonly) NSDictionary<NSString *, NSString *> *headers;
@property (nonatomic, strong, readonly) NSArray<NSURLQueryItem *> *queryItems;
@property (nonatomic, strong, readonly) NSData *payload;

#pragma mark - Initialization

- (instancetype _Nullable)initWithHTTPMethod:(OguryNetworkRequestMethod)method andURL:(NSURL *)url;

#pragma mark - Methods

- (void)setValue:(NSString *)value forHeader:(NSString *)header;

- (void)addHeaders:(NSDictionary<NSString *, NSString *> *)headers;

- (void)setHeaders:(NSDictionary<NSString *, NSString *> *)headers;

- (void)addQueryItem:(NSURLQueryItem *)queryItem;

- (void)addQueryItems:(NSArray<NSURLQueryItem *> *)queryItems;

- (void)setQueryItems:(NSArray<NSURLQueryItem *> *)queryItems;

- (void)setPayload:(NSData *)payload;

- (NSURLRequest * _Nullable)build;

@end

NS_ASSUME_NONNULL_END
