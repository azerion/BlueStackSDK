//
//  OguryChoiceManagerConstants.h
//  OguryChoiceManager
//
//  Copyright © 2020 Ogury Ltd. All rights reserved.
//

#ifndef OguryChoiceManagerConstants_h
#define OguryChoiceManagerConstants_h


/*!
* @typedef OguryChoiceManagerAnswer
* @brief A list of posible answers returned by Choice Manager
*/
typedef NS_ENUM(NSInteger, OguryChoiceManagerAnswer) {
    ///TCF ONLY Response for Full Approval
    OguryChoiceManagerAnswerFullApproval         = 1,
    ///TCF ONLY Response for Partial Approval
    OguryChoiceManagerAnswerPartialApproval      = 2,
    ///TCF ONLY Response for Refusal
    OguryChoiceManagerAnswerRefusal              = 3,
    ///TCF ONLY Response for No Answer
    OguryChoiceManagerAnswerNoAnswer             = 4,
    ///CCPA Response for Sale Allowed
    OguryChoiceManagerAnswerSaleAllowed          = 10,
    ///CCPA Response for Sale Denied
    OguryChoiceManagerAnswerSaleDenied           = 11
};

/*!
* @typedef OguryChoiceManagerTCFVersion
* @brief A list of posible TCF Versions for setup Choice Manager
*/
typedef NS_ENUM(NSInteger, OguryChoiceManagerTCFVersion) {
    OguryChoiceManagerTCFVersion2   = 2
};

/*!
* @typedef OguryChoiceManagerCCPAVersion
* @brief A list of posible CCPA Versions for setup Choice Manager
*/
typedef NS_ENUM(NSInteger, OguryChoiceManagerCCPAVersion) {
    OguryChoiceManagerCCPAVersion1   = 1
};

/*!
* @typedef OguryChoiceManagerPurpose
* @brief A list of posible Purposes that can be used to check if accepted by the client
*/
typedef NS_ENUM(NSUInteger, OguryChoiceManagerPurpose) {
    OguryChoiceManagerPurposeStoreInformation                 = 2,
    OguryChoiceManagerPurposeSelectBasicAds                   = 4,
    OguryChoiceManagerPurposeCreatePersonalisedAds            = 8,
    OguryChoiceManagerPurposeSelectPersonalisedAds            = 16,
    OguryChoiceManagerPurposeCreatePersonalisedContent        = 32,
    OguryChoiceManagerPurposeSelectPersonalisedContent        = 64,
    OguryChoiceManagerPurposeMeasureAdPerformance             = 128,
    OguryChoiceManagerPurposeMeasureContentPerformance        = 256,
    OguryChoiceManagerPurposeMarketResearch                   = 512,
    OguryChoiceManagerPurposeDevelopAndImproveProducts        = 1024
};

/*!
* @typedef OguryChoiceManagerSpecialFeature
* @brief A list of posible Special Features that can be used to check if accepted by the client
*/
typedef NS_ENUM(NSUInteger, OguryChoiceManagerSpecialFeature) {
    OguryChoiceManagerSpecialFeaturePrecicesGeolocation     = 2,
    OguryChoiceManagerSpecialFeatureScanDeviceCharacteriscs = 4
};

/*!
* @brief Completion Block used to pass the answer in Ask and Edit
*/
typedef void (^OguryChoiceManagerCompletionBlock)(NSError * _Nullable error,OguryChoiceManagerAnswer answer);

#endif /* ChoiceManagerConstants_h */
