//
//  SCSHTMLUtils.h
//  SCSCoreKit
//
//  Created by Clémence Laurent on 01/03/12.
//  Copyright (c) 2012 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Provides some methods for easier HTML DOM verifications.
 */
@interface SCSHTMLUtils : NSObject

/**
 Check if a a script contains "mraid.js" single quoted

 @param script The script to be checked.
 @return A boolean indicating whether or not "mraid.js" single quoted was found.
 */
+ (BOOL)containsMRAIDBridgeSingleQuoteInScript:(NSString *)script;

/**
 Check if a a script contains "mraid.js" double quoted

 @param script The script to be checked.
 @return A boolean indicating whether or not "mraid.js" double quoted was found.
 */
+ (BOOL)containsMRAIDBridgeDoubleQuoteInScript:(NSString *)script;

/**
 Check if a a script contains a </HEAD> tag

 @param script The script to be checked.
 @return A boolean indicating whether or not a </HEAD> tag was found.
 */
+ (BOOL)containsClosingHEADTagInScript:(NSString *)script;

/**
 Check if a a script contains a <BODY tag

 @param script The script to be checked.
 @return A boolean indicating whether or not a <BODY tag was found.
 */
+ (BOOL)containsOpeningBODYTagInScript:(NSString *)script;

/**
 Check if a a script contains a <HTML tag

 @param script The script to be checked.
 @return A boolean indicating whether or not a <HMTL tag was found.
 */
+ (BOOL)containsOpeningHTMLTagInScript:(NSString *)script;

/**
 Check if a a script contains a </HTML> tag

 @param script The script to be checked.
 @return A boolean indicating whether or not a </HMTL> tag was found.
 */
+ (BOOL)containsClosingHTMLTagInScript:(NSString *)script;

@end

NS_ASSUME_NONNULL_END
