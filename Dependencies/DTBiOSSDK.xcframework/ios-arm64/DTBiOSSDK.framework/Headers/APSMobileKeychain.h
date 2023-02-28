//
//  APSMobileKeychain.h
//  APSiOSSharedLib
//
//  Created by Amazon Publisher Services on 10/20/21. Copyright © 2019 Amazon.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//Note: Apple claims that keychain provides thread-safely but few developers say that they have encountered race conditions
@interface APSMobileKeychain : NSObject
/**
 @abstract Saves the object to the Keychain.
 @param object The object to save. Must be an object that could be archived with NSKeyedArchiver.
 @param key The key identifying the object to save.
 @return @p YES if saved successfully, @p NO otherwise.
 */
+ (BOOL)saveObject:(id)object forKey:(NSString *)key queryDictionary:(NSDictionary *_Nullable*_Nullable)dict;

/**
 @abstract Loads the object with specified @p key from the Keychain.
 @param key The key identifying the object to load.
 @return The object identified by @p key or nil if it doesn't exist.
 */
+ (id)loadObjectForKey:(NSString *)key queryDictionary:(NSDictionary *_Nullable*_Nullable)dict;

/**
 @abstract Deletes the object with specified @p key from the Keychain.
 @param key The key identifying the object to delete.
 @return @p YES if deletion was successful, @p NO if the object was not found or some other error ocurred.
 */
+ (BOOL)deleteObjectForKey:(NSString *)key queryDictionary:(NSDictionary *_Nullable*_Nullable)dict;

@end

NS_ASSUME_NONNULL_END
