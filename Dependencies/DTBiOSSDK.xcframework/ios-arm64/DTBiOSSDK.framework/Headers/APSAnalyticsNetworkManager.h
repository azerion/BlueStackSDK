//
//  APSAnalyticsNetworkManager.h
//  APSiOSSharedLib
//
//  Created by Amazon Publisher Services on 7/23/21.

#ifndef APSAnalyticsNetworkManager_h
#define APSAnalyticsNetworkManager_h

#import <Foundation/Foundation.h>

#import "APSEvent.h"

#define APS_ANALYTICS_CONTENT_TYPE_HEADER @"Content-Type"
#define APS_ANALYTICS_CONTENT_TYPE_VALUE @"application/json"
#define APS_ANALYTICS_API_HEADER @"x-api-key"
#define APS_ANALYTICS_HTTP_POST_METHOD @"POST"
#define APS_ANALYTICS_CONTENT_LENGTH @"Content-Length"
#define APS_ANALYTICS_SOCK_TIMEOUT 10000

@interface APSAnalyticsNetworkManager : NSObject

+ (void)uploadEvent:(APSEvent *)event;

@end


#endif /* APSAnalyticsNetworkManager_h */
