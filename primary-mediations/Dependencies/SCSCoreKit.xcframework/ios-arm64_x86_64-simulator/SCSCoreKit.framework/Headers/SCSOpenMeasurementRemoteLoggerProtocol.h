//
//  SCSOpenMeasurementRemoteLoggerProtocol.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 30/07/2020.
//  Copyright © 2020 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// The type of implementation for the current open measurement session.
typedef NS_ENUM(NSInteger, SCSOpenMeasurementLogNodeImplementationType) {
    
    /// Native implementation type.
    SCSOpenMeasurementLogNodeImplementationTypeNative = 0,
    
    /// WebView implementation type.
    SCSOpenMeasurementLogNodeImplementationTypeWebView = 1
    
};

/**
 Public interface handling the open measurement logging.
 */
@protocol SCSOpenMeasurementRemoteLoggerProtocol <NSObject>

/**
 Called when the remote logger should log open measurement informations.
 
 @param vendorName The vendor name.
 @param JSLibraryURLString The URL of the Javascript library.
 @param implementationType The type of implementation for the current session.
 */
- (void)logOMInfoWithVendorName:(nullable NSString *)vendorName
             JSLibraryURLString:(NSString *)JSLibraryURLString
             implementationType:(SCSOpenMeasurementLogNodeImplementationType)implementationType;

/**
 Called when the remote logger should log an open measurement API error.
 
 @param error The error that should be logged by the remote logger.
 @param vendorName The vendor name.
 @param JSLibraryURLString The URL of the Javascript library.
 @param implementationType The type of implementation for the current session.
 */
- (void)logOMAPIError:(nullable NSError *)error
           vendorName:(nullable NSString *)vendorName
   JSLibraryURLString:(NSString *)JSLibraryURLString
   implementationType:(SCSOpenMeasurementLogNodeImplementationType)implementationType;

@end

NS_ASSUME_NONNULL_END
