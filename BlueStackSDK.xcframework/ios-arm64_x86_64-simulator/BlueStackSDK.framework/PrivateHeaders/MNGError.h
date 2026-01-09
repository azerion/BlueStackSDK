//
//  MNGError.h
//  BlueStackSDK
//
//  Created by Nagib Bin Azad on 17/6/25.
//

#import <Foundation/Foundation.h>


FOUNDATION_EXPORT NSErrorDomain const _Nonnull MNGErrorDomain;

typedef NS_ERROR_ENUM(MNGErrorDomain, MNGError) {
    MNGErrorAdExpired = 1000,
    MNGErrorAdNotLoaded = 1001,
    MNGErrorInvalidBiddingResponse = 1002
};
