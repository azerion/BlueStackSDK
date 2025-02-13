//
//  Copyright © 2020-present Ogury. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, OguryCoreErrorType) {
    OguryCoreErrorTypeNoInternetConnection = 0
};

NS_ASSUME_NONNULL_BEGIN

@interface OguryError : NSError

+ (instancetype)createOguryErrorWithCode:(NSInteger)code;

+ (instancetype)createOguryErrorWithCode:(NSInteger)code localizedDescription:(NSString *)localizedDescription;

+ (instancetype)createOguryErrorWithCode:(NSInteger)code localizedDescription:(NSString *)localizedDescription localizedRecoverySuggestion:(NSString *)localizedRecoverySuggestion;

+ (NSString *)getOguryErrorDomain;

+ (instancetype)noInternetConnectionError;

@end

NS_ASSUME_NONNULL_END
