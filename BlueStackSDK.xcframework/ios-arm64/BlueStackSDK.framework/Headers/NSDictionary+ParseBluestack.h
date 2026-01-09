//
//  NSDictionary+ParseBluestack.h
//  BlueStack
//
//  Created by HtrimechMac on 20/01/2021.
//  Copyright © 2021 MAdvertise. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (ParseBluestack)

-(nullable NSNumber *)numberForKey:(NSString * _Nonnull)key;

-(nullable NSString *)stringForKey:(NSString * _Nonnull)key;

-(nullable NSArray *)arrayOfNumbersForKey:(NSString * _Nonnull)key;

-(nullable NSArray *)arrayOfStringsForKey:(NSString * _Nonnull)key;

-(BOOL)boolForKey:(NSString * _Nonnull)key;

-(nullable NSArray *)arrayOfObjectsForKey:(NSString * _Nonnull)key;

@end

NS_ASSUME_NONNULL_END
