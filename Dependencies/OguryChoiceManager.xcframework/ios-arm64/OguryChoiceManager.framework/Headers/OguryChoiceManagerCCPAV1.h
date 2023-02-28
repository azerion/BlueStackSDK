//
//  OguryChoiceManagerCCPAV1.h
//  OguryChoiceManager
//
//  Copyright © 2020 Ogury Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OguryChoiceManagerCCPAV1 : NSObject

/*!
* @brief Check if Consent notice was displayed to the user
* @discussion Per CCPA regulation, just showing Consent notice to the user and explaining its rights constitutes the positive signal for publishers. In order for a user to preserve its personal data, they must choose an option to opt-out from selling its personal data. To see if Consent notice was served to the user and regulation was being followed, call:
* @warning We recommend to use this method only in the completion block of the ask and edit methods to get the updated value of the consent signal.
* @return true if has seen the notice and false if not
*/
-(BOOL)hasSeenNotice;

/*!
* @brief Transmit opt-out status
* @discussion Per CCPA regulation, a user can choose to opt-out from selling of its personal data.
* @warning We recommend to use this method only in the completion block of the ask and edit methods to get the updated value of the consent signal.
* @return true if out of sale and false if not
*/
-(BOOL)isOptOutSale;

/*!
* @brief Transmit the USP string
* @discussion While being registered to the IAB CCPA, some vendors need to explicitly receive the USP string. Check with your vendors to ensure that they process the consent signal by themselves. Otherwise, you can use the following method to obtain and pass the USP string
* @warning We recommend to use this method only in the completion block of the ask and edit methods to get the updated value of the consent signal.
* @return String value of USPS String
*/
-(NSString*)getUSPString;

/*!
* @brief Check if publisher signed LSPA
* @discussion To see if publisher is a signatory to the IAB Limited Service Provider Agreement(LSPA) and that the publisher declares that the transaction is covered as a “Covered Opt Out Transaction” or a “Non Opt Out Transaction” as those terms are defined in the Agreement
* @warning We recommend to use this method only in the completion block of the ask and edit methods to get the updated value of the consent signal.
* @return true if is LSPA and false if not
*/
-(BOOL)isLspa;

@end

NS_ASSUME_NONNULL_END
