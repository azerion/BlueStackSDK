//
//  VastAdFetching.h
//  BlueStackSDK
//
//  Created by Sayed Hasan on 4/2/26.
//

#import <Foundation/Foundation.h>

@protocol VastAdFetcherDelegate;

@protocol VastAdFetching <NSObject>

@property (nonatomic, weak) id<VastAdFetcherDelegate> delegate;

- (void)fetchVASTAdWithURL:(NSURL *)url;
- (void)fetchVASTAdWithContent:(NSData *)content;

@end
