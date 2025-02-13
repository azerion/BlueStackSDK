//
//  SCSPropertyCacheManager.h
//  SCSCoreKit
//
//  Created by Guillaume Laubier on 05/10/2022.
//  Copyright © 2022 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Protocol implement by objects in charge of storing and retrieving properties in cache.
 */
@protocol SCSPropertyCacheManager <NSObject>

/**
 Stores an object in cache.
 @param object The object to store in cache.
 @param key The key under which the object will be stored.
 */
- (void)setObject:(nullable id)object forKey:(NSString *)key;

/**
 Retrieves an object from cache, if any.
 @param key The key under which the object hsould be retrieved.
 @return an object, if any.
 */
- (nullable id)objectForKey:(nullable NSString *)key;

@end

NS_ASSUME_NONNULL_END
