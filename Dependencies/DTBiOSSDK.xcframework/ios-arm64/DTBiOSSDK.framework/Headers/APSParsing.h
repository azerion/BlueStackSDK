//
//  APSParsing.h
//  APSiOSSharedLib
//
//  Copyright © 2022 amazon.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 @description Returns an NSInteger value from a dictionary at the key or a default value if there is any issue. Be careful if the string value is not a valid number.

 @param dictionary An input dictionary.
 @param key A key name of the value in the dictionary.
 @param defaultValue A default value if the value cannot be determined.
 @return An NSInteger value of the key in the dictionary. It will return the default value if the dictionary is nil or key is nil or dictionary does not have the key
 or the value is not a string or number.

 @note If the value is a string, it will get the integerValue from the string which supports positive and negative numbers but will return 0 if the string is not a number.
 */
NSInteger APSParsingGetIntegerFromDictionary(NSDictionary * _Nullable dictionary, NSString *key, NSInteger defaultValue);

/**
 @description Returns an NSString value from a dictionary at the key or a default value if there is any issue.

 @param dictionary An input dictionary.
 @param key A key name of the value in the dictionary.
 @param defaultValue A default value if the value cannot be determined.
 @return An NSString value of the key in the dictionary. It will return the default value if the dictionary is nil or key is nil or dictionary does not have the key
 or the value is not a string.

 @note The return value can be nil or [NSNull null] if the function returns the defaultValue which can be passed as nil or [NSNull null].
 */
NSString *APSParsingGetStringFromDictionary(NSDictionary * _Nullable dictionary, NSString *key, NSString *defaultValue);

/**
 @description Check whether the input string is not nil or empty.

 @param string Nullable input string
 @return YES if the string is not nil, not [NSNullabe null] and not @""
 */
BOOL APSParsingIsEmptyString(NSString * _Nullable string);

NS_ASSUME_NONNULL_END
