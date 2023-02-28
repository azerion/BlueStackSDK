//
//  SASVideoAd.h
//  SmartAdServer
//
//  Created by Loïc GIRON DIT METAZ on 24/02/2015.
//
//

#import <Foundation/Foundation.h>
#import <SASDisplayKit/SASAd.h>

NS_ASSUME_NONNULL_BEGIN

/**
 A SASNativeVideoAd object represents a native video ad programmed in the ad server.
 */
@interface SASNativeVideoAd : SASAd

/// YES if the video ad should autoplay as soon as it is viewable, NO otherwise.
@property (readonly, assign) BOOL autoplay;

/// The URL of the image that will be used as poster image for the video ad if any, nil otherwise.
@property (readonly, strong, nullable) NSURL *posterImageUrl;

/// The URL of the image that will be used as background image in interstitial views during ad playback if any, nil otherwise.
@property (readonly, strong, nullable) NSURL *backgroundImageURL;

@end

NS_ASSUME_NONNULL_END
