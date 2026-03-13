//
//  MediationInitializationStatus.h
//
//
//  Created by Nagib Bin Azad on 1/6/23.
//

#import <Foundation/Foundation.h>

@class MediationAdapterStatus;

NS_ASSUME_NONNULL_BEGIN

@interface MediationInitializationStatus : NSObject

@property (nonatomic, strong) NSArray<MediationAdapterStatus *> *adaptersStatus;

@end

NS_ASSUME_NONNULL_END
