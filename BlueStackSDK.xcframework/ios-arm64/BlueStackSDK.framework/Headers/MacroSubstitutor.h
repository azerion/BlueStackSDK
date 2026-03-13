//
//  MacroSubstitutor.h
//
//
//  Created by Sayed Hasan on 30/10/25.
//

#import <Foundation/Foundation.h>
#import "AdRequest.h"

@protocol MacroApplier;

NS_ASSUME_NONNULL_BEGIN

@interface MacroSubstitutor : NSObject<MacroApplier>

-(instancetype) initWithAdRequest:(AdRequest *)request replacements:(NSDictionary *)replacements;
- (NSString *_Nonnull)applyTo:(NSString *_Nonnull)inputString;

@end

NS_ASSUME_NONNULL_END
