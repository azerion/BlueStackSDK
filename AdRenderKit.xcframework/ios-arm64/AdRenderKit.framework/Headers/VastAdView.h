//
//  VastAdView.h
//  AdRenderKit
//
//  Created by Sayed Hasan on 16/2/26.
//

#import <AVFoundation/AVFoundation.h>
#import <AdRenderKit/VastVideoConfig.h>
#import <AdRenderKit/VideoPlayerDelegate.h>
#import <AdRenderKit/VideoPlayerProtocol.h>
#import <MobileAdsUtilities/MobileAdsUtilities-Swift.h>
#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

NS_ASSUME_NONNULL_BEGIN

@class VideoSettings;
@class VideoPreloader;

@interface VastAdView : UIView <VideoPlayerProtocol>

@property (nonatomic, weak, nullable) id<VideoPlayerDelegate> delegate;
@property (nonatomic, strong, nullable) NSURL *companionAdUrl;
@property (nonatomic, strong, nullable) VideoPreloader *videoPreloader;

- (instancetype)initWithSettings:(VideoSettings *)settings andHttpClient:(id<ServerConnectionProtocol>)httpClient;

- (instancetype)initWithScreenShotUrl:(nullable NSString *)screenshotUrl
                          andSettings:(VideoSettings *)settings
                        andHttpClient:(id<ServerConnectionProtocol>)httpClient;

@end

NS_ASSUME_NONNULL_END
