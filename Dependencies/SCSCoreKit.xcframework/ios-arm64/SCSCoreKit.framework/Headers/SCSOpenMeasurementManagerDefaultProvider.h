//
//  SCSOpenMeasurementManagerDefaultProvider.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 15/01/2019.
//  Copyright © 2019 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <SCSCoreKit/SCSOpenMeasurementManagerProvider.h>

#define kSCSOMIDSDKAPIVersionString     @"{\"v\":\"1.2.0\",\"a\":\"1\"}"

#define kSCSOMIDPartnerName             @"Smartadserver"
#define kSCSOMIDJSLibraryURL            @"https://apps.sascdn.com/sdk/omsdk/1.3.30/omsdk-v1.min.js"

NS_ASSUME_NONNULL_BEGIN

/**
 Default implementation of the SCSOpenMeasurementManagerProvider protocol.
 
 This implementation will be used by the SDK if available but can be excluded from the build without
 causing any issue (if the Open Measurement library causes any issues for instance).
 */
@interface SCSOpenMeasurementManagerDefaultProvider : NSObject <SCSOpenMeasurementManagerProvider>

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
