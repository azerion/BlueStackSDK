//
//  SCSLogVASTErrorNode.h
//  SCSCoreKit
//
//  Created by glaubier on 26/08/2019.
//  Copyright © 2019 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>
#if TARGET_OS_IOS || (TARGET_OS_IPHONE && !TARGET_OS_TV)
#import <SCSCoreKit/SCSLogNode.h>
#elif TARGET_OS_TV
#import <SCSCoreKitTV/SCSLogNode.h>
#endif

NS_ASSUME_NONNULL_BEGIN

@interface SCSLogVASTErrorNode : SCSLogNode

/**
 Initialize the VASTError node with all needed information.
 
 @param description The description of the error.
 @param VASTResponse The VASTResponse associated with the error.
 @param VASTCode The VAST Code of the error.
 @param smartCode The Smart Code of the error.
 @param optionalInfo Optional info about the error.
 */
- (instancetype)initWithDescription:(NSString *)description
                       VASTResponse:(nullable NSString *)VASTResponse
                           VASTCode:(NSInteger)VASTCode
                          smartCode:(NSInteger)smartCode
                       optionalInfo:(nullable NSDictionary *)optionalInfo;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
