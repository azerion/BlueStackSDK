//
//  Copyright © 2022 Ogury Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OguryAbstractLogMessage.h"
#import "OguryEventEntry.h"
#import "OguryStringFormattable.h"

NS_ASSUME_NONNULL_BEGIN

@interface OGCURLRequestLogMessage : OguryAbstractLogMessage

#pragma mark - Properties

@property (nonatomic, strong) NSURLRequest *request;

#pragma mark - Initialization

- (instancetype)initWithLevel:(OguryLogLevel)level message:(NSString *)message request:(NSURLRequest *)request;

@end

NS_ASSUME_NONNULL_END
