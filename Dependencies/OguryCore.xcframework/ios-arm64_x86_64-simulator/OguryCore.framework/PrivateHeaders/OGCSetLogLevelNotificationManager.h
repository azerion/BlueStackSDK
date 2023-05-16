//
//  Copyright © 2022 Ogury. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OGCDarwinNotificationStringFormatter.h"

NS_ASSUME_NONNULL_BEGIN

@interface OGCSetLogLevelNotificationManager : NSObject

- (void)registerToNotification;
- (void)unregisterFromNotification;

@end

NS_ASSUME_NONNULL_END
