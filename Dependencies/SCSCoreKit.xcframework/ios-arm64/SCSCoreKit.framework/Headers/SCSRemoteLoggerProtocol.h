//
//  SCSRemoteLoggerProtocol.h
//  SCSCoreKit
//
//  Created by Guillaume Laubier on 25/08/2022.
//  Copyright © 2022 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class SCSRemoteLog;

@protocol SCSRemoteLoggerProtocol <NSObject>

/**
 Convenient method to initialize a SCSRemoteLog object with no type nor metric.
 If no SCSRemoteLog object is returned, it means the validation criteria to post the log (such as sampling level) were not met.
 
 @param message The message to be associated with the Log.
 @param level The level of the Log.
 
 @return An Initialized instance of a SCSRemoteLog object.
 */
- (nullable SCSRemoteLog *)generateLogWithMessage:(nullable NSString *)message level:(SCSRemoteLogLevel)level;

/**
 Convenient method to initialize a SCSRemoteLog object with no metric.
 If no SCSRemoteLog object is returned, it means the validation criteria to post the log (such as sampling level) were not met.
 
 @param message The message to be associated with the Log.
 @param level The level of the Log.
 @param type The type of the Log.
 
 @return An Initialized instance of a SCSRemoteLog object.
 */
- (nullable SCSRemoteLog *)generateLogWithMessage:(nullable NSString *)message level:(SCSRemoteLogLevel)level type:(nullable NSString *)type;

/**
 Convenient method to initialize a SCSRemoteLog object.
 If no SCSRemoteLog object is returned, it means the validation criteria to post the log (such as sampling level) were not met.
 
 @param message The message to be associated with the Log.
 @param level The level of the Log.
 @param type The type of the Log.
 @param metricType The metricType associated with the Log.
 @param metricValue The metricValue associated with the Log.
 
 @return An Initialized instance of a SCSRemoteLog object.
 */
- (nullable SCSRemoteLog *)generateLogWithMessage:(nullable NSString *)message level:(SCSRemoteLogLevel)level type:(nullable NSString *)type metricType:(nullable NSString *)metricType metricValue:(nullable NSString *)metricValue __deprecated;

/**
 Convenient method to initialize a SCSRemoteLog object.
 If no SCSRemoteLog object is returned, it means the validation criteria to post the log (such as sampling level) were not met.
 
 @param message The message to be associated with the Log.
 @param level The level of the Log.
 @param type The type of the Log.
 @param baseURLString The current baseURL.
 @param nodes The nodes of the log.

 @return An Initialized instance of a SCSRemoteLog object.
 */
- (nullable SCSRemoteLog *)generateLogWithMessage:(nullable NSString *)message level:(SCSRemoteLogLevel)level type:(nullable NSString *)type baseURLString:(nullable NSString *)baseURLString nodes:(nullable NSArray<SCSLogNode *> *)nodes;

@end

NS_ASSUME_NONNULL_END
