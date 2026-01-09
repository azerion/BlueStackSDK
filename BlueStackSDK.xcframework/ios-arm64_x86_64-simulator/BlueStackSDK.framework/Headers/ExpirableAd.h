//
//  ExpirableAd.h
//  BlueStackSDK
//
//  Created by Nagib Bin Azad on 16/6/25.
//

#import <Foundation/Foundation.h>

@protocol ExpirableAd <NSObject>

@property(nonatomic, strong, nullable) NSDate *expirationDate;

- (BOOL)isExpired;

@end
