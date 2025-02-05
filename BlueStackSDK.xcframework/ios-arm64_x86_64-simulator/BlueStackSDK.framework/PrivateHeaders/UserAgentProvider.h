//
//  UserAgentProvider.h
//  BlueStackSDK
//
//  Created by Nagib Bin Azad on 16/4/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface UserAgentProvider : NSObject

+ (UserAgentProvider *)shared;

- (void)loadAgent;
+ (NSString *)getUserAgent;

@end

NS_ASSUME_NONNULL_END
