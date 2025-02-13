//
//  SCSFrameworkInfoProtocol.h
//  SCSCoreKit
//
//  Created by Julien Gomez on 02/05/2022.
//  Copyright © 2022 Smart AdServer. All rights reserved.
//

NS_ASSUME_NONNULL_BEGIN

/**
 Retrieve some informations about the SCSCoreKit framework.
 */
@protocol SCSFrameworkInfo <NSObject>

/// The framework's name.
@property (nonatomic, readonly) NSString *frameworkName;

/// The framework's marketing name (the name used in Cocoapods for instance).
@property (nonatomic, readonly) NSString *frameworkMarketingName;

/// The framework's bundle identifier.
@property (nonatomic, readonly) NSString *frameworkBundleIdentifier;

/// The framework's version string.
@property (nonatomic, readonly) NSString *frameworkVersionString;

/// true if the framework has been built in DEBUG, false if the framework has been built in RELEASE.
@property (nonatomic, readonly) BOOL frameworkBuiltInDebug;

/// The framework's revision string.
@property (nonatomic, readonly) NSString *frameworkRevisionString;

@end

NS_ASSUME_NONNULL_END
