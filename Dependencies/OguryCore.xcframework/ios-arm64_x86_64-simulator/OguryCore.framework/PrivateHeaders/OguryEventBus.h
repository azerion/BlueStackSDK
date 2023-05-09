//
//  Copyright © 2020-present Ogury. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OguryEventSubscriber.h"

NS_ASSUME_NONNULL_BEGIN

/// Custom implementation of the Observer pattern.
@interface OguryEventBus : NSObject

#pragma mark - Properties

@property (nonatomic, readonly, retain) NSHashTable<id<OguryEventSubscriber>> *subscribers;

#pragma mark - Methods

/**
 Register the supplied OguryEventSubscriber as a subscriber to forward event to.

 @param oguryEventSubscriber The subscriber to register.
*/
- (void)registerOguryEventSubscriber:(id<OguryEventSubscriber>)oguryEventSubscriber;

/**
 Unregister the supplied OguryEventSubscriber so it will not receive future events.

 @param oguryEventSubscriber The subscriber to unregister.
*/
- (void)unregisterOguryEventSubscriber:(id<OguryEventSubscriber>)oguryEventSubscriber;

/**
 Dispatch the supplied OguryEvent to all subscribers listening for it.

 @param oguryEventEntry The event to dispatch to subscribers.
*/
- (void)dispatchOguryEvent:(OguryEventEntry *)oguryEventEntry;

@end

NS_ASSUME_NONNULL_END
