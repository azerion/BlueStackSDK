//
//  DTBAdErrorInfo.h
//  DTBiOSSDK
//
//  Created by Jammula, Nimitha on 12/16/21.
//  Copyright © 2021 amazon.com. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DTBAdResponse.h"

NS_ASSUME_NONNULL_BEGIN

@class DTBAdLoader;

@interface DTBAdErrorInfo : NSObject

@property DTBAdError dtbAdError;

@property DTBAdLoader * _Nullable dtbAdLoader;

-(DTBAdLoader *_Nullable) getAdLoader;

@end

NS_ASSUME_NONNULL_END
