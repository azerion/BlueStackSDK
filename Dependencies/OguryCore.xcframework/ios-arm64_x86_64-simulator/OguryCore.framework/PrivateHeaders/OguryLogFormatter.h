//
//  Copyright © 2021 Ogury. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OguryLogMessage.h"

NS_ASSUME_NONNULL_BEGIN

@protocol OguryLogFormatter <NSObject>

#pragma mark - Methods

- (nullable NSString *)formatLogMessage:(id<OguryLogMessage>)logMessage;

@end

NS_ASSUME_NONNULL_END
