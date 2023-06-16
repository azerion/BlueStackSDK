//
//  MNGAdsSDKFactoryDelegate.h
//  BlueStackSDK
//
//  Created by Nagib Bin Azad on 1/6/23.
//

#import <Foundation/Foundation.h>
#import "BlueStackInitializationStatus.h"

@protocol MNGAdsSDKFactoryDelegate <NSObject>

@optional
-(void)MNGAdsSDKFactoryDidFinishInitializing;
-(void)MNGAdsSDKFactoryDidFinishAdaptersInitializing:(BlueStackInitializationStatus*)blueStackInitializationStatus;
-(void)MNGAdsSDKFactoryDidFailInitializationWithError:(NSError*) error;
@end
