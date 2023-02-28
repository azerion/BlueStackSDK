//
//  SCSStringUtils.h
//  SCSCoreKit
//
//  Created by Guillaume Laubier on 09/09/2022.
//  Copyright © 2022 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SCSStringUtils : NSObject

+ (NSString *)escapeUnescapedSingleQuotesForString:(nullable NSString *)stringToEscape;

@end

NS_ASSUME_NONNULL_END
