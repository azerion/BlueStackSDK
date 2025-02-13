//
//  SCSOpenMeasurementManager.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 15/01/2019.
//  Copyright © 2019 Smart AdServer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SCSCoreKit/SCSOpenMeasurementJSLibrary.h>
#import <SCSCoreKit/SCSOpenMeasurementManagerProvider.h>
#import <SCSCoreKit/SCSOpenMeasurementAdSession.h>
#import <SCSCoreKit/SCSOpenMeasurementAdVerificationScript.h>
#import <SCSCoreKit/SCSOpenMeasurementRemoteLoggerProtocol.h>
#import <SCSCoreKit/SCSPixelManager.h>
#import <SCSCoreKit/SCSVASTAdVerification.h>
#import <SCSCoreKit/SCSOpenMeasurementManagerProtocol.h>

// The OM JS Library should be inserted in the HTML header if any.
#define kSCSForceEndOfHTMLInjection NO

NS_ASSUME_NONNULL_BEGIN

/**
 Default SCSOpenMeasurementManager protocol implementation.
 */
@interface SCSOpenMeasurementManager : NSObject <SCSOpenMeasurementManager>

/**
 Initialize a new instance of SCSOpenMeasurementManager.
 
 @param provider An object implementing the SCSOpenMeasurementManagerProvider protocol.
 @param remoteLogger A object implementing the SCSOpenMeasurementRemoteLoggerProtocol protocol if remote logging should be supported, nil otherwise.
 @param pixelManager The pixel manager instance that will be used to send tracking pixels related to verification scripts.
 @return An initialized instance of SCSOpenMeasurementManager
 */
- (instancetype)initWithProvider:(id<SCSOpenMeasurementManagerProvider>)provider jsLibrary:(SCSOpenMeasurementJSLibrary *)jsLibrary remoteLogger:(nullable id<SCSOpenMeasurementRemoteLoggerProtocol>)remoteLogger pixelManager:(SCSPixelManager *)pixelManager;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
