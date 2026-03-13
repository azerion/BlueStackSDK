//
//  VastVideoConfig.h
//  AdRenderKit
//
//  Created by Sayed Hasan on 3/11/25.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface VastVideoConfig : NSObject

@property(nonatomic) NSURL *vastTagURI;
@property(nonatomic, nullable) NSURL *mediaURL;
@property(nonatomic, nullable) NSURL *clickThroughURL;
@property(nonatomic) NSArray *clickTrackingURLs;
@property(nonatomic) NSArray *errorURLs;
@property(nonatomic) NSArray *impressionURLs;
@property BOOL isVPAID;
@property CGSize videoSize;
@property (nullable) NSURL *companionAdUrl;

/** @name Tracking Events start,firstQuartile, midpoint, thirdQuartile, complete, skip, progress, pause, resume **/

@property(nonatomic) NSArray *startTrackers;
@property(nonatomic) NSArray *firstQuartileTrackers;
@property(nonatomic) NSArray *midpointTrackers;
@property(nonatomic) NSArray *thirdQuartileTrackers;
@property(nonatomic) NSArray *completionTrackers;
@property(nonatomic) NSArray *pauseTrackers;
@property(nonatomic) NSArray *resumeTrackers;
@property(nonatomic) NSArray *skipTrackers;

/** @name Viewability */

@property(nonatomic) NSTimeInterval minimumViewabilityTimeInterval;
@property(nonatomic) NSTimeInterval duration;
@property(nonatomic) double minimumFractionOfVideoVisible;
@property(nonatomic) NSURL *viewabilityTrackingURL;

- (void)appendVideoConfig:(VastVideoConfig *)videoConfig;

+ (NSArray *)vastConfigsWithDictionary:(NSDictionary *)dictionary;

@end

NS_ASSUME_NONNULL_END
