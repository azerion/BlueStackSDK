//
//  SCSLogMeasureNode.h
//  SCSCoreKit
//
//  Created by glaubier on 25/03/2019.
//  Copyright © 2019 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>
#if TARGET_OS_IOS || (TARGET_OS_IPHONE && !TARGET_OS_TV)
#import <SCSCoreKit/SCSLogNode.h>
#elif TARGET_OS_TV
#import <SCSCoreKitTV/SCSLogNode.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@interface SCSLogMeasureNode : SCSLogNode

- (instancetype)init NS_UNAVAILABLE;

/**
 Initialize the measure node with all needed information.
 
 @param dictionary A NSDictionary containing all measures.
 
 @return an initialized instance of SCSLogMeasureNode.
 */
- (instancetype)initWithMeasureDictionary:(NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
