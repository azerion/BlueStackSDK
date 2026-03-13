//
//  VastAdFetcherDelegate.h
//  BlueStackSDK
//
//  Created by Sayed Hasan on 7/11/25.
//

#import <AdRenderKit/VastVideoConfig.h>
#import <AdRenderKit/VastAdFetching.h>
#import <Foundation/Foundation.h>

@protocol VastAdFetcherDelegate <NSObject>

@optional

- (void)didLoadAd:(VastVideoConfig *)videoConfig;

- (void)didFailToLoadAdWithError:(NSError *)error;

@end
