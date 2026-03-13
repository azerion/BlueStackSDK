//
//  AdsSDKFactoryDelegate.h
//
//
//  Created by Nagib Bin Azad on 1/6/23.
//

#import <Foundation/Foundation.h>
#import "MediationInitializationStatus.h"

@protocol AdsSDKFactoryDelegate <NSObject>

@optional
-(void)AdsSDKFactoryDidFinishInitializing;
-(void)AdsSDKFactoryDidFinishAdaptersInitializing:(MediationInitializationStatus*)mediationInitializationStatus;
-(void)AdsSDKFactoryDidFailInitializationWithError:(NSError*) error;
@end
