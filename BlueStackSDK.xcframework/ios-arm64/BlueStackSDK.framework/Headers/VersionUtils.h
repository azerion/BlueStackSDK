//
//  VersionUtils.h
//  BlueStackSDK
//
//  Created by Nagib Bin Azad on 10/3/25.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface VersionUtils : NSObject

+ (NSString *)getVersionCacheKey:(NSString* )key;
+ (NSString *)getVersionNumber;
+ (NSString *)getSementicVersionNumber;

@end

NS_ASSUME_NONNULL_END
