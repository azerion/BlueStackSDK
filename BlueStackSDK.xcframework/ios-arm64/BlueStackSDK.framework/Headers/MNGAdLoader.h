//
//  MNGAdLoader.h
//  MNGAdServerSdk
//
//  Created by Mohamed Amine Ben Salah on 9/7/15.
//  Copyright (c) 2015 MNG. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MNGAdRequest.h"

@interface MNGAdLoader : NSObject

@property (nonatomic, strong) MNGAdRequest *resquest;

-(void)loadRequest:(MNGAdRequest *)adRequest completion:(void (^)(NSDictionary* jsonObject, NSError* connectionError)) completion;
-(NSString*)aplyMarcosToString:(NSString*)string dictionary:(NSDictionary*)dict;

@end
