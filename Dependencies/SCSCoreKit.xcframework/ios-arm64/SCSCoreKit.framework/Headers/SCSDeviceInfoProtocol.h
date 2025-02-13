//
//  SCSDeviceInfoProtocol.h
//  SCSCoreKit
//
//  Created by Julien GOMEZ on 25/04/2022.
//  Copyright © 2022 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// Represents the current tracking authorization status.
///
/// @note This enum shares the same underlying values than the Apple's enum but
/// add a new case for devices that run on iOS 13 and lower.
typedef NS_ENUM(NSInteger, SCSDeviceInfoTrackingAuthorizationStatus) {
    /// Not applicable: the OS is too old to retrieve the authorization status.
    SCSDeviceInfoTrackingAuthorizationStatusNotApplicable = -1,
    
    /// Not determined: the app has not requested for tracking yet.
    SCSDeviceInfoTrackingAuthorizationStatusNotDetermined = 0,
    
    /// Restricted.
    SCSDeviceInfoTrackingAuthorizationStatusRestricted,
    
    /// Denied: the app has been denied to track the user.
    SCSDeviceInfoTrackingAuthorizationStatusDenied,
    
    /// Authorized: the app has been authorized to track the user.
    SCSDeviceInfoTrackingAuthorizationStatusAuthorized
};

/**
 Retrieve some informations about the current device.
 */
@protocol SCSDeviceInfo <NSObject>

/// The platform (model name) of the device.
@property (nonatomic, readonly) NSString *platform;

/// The operating system running on the device.
@property (nonatomic, readonly) NSString *systemVersion;

/// true if the device is considered to have low performances.
@property (nonatomic, readonly) BOOL hasLowPerformances;

/// true if the device can play 360° videos.
@property (nonatomic, readonly) BOOL canPlay360Videos;

/// The user agent of the web view.
@property (nonatomic, readonly) NSString *userAgent;

/// The local IP address of the device (Wi-Fi / en0 interface).
///
/// @warning This property does not give your the public IP address of the device!
@property (nonatomic, readonly) NSString *IPAddress;

/// YES if advertising tracking is enabled in the system settings, NO otherwise.
@property (nonatomic, readonly) BOOL advertisingTrackingEnabled;

/// The current tracking authorization status for the device.
@property (nonatomic, readonly) SCSDeviceInfoTrackingAuthorizationStatus trackingAuthorizationStatus;

/// The device system locale.
@property (nonatomic, readonly) NSString *locale;

@end

NS_ASSUME_NONNULL_END
