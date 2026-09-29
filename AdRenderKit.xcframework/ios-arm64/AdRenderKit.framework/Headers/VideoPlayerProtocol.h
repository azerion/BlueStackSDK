//
//  VideoPlayerProtocol.h
//  BlueStackSDK
//
//  Created by Sayed Hasan on 16/2/26.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <AdRenderKit/VideoPlayerDelegate.h>

@class VideoPreloader;

NS_ASSUME_NONNULL_BEGIN

@protocol VideoPlayerProtocol <NSObject>

@property (nonatomic, weak, nullable) id<VideoPlayerDelegate> delegate;
@property (nonatomic, strong, nullable) VideoPreloader *videoPreloader;

- (BOOL)isPlaying;

- (BOOL)isPaused;

- (void)loadWithUrl:(NSURL *)videoUrl;

- (void)cleanup;

- (void)play;

- (void)pause;

- (void)resume;

- (void)toggleMute;

- (UIView *)getView;

- (CGFloat)getVolume;

- (CGFloat)getDuration;

@end

NS_ASSUME_NONNULL_END
