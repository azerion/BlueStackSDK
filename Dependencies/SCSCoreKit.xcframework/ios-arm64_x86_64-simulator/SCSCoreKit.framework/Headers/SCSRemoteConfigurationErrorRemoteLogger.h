//
//  SCSRemoteConfiguratorErrorRemoteLogger.h
//  SCSCoreKit
//
//  Created by glaubier on 20/03/2020.
//  Copyright © 2020 Smart AdServer. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

/// The channel type of the current ad.
typedef NS_ENUM(NSInteger, SCSAdCallAdditionalParametersType) {
    SCSAdCallAdditionalParametersTypePOST = 0,
    SCSAdCallAdditionalParametersTypeGET = 1,
    SCSAdCallAdditionalParametersTypeUnknown = -1
};

/**
 Public interface handling the Remote Configurator Error logging.
 */
@protocol SCSRemoteConfigurationErrorRemoteLogger <NSObject>

/**
 Called when the remote configuration is the default one.
 
 That means the given site ID is either wrong or unset.
 */
- (void)logWrongSiteIDError;

/**
 Called when the additional parameters received are not all well formed.
 
 @param invalidParameterType Either the invalid parameter is a POST parameter, a GET parameter or unknown if the whole additionalAdCallParameter dictionary is invalid.
 */
- (void)logInvalidAdditionalParameters:(SCSAdCallAdditionalParametersType)invalidParameterType;


@end

NS_ASSUME_NONNULL_END
