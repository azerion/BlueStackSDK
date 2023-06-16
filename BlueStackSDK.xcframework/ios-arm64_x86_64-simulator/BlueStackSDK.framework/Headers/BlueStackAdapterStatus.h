//
//  BlueStackAdapterStatus.h
//  BlueStackSDK
//
//  Created by Nagib Bin Azad on 1/6/23.
//

#import <Foundation/Foundation.h>

/**
 Enumeration that define the type of error incase an ad fails to load
 */
typedef NS_ENUM(NSUInteger, BlueStackAdapterInitializationState) {
    BlueStackAdapterInitializationStateReady = 1,
    BlueStackAdapterInitializationStateNotReady = 0,
    BlueStackAdapterInitializationStateUnknown = 2
};


NS_ASSUME_NONNULL_BEGIN

@interface BlueStackAdapterStatus : NSObject

@property (nonatomic, assign) BlueStackAdapterInitializationState state;
@property (nonatomic, strong) NSString* provider;
@property (nonatomic, strong) NSString* descriptionStatus;

@end

NS_ASSUME_NONNULL_END
