//
//  SCSRemoteLogger.h
//  SCSCoreKit
//
//  Created by Thomas Geley on 18/09/2017.
//  Copyright © 2017 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>
#if TARGET_OS_IOS || (TARGET_OS_IPHONE && !TARGET_OS_TV)
#import <SCSCoreKit/SCSRemoteLog.h>
#import <SCSCoreKit/SCSLogNode.h>
#import <SCSCoreKit/SCSLocation.h>
#import <SCSCoreKit/SCSIdentity.h>
#import <SCSCoreKit/SCSRemoteLoggerProtocol.h>
#elif TARGET_OS_TV
#import <SCSCoreKitTV/SCSRemoteLog.h>
#import <SCSCoreKitTV/SCSLogNode.h>
#import <SCSCoreKitTV/SCSLocation.h>
#import <SCSCoreKitTV/SCSIdentity.h>
#import <SCSCoreKitTV/SCSRemoteLoggerProtocol.h>
#endif

NS_ASSUME_NONNULL_BEGIN

/// The channel type of the current ad.
typedef NS_ENUM(NSInteger, SCSRemoteLogSDKImplementationType) {
    SCSRemoteLogSDKImplementationTypeUnknown = -1,
    SCSRemoteLogSDKImplementationTypePrimary = 0,  // The current SDK is implemented as a Primary SDK
    SCSRemoteLogSDKImplementationTypeSecondary = 1 // The current SDK is implemented as a Secondary SDK
};

/**
 This class is used to log specific informations such as KPIs or errors.
 */
@interface SCSRemoteLogger : NSObject <SCSRemoteLoggerProtocol>

#pragma mark - Readonly properties

/// URL where the logs should be posted.
@property (nonatomic, readonly) NSURL *endPointURL;

/// The minimum log level.
@property (nonatomic, readonly) SCSRemoteLogLevel minimumLogLevel;

/// Custom headers to be sent with each POST requests.
@property (nullable, nonatomic, readonly) NSArray <NSDictionary *> *customHeaders;

/// Sampling rate for Debug Level.
@property (nonatomic, readonly) NSUInteger debugSamplingRate;

/// Sampling rate for Info Level.
@property (nonatomic, readonly) NSUInteger infoSamplingRate;

/// Sampling rate for Warning Level.
@property (nonatomic, readonly) NSUInteger warningSamplingRate;

/// Sampling rate for Error Level.
@property (nonatomic, readonly) NSUInteger errorSamplingRate;

#pragma mark - Logger manipulation

/**
 Initialize a SCSRemoteLogger
 
 @param clientCategory The client SDK Category.
 
 @return an Initialized instance of SCSRemoteLogger.
 */
- (instancetype)initWithClientSDKCategory:(NSString *)clientCategory __deprecated;

/**
 Initialize a SCSRemoteLogger
 
 @param defaultEndPoint The end point URL that will be used by default until a remote config is received.
 @param clientCategory The client SDK Category.
 
 @return an Initialized instance of SCSRemoteLogger.
 */
- (instancetype)initWithDefaultEndPoint:(NSURL *)defaultEndPoint clientSDKCategory:(NSString *)clientCategory;

/**
 Configure the logger with a dictionary received from Smart servers.
 
 @param dictionary The configuration dictionary.
 */
- (void)configureWithDictionary:(NSDictionary *)dictionary;

/**
 Enqueue a SCSRemoteLog object to be posted.
 
 @param log The SCSRemoteLog to be posted.
 @param nodes An array of SCSLogNode to enrich the log with various informations pulled from the SDK.
 */
- (void)log:(SCSRemoteLog *)log enrichedWithNodes:(nullable NSArray<SCSLogNode *> *)nodes;

/**
 Enqueue a SCSRemoteLog object to be posted. This method is deprecated, please use the ones taking an array of SCSLogNode instead.
 
 @param log The SCSRemoteLog to be posted.
 @param dictionaries An array of Dictionaries to enrich the log with various informations pulled from the SDK.
 */
- (void)log:(SCSRemoteLog *)log enrichedWithDictionaries:(nullable NSArray<NSDictionary *> *)dictionaries __deprecated;

#pragma mark - SCSRemoteLog generation

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
