//
//  MAdvertiseRegistration.h
//  MNGAdServerSdk
//
//  Created by Hussein Dimessi on 2/24/17.
//  Copyright © 2017 MNG. All rights reserved.
//

#import <Foundation/Foundation.h>

void MALog(NSString *format, ...) NS_FORMAT_FUNCTION(1,2);
void MAForceLog(NSString *format, ...) NS_FORMAT_FUNCTION(1,2);

@interface MAdvertiseRegistration : NSObject

+ (MAdvertiseRegistration *)sharedRegistration;

+(NSString *)getVersion;


-(void)setDebugModeEnabled:(BOOL)enabled;
+(NSString*)oMSDKVersion;
+(BOOL)oMSDKState;
+(NSString *)getOMSDKPaternVersion;
@end
