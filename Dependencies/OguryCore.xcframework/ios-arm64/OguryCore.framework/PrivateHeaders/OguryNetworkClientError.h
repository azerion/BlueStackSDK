//
//  Copyright © 10/11/2020-present Ogury. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OguryNetworkClientError : NSObject

#pragma mark - Constants

typedef NS_ENUM(NSInteger, OguryNetworkClientErrorType) {
    OguryNetworkClientErrorTypeUnknown = 100,
    OguryNetworkClientErrorTypeInvalidURL = 101,
    OguryNetworkClientErrorTypeEmptyResponse = 102,
    OguryNetworkClientErrorTypeClientError = 103,
    OguryNetworkClientErrorTypeServerError = 104,
    OguryNetworkClientErrorTypeNotYetImplemented = 199
};

#pragma mark - Initialization

+ (NSError *)errorWithType:(OguryNetworkClientErrorType)errorType;

@end

NS_ASSUME_NONNULL_END
