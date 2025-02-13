//
//  SASFrameworkInfo.h
//  SASDisplayKit
//
//  Created by Loïc GIRON DIT METAZ on 11/10/2018.
//  Copyright © 2018 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Retrieve some informations about the SASDisplayKit framework.
 */
@interface SASFrameworkInfo : NSObject

/// The shared instance of the SASFrameworkInfo object.
@property (class, nonatomic, readonly) SASFrameworkInfo *sharedInstance NS_SWIFT_NAME(shared);

/// The framework's name.
@property (nonatomic, readonly) NSString *frameworkName;

/// The framework's marketing name (the name used in Cocoapods for instance).
@property (nonatomic, readonly) NSString *frameworkMarketingName;

/// The framework's bundle identifier.
@property (nonatomic, readonly) NSString *frameworkBundleIdentifier;

/// The framework's version string.
@property (nonatomic, readonly) NSString *frameworkVersionString;

@end

NS_ASSUME_NONNULL_END
