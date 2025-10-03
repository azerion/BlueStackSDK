//
//  ShakeDetector.h
//  MngAds
//
//  Created by MacBook Pro on 02/01/2017.
//  Copyright © 2017 Bensalah Med Amine. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol ShakeDetectorDelegate;

@interface ShakeDetector : NSObject

+(ShakeDetector*)sharedDetector;

@property (nonatomic, weak) id<ShakeDetectorDelegate> delegate;
@property (nonatomic, strong) NSDate *d;

-(void)startMotionDetection;

@end

@protocol ShakeDetectorDelegate <NSObject>
@required
-(void)shakeDetectorDidShake:(ShakeDetector*)detector;
-(BOOL)shakeDetectorShouldShake:(ShakeDetector*)detector;

@end
