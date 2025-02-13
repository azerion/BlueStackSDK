//
//  DTBAdCallback.h
//  DTBiOSSDK
//
//  Copyright (c) 2021 Amazon Publisher Services. All rights reserved.


#import <Foundation/Foundation.h>
#import "DTBAdResponse.h"
#import "DTBAdErrorInfo.h"

@protocol DTBAdCallback

@optional
-(void)onFailure: (DTBAdError)error;
-(void)onFailure: (DTBAdError)error
     dtbAdErrorInfo:(DTBAdErrorInfo *) dtbAdErrorInfo;
@required
- (void)onSuccess:(DTBAdResponse *)adResponse;

@end
