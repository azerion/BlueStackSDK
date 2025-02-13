//
//  APSEvent.h
//  APSiOSAnalyticsTestApp
//
//  Created by Amazon Publisher Services on 7/23/21.

#ifndef APSEvent_h
#define APSEvent_h

#import <Foundation/Foundation.h>

#define APS_ANALYTICS_EXCEPTION_LOG_SIZE 2048
#define APS_ANALYTICS_TRUNCATE_SEPARATOR @"..."
#define APS_ANALYTICS_EMPTY_STRING @""
#define APS_ANALYTICS_OS_NAME @"iOS"
#define APS_ANALYTICS_MANUFACTURER @"Apple"

#define APS_ANALYTICS_HW_MACHINE "hw.machine"

#define APS_ANALYTICS_TYPE_EXCEPTION @"Exception"
#define APS_ANALYTICS_TYPE_LOG @"Log"
#define APS_ANALYTICS_SEVERITY_FATAL @"Fatal"
#define APS_ANALYTICS_SEVERITY_ERROR @"Error"
#define APS_ANALYTICS_SEVERITY_INFO @"Info"
#define APS_ANALYTICS_SEVERITY_WARN @"Warn"
#define APS_ANALYTICS_SEVERITY_DEBUG @"Debug"

typedef enum APSEventSeverity {
    APSEventSeverityFatal,
    APSEventSeverityError,
    APSEventSeverityInfo,
    APSEventSeverityWarn,
    APSEventSeverityDebug
} APSEventSeverity;

typedef enum APSEventType {
    APSEventTypeException,
    APSEventTypeLog
} APSEventType;

@interface APSEvent : NSObject

@property NSString *sdkVersion;

@property NSString *eventType;
@property NSString *timestamp;
@property NSString *severity;

@property NSString *pkgName;

@property NSString *osName;
@property NSString *osVersion;

@property NSString *deviceManufacturer;
@property NSString *deviceModel;

@property NSString *configVersion;

@property NSString *errorDetails;

@property NSString *exceptionLog;

- (id)initWithSeverity:(enum APSEventSeverity)severity eventType:(enum APSEventType)eventType;
- (void)setEventTypeValue:(enum APSEventType)eventType;
- (void)setEventSeverityValue:(enum APSEventSeverity)severity;
- (void)setExceptionDetailValue:(NSException *)exception;
- (void)setTimestampValue:(NSInteger)timestamp;
- (void)setErrorDetailsValue:(NSString *)errorDetails;
- (NSData *)toJsonData;
- (NSString *)deviceModelVersion;

@end

#endif /* APSEvent_h */
