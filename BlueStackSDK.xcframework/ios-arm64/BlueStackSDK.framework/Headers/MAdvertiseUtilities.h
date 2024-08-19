//
//  Utilities.h
//  MngAds
//
//  Created by Hussein Dimessi on 19/10/2017.
//  Copyright © 2017 Bensalah Med Amine. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MNGPreference.h"
@interface MAdvertiseUtilities : NSObject

+ (NSString*) clearPreference:(MNGPreference *)preference;
+ (NSURL*) getSemanticUrl:(MNGPreference *)preference;
@end
