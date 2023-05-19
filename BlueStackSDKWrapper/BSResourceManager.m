//
//  BSResourceManager.m
//  
//
//  Created by Nagib Bin Azad on 19/5/23.
//

#import "BSResourceManager.h"

@implementation BSResourceManager

static NSURL *BSResourceBundleURL;

+ (void)initialize
{
    [super initialize];
    
    BSResourceBundleURL = [SWIFTPM_MODULE_BUNDLE URLForResource: @"BlueStackSDKResources" withExtension: @"bundle"];
    return self;
}

+ (NSURL *)resourceBundleURL
{
    return BSResourceBundleURL;
}

@end
