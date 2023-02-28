//
//  OguryChoiceManagerTCFV2.h
//  OguryChoiceManager
//
//  Copyright © 2020 Ogury Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OguryChoiceManagerConstants.h"

NS_ASSUME_NONNULL_BEGIN

@interface OguryChoiceManagerTCFV2 : NSObject

/*!
* @brief Transmit the IAB string
* @discussion While being registered to the IAB TCF, some vendors need to explicitly receive the IAB string. Check with your vendors to ensure that they process the consent signal by themselves. Otherwise, you can use the this method to obtain and pass the IAB string
* @warning We recommend to use this method only in the completion block of the ask and edit methods to get the updated value of the consent signal.
* @return String value of IAB Consent String
*/
-(NSString *)getIABConsentString;

/*!
* @brief Transmit purpose-specific consent status
* @discussion Similarly to vendors, you can access consent status for each IAB purposes, and pass this signal to your vendors and your own processes accordingly. Users can consent to all purposes at once or opt-in to only a few of them
* @warning We recommend to use this method only in the completion block of the ask and edit methods to get the updated value of the consent signal.
* @param purpose a OguryChoiceManagerPurpose representing one of the enums value
* @return true if the specified purpose is accepted and false if not
*/
-(BOOL)isPurposeAccepted:(OguryChoiceManagerPurpose)purpose;

/*!
* @brief Special Features
* @discussion Similarly to vendors, you can access consent status for each IAB special feature, and pass this signal to your vendors and your own processes accordingly. Users can consent to all  special features at once or opt-in to only a few of them
* @warning We recommend to use this method only in the completion block of the ask and edit methods to get the updated value of the consent signal.
* @param specialFeature a OguryChoiceManagerSpecialFeature representing one of the enums value
* @return true if the specified special feature is accepted and false if not
*/
-(BOOL)isSpecialFeatureAccepted:(OguryChoiceManagerSpecialFeature)specialFeature;

/*!
* @brief Transmit purpose and vendor specific status for a particular vendor
* @discussion Depending on users consent choices you can check status for a particular vendor and all IAB purposes declared under Consent by that vendor to, for example enable/disable that vendor’s SDK. You can check whether all consent based purposes declared by this vendor are accepted by the user along with the vendor itself.
* @warning We recommend to use this method only in the completion block of the ask and edit methods to get the updated value of the consent signal.
* @param vendorId Integer which uniquely identifying each vendor. As an example, the vendor id is 277 for Ogury. You can find the list of all vendor ids in the Ogury Choice Manager vendor list.
* @return true if the vendor is accepted and false if not
*/
-(BOOL)isVendorAndItsPurposesAccepted:(NSInteger)vendorId;

/*!
* @brief Special Features
* @discussion Depending on the user consent choices, you may need to enable/disable some functionalities or vendor's SDK. You can check whether the user has accepted the usage of personal data for a particular vendor by calling this method:
* @warning We recommend to use this method only in the completion block of the ask and edit methods to get the updated value of the consent signal.
* @param vendorId Integer which uniquely identifying each vendor. As an example, the vendor id is 277 for Ogury. You can find the list of all vendor ids in the Ogury Choice Manager vendor list.
* @return true if the vendor is accepted and false if not
*/
-(BOOL)isAccepted:(NSInteger)vendorId;

/*!
* @brief Check the status for processing of personal data under legitimate interests for specific vendor
* @discussion User can exercise their right to object for processing of their personal data under legitimate interests for each vendor in partner list. You can check whether the user has declined the usage of personal data under legitimate interests for a particular vendor by calling this method:
* @warning We recommend to use this method only in the completion block of the ask and edit methods to get the updated value of the consent signal.
* @param vendorId Integer which uniquely identifies each vendor. You can find the list of all vendor identifiers in the Ogury Choice Manager vendor list.
* @return true if the vendor is accepted and false if not
*/
-(BOOL)isLiVendorMet:(NSInteger)vendorId;

/*!
* @brief Check the status for processing of personal data under legitimate interests for specific purpose
* @discussion Similarly to vendors, user can object to processing of their personal data under legitimate interests for each IAB purposes, You can check and pass this signal to your vendors and your own processes accordingly. You can check whether the user exercised their right to object for processing of their personal data under legitimate interests for a given purpose by calling the following method:
* @warning We recommend to use this method only in the completion block of the ask and edit methods to get the updated value of the consent signal.
* @param purpose a OguryChoiceManagerPurpose representing one of the enums value
* @return true if the specified purpose is accepted and false if not
*/
-(BOOL)isLiPurposeMet:(OguryChoiceManagerPurpose)purpose;

/*!
* @brief Check the status for processing of personal data under legitimate interests for specific vendor and their declared Legitimate interest based purposes
* @discussion User can choose to object to processing of their personal data under legitimate interests for each purpose and each vendor separately. Sometimes to disable/enable some feature of particular vendor’s SDKs you will need to know if all legitimate interests conditions are met - both for that vendor, and for each of purposes under legitimate interests declared by that vendor. In this case use this methid
* @warning We recommend to use this method only in the completion block of the ask and edit methods to get the updated value of the consent signal.
* @param vendorId Integer which uniquely identifies each vendor. You can find the list of all vendor identifiers in the Ogury Choice Manager vendor list.
* @return true if the vendor is accepted and false if not
*/
-(BOOL)isVendorsLiAndLiPurposeMet:(NSInteger)vendorId;

/*!
* @brief Check if all conditions are met for a specific vendor
* @discussion Sometimes you will need to know if all conditions are met for a particular vendor. To check if all conditions are met call this function.
* @warning We recommend to use this method only in the completion block of the ask and edit methods to get the updated value of the consent signal.
* @param vendorId Integer which uniquely identifies each vendor. You can find the list of all vendor identifiers in the Ogury Choice Manager vendor list.
* @return true if the vendor is accepted and false if not
*/
-(BOOL)isAllVendorConditionsMet:(NSInteger)vendorId;

@end

NS_ASSUME_NONNULL_END
