//
//  SCSOpenMeasurementVASTProperties.h
//  SCSCoreKit
//
//  Created by Loïc GIRON DIT METAZ on 12/02/2019.
//  Copyright © 2019 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Hold some information about the video session currently playing.
 */
@interface SCSOpenMeasurementVASTProperties : NSObject

/// The skip offset if the content is skippable, -1 otherwise.
@property (nonatomic, readonly) NSTimeInterval skipOffset;

/// YES if the video content is autoplayed, NO otherwise.
@property (nonatomic, readonly, getter = isAutoPlay) BOOL autoPlay;

/**
 Initialize an instance of SCSOpenMeasurementVASTProperties.
 
 @param skipOffset The skip offset of the video content. If the content is not skippable, use the other initializer.
 @param autoPlay YES if the video content is autoplayed, NO otherwise.
 @return An initialized instance of SCSOpenMeasurementVASTProperties.
 */
- (instancetype)initWithSkipOffset:(NSTimeInterval)skipOffset autoPlay:(BOOL)autoPlay;

/**
 Initialize an instance of SCSOpenMeasurementVASTProperties.
 
 @param autoPlay YES if the video content is autoplayed, NO otherwise.
 @return An initialized instance of SCSOpenMeasurementVASTProperties.
 */
- (instancetype)initWithAutoPlay:(BOOL)autoPlay;

- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
