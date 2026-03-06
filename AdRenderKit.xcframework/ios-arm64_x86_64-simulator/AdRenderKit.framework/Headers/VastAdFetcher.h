//
//  VastAdFetcher.h
//  AdRenderKit
//
//  Created by Sayed Hasan on 7/11/25.
//

#import <Foundation/Foundation.h>
#import <AdRenderKit/VastAdFetching.h>
#import <AdRenderKit/VastAdFetcherDelegate.h>
#import <MobileAdsUtilities/MobileAdsUtilities-Swift.h>

@interface VastAdFetcher : NSObject <VastAdFetching, VastAdFetcherDelegate>

@property(nonatomic, weak) id<VastAdFetcherDelegate> delegate;
@property(nonatomic, strong) id<ServerConnectionProtocol> httpClient;

- (instancetype)initWithHttpClient:(id<ServerConnectionProtocol>)httpClient;

@end
