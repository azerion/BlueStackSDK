//
//  APSCacheManager.h
//  DTBiOSSDK
//
//  Copyright © 2021 amazon.com. All rights reserved.
//

#ifndef APSCacheManager_h
#define APSCacheManager_h

#import <Foundation/Foundation.h>
#import "APSCacheData.h"

@interface APSCacheManager : NSObject

+ (void) addAdMobCacheWithRequestId:(NSString *)requestId cacheData:(APSCacheData *)cacheData;
+ (void) removeExpiredAdMobCaches;
+ (void) removeAdMobCacheWithRequestId:(NSString *)requestId;
+ (NSMutableDictionary *) getAdMobCacheDataDictionary;
+ (APSCacheData *) getAdMobCacheWithRequestId:(NSString *)requestId;
+ (BOOL) containsAutoRefreshRequestId: (NSString *) requestId;
+ (void) addAutoRefreshId: (NSString *) requestId;
@end


#endif /* APSCacheManager_h */
