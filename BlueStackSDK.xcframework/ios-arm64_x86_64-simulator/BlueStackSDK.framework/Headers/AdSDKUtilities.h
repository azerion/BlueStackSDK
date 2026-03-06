//
//  AdSDKUtilities.h
// 
//
//  Created by Hussein Dimessi on 19/10/2017.
//  Copyright © 2017 Bensalah Med Amine. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Preference.h"
@interface AdSDKUtilities : NSObject

+ (NSString*) clearPreference:(Preference *)preference;
+ (NSURL*) getSemanticUrl:(Preference *)preference;
@end
