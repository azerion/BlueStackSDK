//
//  Copyright © 2021 Ogury. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, OguryLogLevel);

@protocol OguryLogger;

NS_ASSUME_NONNULL_BEGIN

@interface OguryLog : NSObject

#pragma mark - Properties

@property (nonatomic, strong, readonly) NSMutableArray<id<OguryLogger>> *loggers;

#pragma mark - Methods

- (void)addLogger:(id<OguryLogger>)logger;

- (void)clearLoggers;

- (void)setLogLevel:(OguryLogLevel)logLevel;

- (void)logMessage:(NSString *)message level:(OguryLogLevel)level;

- (void)log:(OguryLogLevel)level format:(NSString *)format, ...;

@end

NS_ASSUME_NONNULL_END
