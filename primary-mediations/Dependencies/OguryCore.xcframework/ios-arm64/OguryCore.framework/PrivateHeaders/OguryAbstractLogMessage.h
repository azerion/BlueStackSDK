//
//  Copyright © 2021 Ogury. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OguryLogMessage.h"

NS_ASSUME_NONNULL_BEGIN

@interface OguryAbstractLogMessage : NSObject <NSCopying, OguryLogMessage>

#pragma mark - Properties

@property (nonatomic, assign, readonly) OguryLogLevel level;
@property (nonatomic, copy, readonly) NSString *message;

#pragma mark - Initialization

- (instancetype)initWithLevel:(OguryLogLevel)level message:(NSString *)message;

@end

NS_ASSUME_NONNULL_END
