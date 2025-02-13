//
//  APSAnalyticsLib.h
//  APSiOSSharedLib
//
//  Created by Amazon Publisher Services on 7/23/21.

#import <Foundation/Foundation.h>

#include "APSEvent.h"

#ifndef APSAnalyticsLib_h
#define APSAnalyticsLib_h

#define APS_ANALYTICS_OS_NAME @"iOS"
#define APS_ANALYTICS_SDK_VERSION @"1.0"
#define APS_ANALYTICS_SAMPLING_LOWER_LIMIT 0
#define APS_ANALYTICS_SAMPLING_UPPER_LIMIT 100
#define APS_ANALYTICS_DEFAULT_SAMPLING_RATE 1
#define APS_ANALYTICS_ADDITIONAL_DETAILS_DICT_LIMIT 20
#define APS_ANALYTICS_ADDITIONAL_VALUE_SIZE_LIMIT 100

extern NSString *const APS_ANALYTICS_DEFAULT_API_KEY;
extern NSString *const APS_ANALYTICS_HTTP_URL;
extern NSString *const APS_ANALYTICS_GAMMA_HTTP_URL;
extern NSString *const APS_ANALYTICS_BETA_HTTP_URL;

@interface APSAnalytics : NSObject

#pragma mark - Setup

+ (void)init:(NSString *)appName;
+ (void)init:(NSString *)appName samplingRate:(NSInteger)samplingRate;
+ (void)init:(NSString *)appName samplingRate:(NSInteger)samplingRate apiKey:(NSString *)apikey;
+ (void)setApiKey:(NSString *)apiKey;
+ (void)setSamplingRate:(NSInteger)samplingRate;
+ (void)setEndpointUrl:(NSString *)httpUrl;

#pragma mark - Logging

+ (void)logEvent:(enum APSEventSeverity)severity
       eventType:(enum APSEventType)eventType
    errorDetails:(NSString *)errorDetails
       exception:(NSException *)exception;
+ (void)logEvent:(enum APSEventSeverity)severity
       eventType:(enum APSEventType)eventType
       exception:(NSException *)exception;
+ (void)logEvent:(enum APSEventSeverity)severity
       eventType:(enum APSEventType)eventType
    errorDetails:(NSString *)errorDetails;

#pragma mark - Paramters

+ (void)addAdditionalDetails:(NSString *)key value:(NSString *)value;
+ (void)removeAdditionalDetails:(NSString *)key;
+ (NSString *)getAdditionalDetails;

#pragma mark - Accessors

+ (BOOL)isInitialized;
+ (BOOL)isSamplingAllowed;

+ (NSString *)getAppName;
+ (NSString *)getApiKey;
+ (NSString *)getEndpointUrl;

@end

#endif /* APSAnalyticsLib_h */
