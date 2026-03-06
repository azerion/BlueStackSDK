//
//  VideoPlayerDelegate.h
//  BlueStackSDK
//
//  Created by Sayed Hasan on 16/2/26.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol VideoPlayerDelegate <NSObject>

- (void)videoPlayerDidBecomeReady;

- (void)videoPlayerDidPause;

- (void)videoPlayerDidResume;

- (void)videoPlayerDidUpdateProgressWithPercentage:(CGFloat)percentage;

- (void)videoPlayerDidStartBuffering;

- (void)videoPlayerDidFinishBuffering;

- (void)videoPlayerDidChangeVolume:(CGFloat)volume
                           isMuted:(BOOL)isMuted;

- (void)videoPlayerDidClick;

@end

NS_ASSUME_NONNULL_END
