//
//  SCSOpenMeasurementAdSession.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 15/01/2019.
//  Copyright © 2019 Smart AdServer. All rights reserved.
//

#import <SCSCoreKit/SCSOpenMeasurementVASTProperties.h>

NS_ASSUME_NONNULL_BEGIN

/// List of allowed friendly obstruction purposes.
typedef NS_ENUM(NSUInteger, SCSOpenMeasurementFriendlyObstructionType) {
    
    /// The friendly obstruction relates to interacting with a video (such as play/pause buttons).
    SCSOpenMeasurementFriendlyObstructionTypeMediaControls,
    
    /// The friendly obstruction relates to closing an ad (such as a close button).
    SCSOpenMeasurementFriendlyObstructionTypeCloseAd,
    
    /// The friendly obstruction is not visibly obstructing the ad but may seem so due to technical limitations.
    SCSOpenMeasurementFriendlyObstructionTypeNotVisible,
    
    /// The friendly obstruction is obstructing for any purpose not already described.
    SCSOpenMeasurementFriendlyObstructionTypeOther
    
};

/**
 Protocol that should be implemented by objects representing Open Measurement ad sessions.
 */
@protocol SCSOpenMeasurementAdSession <NSObject>

#pragma mark - Properties

/// The main ad view tracked by the Open Measurement session.
@property (nonatomic, nullable) UIView *mainAdView;

#pragma mark - Session lifecycle

/**
 Start the session.
 
 @warning This method should be called only once.
 */
- (void)start;

/**
 Finish the session.
 
 @warning This method should be called only once.
 */
- (void)finish;

/**
 Signal that the creative has been loaded for this session.
 */
- (void)loadedOccurred;

/**
 Signal that the creative has been loaded for this session.
 
 @param vastProperties An OM VAST properties object.
 */
- (void)loadedOccurredWithVASTProperties:(SCSOpenMeasurementVASTProperties *)vastProperties;

/**
 Log an impression for this session.
 */
- (void)impressionOccurred;

#pragma mark - Friendly obstruction

/**
 Add a new friendly obstruction.
 
 @param friendlyObstruction A Smart view that might cover the web view and therefore should be ignored by the Open Measurement SDK.
 @param purpose A friendly obstruction purposes.
 @param detailedReason A NON EMPTY string explaining what is obstructing the view ('close button', 'mute button, etc…).
 */
- (void)addFriendlyObstruction:(UIView *)friendlyObstruction purpose:(SCSOpenMeasurementFriendlyObstructionType)purpose detailedReason:(NSString *)detailedReason;

/**
 Remove an existing friendly obstruction.
 
 @param view A Smart view that will not cover the web view anymore and therefore should not be ignored by the Open Measurement SDK.
 */
- (void)removeFriendlyObstruction:(UIView *)view;

/**
 Remove all existing friendly obstructions.
 */
- (void)removeAllFriendlyObstructions;

#pragma mark - Video events

/**
 Log a video event start.
 
 @param duration The duration of the video.
 @param videoPlayerVolume The volume of the video player.
 */
- (void)videoEventStartOccurredWithDuration:(NSTimeInterval)duration videoPlayerVolume:(float)videoPlayerVolume;

/**
 Log a video event first quartile.
 */
- (void)videoEventFirstQuartileOccurred;

/**
 Log a video event midpoint.
 */
- (void)videoEventMidpointOccurred;

/**
 Log a video event third quartile.
 */
- (void)videoEventThirdQuartileOccurred;

/**
 Log a video event complete.
 */
- (void)videoEventCompleteOccurred;

/**
 Log a video event pause (only for user interaction).
 */
- (void)videoEventPauseOccurred;

/**
 Log a video event resume (only for user interaction).
 */
- (void)videoEventResumeOccurred;

/**
 Log a video event volume change.
 */
- (void)videoEventVolumeChangeOccurred:(float)videoPlayerVolume;

/**
 Log a video event skipped.
 */
- (void)videoEventSkipped;

// NON IMPLEMENTED EVENTS
// - bufferStart [playback paused due to buffering]
// - bufferEnd [playback resumes after buffering]

#pragma mark - State changes events

/**
 Log a video event enter fullscreen.
 */
- (void)videoEventEnterFullscreen;

/**
 Log a video event exit fullscreen.
 */
- (void)videoEventExitFullscreen;

#pragma mark - Interaction events

/**
 Log a user interaction video event.
 
 @note This event should be sent when the video is clicked by the user for a native video format only!
 */
- (void)videoEventUserInteraction;

@end

NS_ASSUME_NONNULL_END
