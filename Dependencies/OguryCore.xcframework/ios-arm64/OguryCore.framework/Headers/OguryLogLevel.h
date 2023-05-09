//
//  Copyright © 2020-present Ogury. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, OguryLogLevel) {
    /** The off log level, all log will be disabled */
    OguryLogLevelOff = -1,
    
    /** The error log level, only errors will be activated */
    OguryLogLevelError,

    /** The warning log level, only errors and warning will be activated */
    OguryLogLevelWarning,

    /** The info log level, only errors, warning, and info will be activated */
    OguryLogLevelInfo,

    /** The debug log level, errors, warning, info and debug logs will be activated  */
    OguryLogLevelDebug,

    /** The all log level, all logs will be activated  */
    OguryLogLevelAll = NSIntegerMax
};

NS_ASSUME_NONNULL_END
