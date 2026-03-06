//
//  AdLoadService.h
//  AdServerSdk
//
//  Created by Mohamed Amine Ben Salah on 9/7/15.
//  Copyright (c) 2015 All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AdRequest.h"

@interface AdLoadService : NSObject

@property (nonatomic, strong) AdRequest *resquest;

-(void)loadRequest:(AdRequest *)adRequest completion:(void (^)(NSDictionary* jsonObject, NSError* connectionError)) completion;
-(NSString*)aplyMarcosToString:(NSString*)string dictionary:(NSDictionary*)dict;

@end
