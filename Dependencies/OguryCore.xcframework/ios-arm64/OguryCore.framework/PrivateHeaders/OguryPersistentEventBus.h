//
//  Copyright © 2020-present Ogury. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OguryEventBus.h"

/// An OguryEventBus with a last event persistence, each time a new subscriber is registered, it will received the latest event associated with the registered event.
@interface OguryPersistentEventBus : OguryEventBus

@end
