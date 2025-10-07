//
//  BLSLogger.h
//  BlueStackSDK
//
//  Created by Nagib Bin Azad on 5/11/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

void DebugLog(NSString *format, ...) NS_FORMAT_FUNCTION(1,2);

NS_ASSUME_NONNULL_END

@interface BLSLogger : NSObject

+ (void)setDebugModeEnabled:(BOOL)enabled;
+ (void)setEventDebugEnabled:(BOOL)enabled;

+ (BOOL)isDebugModeEnabled;
+ (BOOL)isEventebugEnabled;

@end
