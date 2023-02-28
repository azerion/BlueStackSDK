//
//  ChoiceManager.h
//  OguryChoiceManager
//
//  Copyright © 2020 Ogury Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AdSupport/AdSupport.h>
#import "OguryChoiceManagerConstants.h"
#import "OguryChoiceManagerTCFV2.h"
#import "OguryChoiceManagerExternal.h"
#import "OguryChoiceManagerConfig.h"
#import "OguryChoiceManagerCCPAV1.h"
#import "OGYConstants.h"

NS_ASSUME_NONNULL_BEGIN

/*!
* @brief Ogury Choice Manager handles user consent collection and storage for all your vendors, with a simple integration, ensuring compliance with the GDPR regulation. Your users are shown a single consent notice giving them the choice of the data they want to share, if any.
* @discussion For more informations checkout : https://docs.ogury.co/
*/
@interface OguryChoiceManager : NSObject
/*!
 @brief Shared instance that has to be used to call all the methods from Ogury Choice Manager
*/
+ (OguryChoiceManager*)sharedManager;

/*!
 @brief Object that has to be used to call methods related to TCF V2
*/
@property (nonatomic,strong,readonly) OguryChoiceManagerTCFV2 *tcfV2;

/*!
 @brief Object that has to be used to call methods related to CCPA
*/
@property (nonatomic,strong,readonly) OguryChoiceManagerCCPAV1  *ccpaV1;


/*!
 
* @brief In order to use OguryChoiceManager you have to setup the SDK first
* @param assetKey the Asset Key of your application.
* @discussion This method must be called before any other Choice Manager method. We recommend to call setup in AppDelgeate class, function didFinishLaunchingWithOptions before starting any UIViewController.
*/
- (void)setupWithAssetKey:(NSString *)assetKey __deprecated_msg("Use Ogury.shared().start() instead.");

/*!
* @brief In order to use OguryChoiceManager you have to setup the SDK first
* @param assetKey the Asset Key of your application.
* @param config an OguryChoiceManagerConfig object, needed to pass versions of frameworks that should be used in SDK.
* @discussion This method must be called before any other Choice Manager method. We recommend to call setup in AppDelgeate class, function didFinishLaunchingWithOptions before starting any UIViewController.
*/
- (void)setupWithAssetKey:(NSString *)assetKey andConfig:(OguryChoiceManagerConfig *)config __deprecated_msg("Use Ogury.shared().start() instead. Call OguryChoiceManager.updateConfig() if the provided config is not OguryChoiceManagerConfig.defaultConfiguration().");

/*!
* @brief Update the current OguryChoiceManagerConfig
* @discussion This method must be used only before calling ask/edit functions.
* @param config a OguryChoiceManagerConfig object, needed to pass versions of frameworks that should be used in SDK.
*/
- (void)updateConfig:(OguryChoiceManagerConfig *)config;

/*!
* @brief To collect the user consent for the all registered vendors, call the ask method in the viewDidLoad of your ViewController.
* @discussion This method displays a consent notice allowing the user to choose with which vendors and purposes they agree to share data. This notice is only displayed when there is no existing consent status for this user. Otherwise the ask method synchronizes the consent signal and makes it available through the SDK methods.
* @param viewController the current ViewController.
* @param completionBlock to listen to changes of the consent signal. This completion block provides two parameters : response and error
*/
- (void)askWithViewController:(UIViewController *)viewController andCompletionBlock:(OguryChoiceManagerCompletionBlock)completionBlock;

/*!
* @brief The edit method forces the display of the consent notice and let users update their choices.
* @discussion As per the GDPR regulation, publishers need to ensure the users can access and edit their consent choices through their application at any time.
* @param viewController the current ViewController
* @param completionBlock a completionBlock to listen to changes of the consent signal. This completion block provides two parameters : response and error
*/
- (void)editWithViewController:(UIViewController *)viewController andCompletionBlock:(OguryChoiceManagerCompletionBlock)completionBlock;

/*!
* @brief Must be called to check if the user has paid for the ad-free experience before starting vendors' SDKs
* @discussion You do not need to change your implementation of ask and edit methods to display the consent notice. The consent notice will be adapted once you activate the feature in the Ogury Dashboard, in the Consent settings of the Asset.
* @warining We recommend to use this method only in the completion block of the ask and edit methods to get the updated value of the consent signal.
* @return  true if the user paid or false if not
*/
- (BOOL)hasPaid;

/*!
* @brief Check the availability of the edit method
* @discussion The edit option might not be available and then calling the edit method will return an error.
* @warining We recommend to use this method only in the completion block of the ask and edit methods to get the updated value of the consent signal.
* @return true if edit is available or false if not
*/
- (BOOL)editAvailable;

/*!
* @brief To check if the GDPR applies in the region of the user
* @warining We recommend to use this method only in the completion block of the ask and edit methods to get the updated value of the consent signal.
* @return true if GDPR is applies or false if not
*/
- (BOOL)gdprApplies;

/*!
* @brief To check if the CCPA applies in the region of the user
* @warining We recommend to use this method only in the completion block of the ask and edit methods to get the updated value of the consent signal.
* @return true if CCPA is applies or false if not
*/
- (BOOL)ccpaApplies;

/*!
* @brief To check the current SDK Version
* @return the current String SDK version
*/
- (NSString *)consentSDKVersion __deprecated_msg("consentSDKVersion is deprecated. Use Ogury.shared().getSdkVersion() to get the version of the Ogury SDK.");

/*!
* @brief Give users functionality that restores their purchases in your app, to maintain access to purchased content.
* @discussion Posibility to restore restorable purchase is mandatory if you use Fair Choice functionality or other types or In-App Purchase, please refer to apple documentation if you need more info on this.
*/
- (void)restorePurchases;

@end


NS_ASSUME_NONNULL_END
