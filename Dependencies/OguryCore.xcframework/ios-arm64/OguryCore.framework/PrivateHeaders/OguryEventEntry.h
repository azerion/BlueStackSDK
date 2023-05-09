//
//  Copyright © 2020-present Ogury. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OguryEventEntry : NSObject

#pragma mark - Constants

extern NSString * const OGCEventEntryMessageUnknown;

#pragma mark - Properties

@property (nonatomic, copy) NSString *event;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, retain) NSDate *timestamp;

#pragma mark - Initialization

- (instancetype)initWithEvent:(NSString *)event andMessage:(NSString *)message;

+ (instancetype)unknownEventEntryWithEvent:(NSString *)event;

@end

NS_ASSUME_NONNULL_END
