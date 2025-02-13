//
//  OguryChoiceManagerConfig.h
//  OguryChoiceManager
//
//  Copyright © 2020 Ogury Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OguryChoiceManagerConstants.h"

NS_ASSUME_NONNULL_BEGIN

@interface OguryChoiceManagerConfig : NSObject

/*!
* @brief a enum value type of OguryChoiceManagerTCFVersion
* @discussion Desired TCF Version that your application needs it .
*/
@property (nonatomic) OguryChoiceManagerTCFVersion tcfVersion;

/*!
* @brief a enum value type of OguryChoiceManagerCCPAVersion
* @discussion Desired CCPA Version that your application needs it .
*/
@property (nonatomic) OguryChoiceManagerCCPAVersion ccpaVersion;

///Default settings for Ogury Choice Manager : TFC V2 and CCPA V1
+ (OguryChoiceManagerConfig *)defaultConfiguration;

///Deprecated use 'defaultConfiguration' method instead
+ (OguryChoiceManagerConfig *)defaultConfig __attribute__((deprecated("Use 'defaultConfiguration' method instead")));

@end

NS_ASSUME_NONNULL_END
