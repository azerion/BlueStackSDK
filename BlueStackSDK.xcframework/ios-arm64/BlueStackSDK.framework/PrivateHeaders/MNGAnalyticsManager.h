//
//  MNGAnalyticsManager.h
//  MngAds
//
//  Created by MacBookPro_anypli on 4/28/15.
//  Copyright (c) 2015 Bensalah Med Amine. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MNGEvent,MNGStackElement,MNGStackHBElement;

@interface MNGAnalyticsManager : NSObject

+(MNGAnalyticsManager *)sharedManager;

-(void)addRequestDetails:(MNGStackElement *)details ForPlacementId:(NSString *)placementId;
-(void)addEventForRequest:(MNGEvent*)event;

@property NSString *appName;
@property NSString *appId;
@property NSString *version;
@property NSString *deviceId;

@end

@interface MNGEvent : NSObject

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

-(void)addToStack:(MNGStackElement *)stackElement;

-(NSDictionary *)dictionaryValues;

@end

@interface MNGStackElement : NSObject

@property NSString *adserver;
@property NSNumber *priority;
@property NSNumber *timeout;
@property NSDate *start;
@property NSDate *end;
@property NSNumber *duration;
@property NSNumber *status;

@property NSArray<MNGStackHBElement*> *hb;

-(NSDictionary *)dictionaryValues;
-(void)addToHBArray:(MNGStackHBElement *)stackHBElement;
@end

@interface MNGStackHBElement : NSObject

@property NSString *adapter;
@property NSNumber *timeout;
@property NSDate *start;
@property NSDate *end;
@property NSNumber *status;


-(NSDictionary *)dictionaryValues;

@end
