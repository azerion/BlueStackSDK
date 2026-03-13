//
//  MraidUtility.h
//  AdServerSdk
//
//  Created by Mohamed Amine Ben Salah on 12/15/15.
//  Copyright © 2015 All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MraidUtility : NSObject

+(NSString*)mraidJS;

+ (NSString *)readyEvent;

+ (NSString *)error:(NSString *)error
        forFunction:(NSString *)function;

+ (NSString *)placementType:(NSString *)placementType;

+ (NSString *)isViewable:(BOOL)isViewable;

+ (NSString *)currentSize:(CGSize)size;

+ (NSString *)currentPosition:(CGRect)position;

+ (NSString *)defaultPosition:(CGRect)position;

+ (NSString *)screenSize:(CGSize)size;

+ (NSString *)maxSize:(CGSize)size;

+ (NSString *)smsSupported:(BOOL)smsSupported
              telSupported:(BOOL)telSupported
         calendarSupported:(BOOL)calendarSupported
     storePictureSupported:(BOOL)storePictureSupported
      inlineVideoSupported:(BOOL)inlineVideoSupported;

+ (NSString *)getState;

+ (NSString *)nativeCallComplete:(NSString *)command;

@end
