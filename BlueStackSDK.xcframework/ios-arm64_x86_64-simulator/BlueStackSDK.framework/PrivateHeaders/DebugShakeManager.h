//
//  DebugShakeManager.h
// 
//
//  Created by MacBook Pro on 03/01/2017.
//  Copyright © 2017 Bensalah Med Amine. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DebugShakeManager;
@protocol ShakeDetectorDelegate;

@interface DebugShakeManager : NSObject<ShakeDetectorDelegate>

+(DebugShakeManager*)sharedManager;

-(void)addRequestDetails:(NSString *)details;

-(void)setEnabled:(BOOL)enabled;

@property (nonatomic, strong) NSString *appId;

@end
