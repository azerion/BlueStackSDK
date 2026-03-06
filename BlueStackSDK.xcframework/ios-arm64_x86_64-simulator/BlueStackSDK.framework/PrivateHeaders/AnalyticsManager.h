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

@interface AnalyticEvent : NSObject

@property NSDate *start;
@property NSDate *end;
@property NSString *placementId;
@property NSString *frame;
@property NSString *maxWidht;
@property NSString *maxHeight;

@property NSString *autoDisplay;
@property NSString *method;
@property NSString *connexion;
@property NSString *carrierName;
@property NSString *ip;
@property NSNumber *currentCapping;
@property NSNumber *maxCapping;
@property NSDictionary *preferences;
@property NSNumber *status;
@property NSArray *stack;

-(void)addToStack:(StackElement *)stackElement;

-(NSDictionary *)dictionaryValues;

@end

@interface StackElement : NSObject

@property NSString *adserver;
@property NSNumber *priority;
@property NSNumber *timeout;
@property NSDate *start;
@property NSDate *end;
@property NSNumber *duration;
@property NSNumber *status;

@property NSArray<StackHBElement*> *hb;

-(NSDictionary *)dictionaryValues;
-(void)addToHBArray:(StackHBElement *)stackHBElement;
@end

@interface StackHBElement : NSObject

@property NSString *adapter;
@property NSNumber *timeout;
@property NSDate *start;
@property NSDate *end;
@property NSNumber *status;


-(NSDictionary *)dictionaryValues;

@end
