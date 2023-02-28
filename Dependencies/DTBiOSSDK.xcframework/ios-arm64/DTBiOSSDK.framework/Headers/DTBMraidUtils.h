//
//  DTBMraidUtils.h
//  DTBiOSSDK
//
//  Copyright (c) 2021 Amazon Publisher Services. All rights reserved.

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "DTBMraidConstants.h"

NS_ASSUME_NONNULL_BEGIN

@interface DTBMraidUtils : NSObject

+ (NSString*)placementTypeAsString:(DTBAdPlacementType)placementType;
+ (NSString*)stateTypeToString:(DTBAdState)adStatusType;
+ (NSString*)mraidEnvParametersAsString:(NSDictionary *)params;
+ (NSString*)mraidSupportObjectAsJSONString;
+ (DTBAdOrientation)orientationFromForceOrientationString:(NSString *)orientationString;
+ (NSString *)orientationTypeToString:(DTBAdOrientation)orientation;
+ (UIInterfaceOrientation)dtbOrientationToUIOrientationState:(DTBAdOrientation)orientation;
+ (DTBAdOrientation) UIOrientationStateToDTBOrientationState:(UIInterfaceOrientation)orientation;
+ (BOOL)isAppOrientationLocked;
+ (NSArray *)supportedOrientationsAsArray;

@end

NS_ASSUME_NONNULL_END
