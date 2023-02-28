//
//  SCSAppInfoProtocol.h
//  SCSCoreKit
//
//  Created by Julien GOMEZ on 25/04/2022.
//  Copyright © 2022 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Retrieve information about the app currently running the SDK.
 */
@protocol SCSAppInfo <NSObject>

/// The application name.
@property (nonatomic, readonly) NSString *appName;

/// The application version.
@property (nonatomic, readonly) NSString *appVersion;

/// The application bundle identifier.
@property (nonatomic, readonly) NSString *appBundleIdentifier;

@end

NS_ASSUME_NONNULL_END
