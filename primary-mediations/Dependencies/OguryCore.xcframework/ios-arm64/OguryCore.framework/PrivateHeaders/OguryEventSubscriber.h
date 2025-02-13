//
//  Copyright © 2020-present Ogury. All rights reserved.
//

#import <Foundation/Foundation.h>

@class OguryEventEntry;

NS_ASSUME_NONNULL_BEGIN

@protocol OguryEventSubscriber <NSObject>

#pragma mark - Constants

typedef void(^eventHandlerBlock)(OguryEventEntry *event);

#pragma mark - Properties

@property (nonatomic, copy) NSString *event;
@property (nonatomic, copy) eventHandlerBlock eventHandler;

#pragma mark - Initialization

- (instancetype)initWithEvent:(NSString *)event andHandler:(eventHandlerBlock)eventHandler;

@end

NS_ASSUME_NONNULL_END
