//
//  SCSNetworkInfoProtocol.h
//  SCSCoreKit
//
//  Created by Julien Gomez on 25/04/2022.
//  Copyright © 2022 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Retrieve information about the network access state of the device.
 */
@protocol SCSNetworkInfo <NSObject>

/// The current network status of the data connection.
@property (nonatomic, readonly) SCSNetworkInfoNetworkStatus networkStatus;

/// The type (wifi / data) of data connection currently in use.
@property (nonatomic, readonly) SCSNetworkInfoConnectionType networkType;

/// The type network access technology type.
@property (nonatomic, readonly) SCSNetworkInfoNetworkAccessType networkAccessType;

/// true if the network is reachable, false otherwise.
@property (nonatomic, readonly) BOOL isNetworkReachable;

/// true if the network is reachable using a wifi connection (or equivalent), false otherwise.
@property (nonatomic, readonly) BOOL isReachableOnWiFi;

/// The local IP address of the Wi-Fi network interface (aka 'en0') if available.
///
/// Note: this property will be nil if the Wi-Fi is disabled and will return the LOCAL IP ADDRESS
/// if the Wi-Fi is enabled, not the WAN address!
@property (nonatomic, readonly) NSString *wifiLocalIPAddress;

@end

NS_ASSUME_NONNULL_END
