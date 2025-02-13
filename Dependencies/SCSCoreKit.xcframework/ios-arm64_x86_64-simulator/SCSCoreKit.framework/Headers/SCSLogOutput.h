//
//  SCSLogOutput.h
//  SCSCoreKit
//
//  Created by Julien Gomez on 18/11/2020.
//  Copyright © 2020 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>
#if TARGET_OS_IOS || (TARGET_OS_IPHONE && !TARGET_OS_TV)
#import <SCSCoreKit/SCSLog.h>
#elif TARGET_OS_TV
#import <SCSCoreKitTV/SCSLog.h>
#endif

NS_ASSUME_NONNULL_BEGIN

/**
 Protocol that must be implemented by objects that want to act as output for a SCSLog instance.
 */
@protocol SCSLogOutput <NSObject>

@required

/**
 Log a message with a given log level
 
 @param message The message to log
 @param level The log level of the message.
 @param tag The tag level of the message.
 */
- (void)logMessage:(NSString *)message level:(SCSLogLevel)level tag:(NSString *)tag;

@end

NS_ASSUME_NONNULL_END
