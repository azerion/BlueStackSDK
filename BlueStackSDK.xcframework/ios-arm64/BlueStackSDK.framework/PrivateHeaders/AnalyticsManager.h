//
//  AnalyticsManager.h
// 
//
//  Created by MacBookPro_anypli on 4/28/15.
//  Copyright (c) 2015 Bensalah Med Amine. All rights reserved.
//

#import <Foundation/Foundation.h>

@class AnalyticEvent,StackElement,StackHBElement;

@interface AnalyticsManager : NSObject

+(AnalyticsManager *)sharedManager;

-(void)addRequestDetails:(StackElement *)details ForPlacementId:(NSString *)placementId;
-(void)addEventForRequest:(AnalyticEvent*)event;

@property NSString *appName;
@property NSString *appId;
@property NSString *version;
@property NSString *deviceId;

@end
