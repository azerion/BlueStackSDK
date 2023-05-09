//
//  Copyright © 2021 Ogury. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <os/log.h>
#import "OguryLogMessage.h"

@protocol OguryLogFormatter;

NS_ASSUME_NONNULL_BEGIN

@protocol OguryLogger <NSObject>

#pragma mark - Properties

@property (nonatomic, strong, nullable) id<OguryLogFormatter> logFormatter;
@property (nonatomic, assign, readwrite) OguryLogLevel logLevel;

#pragma mark - Methods

- (void)logMessage:(id<OguryLogMessage>)message;

@end

NS_ASSUME_NONNULL_END
