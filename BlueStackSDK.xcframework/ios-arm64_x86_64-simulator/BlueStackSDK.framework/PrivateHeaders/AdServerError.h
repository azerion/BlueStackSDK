//
//  AdServerError.h
//
//
//  Created by Nagib Bin Azad on 17/6/25.
//

#import <Foundation/Foundation.h>


FOUNDATION_EXPORT NSErrorDomain const _Nonnull AdServerErrorDomain;

typedef NS_ERROR_ENUM(AdServerErrorDomain, AdServerError) {
    AdServerErrorAdExpired = 1000,
    AdServerErrorAdNotLoaded = 1001,
    AdServerErrorInvalidBiddingResponse = 1002
};
