//
//  InfeedFrame.h
// 
//
//  Created by HsanAnypliMacbook on 8/20/19.
//  Copyright © 2019 . All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
NS_ASSUME_NONNULL_BEGIN
typedef enum  {
    INFEED_RATIO_16_9 ,
    INFEED_RATIO_4_3 ,
} InfeedRatio;

@interface InfeedFrame : NSObject
- (id)initWithWidthDP:(CGFloat)widthDP andInfeedRatio:(InfeedRatio)infeedRatio ;
-(CGRect)createFrameInfeed;


@end

NS_ASSUME_NONNULL_END
