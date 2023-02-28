//
//  ImproveDigital.h
//  ImproveDigital
//
//  Created by Nagib Bin Azad on 10/18/22.
//

#import <Foundation/Foundation.h>
#import <ImproveDigital/IMDError.h>
#import <ImproveDigital/IMDSettings.h>
#import <ImproveDigital/IMDBannerView.h>
#import <ImproveDigital/IMDInterstitialAd.h>
#import <ImproveDigital/IMDRewardedVideoAd.h>

//! Project version number for ImproveDigital.
FOUNDATION_EXPORT double ImproveDigitalVersionNumber;

//! Project version string for ImproveDigital.
FOUNDATION_EXPORT const unsigned char ImproveDigitalVersionString[];


@interface ImproveDigital : NSObject

+ (void)initializeWithSettings:(IMDSettings *)settings;

@end

