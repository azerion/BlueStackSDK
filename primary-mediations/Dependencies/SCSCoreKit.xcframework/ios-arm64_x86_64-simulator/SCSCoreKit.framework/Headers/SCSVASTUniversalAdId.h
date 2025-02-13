//
//  SCSVASTUniversalAdId.h
//  SCSCoreKit
//
//  Created by Thomas Geley on 01/06/2020.
//  Copyright © 2020 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Class that represents an universal ad ID that can be used to avoid having the same
 ad multiple ad in an ad pod.
 */
@interface SCSVASTUniversalAdId : NSObject <NSCopying, NSCoding>

/// The name of the registry for this Ad Id.
@property (nonatomic, readonly) NSString *registry;

/// The value of this Universal Ad Id.
@property (nonatomic, readonly) NSString *value;

- (instancetype)init NS_UNAVAILABLE;

/**
 Initialize the SCSVASTUniversalAdId using registry and value.
 
 @param name The name of the registry.
 @param value The value for this universal ad it.
 @return An initialized instance of SCSVASTUniversalAdId.
 */
- (nullable instancetype)initWithRegistry:(NSString *)name value:(NSString *)value;

/**
 Convenience initializer from a dictionary
 
 @param dictionary The dictionary with the key/values representing the SCSVASTUniversalAdId.
 @return An initialized instance of SCSVASTUniversalAdId.
 */
- (nullable instancetype)initWithDictionary:(NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
