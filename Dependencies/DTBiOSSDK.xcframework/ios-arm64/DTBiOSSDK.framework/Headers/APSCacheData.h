//
//  APSCacheData.h
//  DTBiOSSDK
//
//  Copyright © 2021 amazon.com. All rights reserved.
//

#ifndef APSCacheData_h
#define APSCacheData_h

#define DEFAULT_ADMOB_AUTO_REFRESH_TIME_IN_SEC 29

#import "DTBAdLoader.h"
#import "DTBAdResponse.h"

@interface APSCacheData : NSObject

@property (nonatomic) DTBAdLoader *adLoaderReq;
@property (nonatomic) DTBAdResponse *adResponse;
@property (nonatomic) NSNumber *timestamp;
@property (nonatomic) NSString *requestId;
@property (nonatomic) NSString *serverParameter;
@property (nonatomic) id request;

- (id) initWithRequestId:(NSString *)requestId adLoaderReq:(DTBAdLoader *)adLoaderReq;

@end

#endif /* APSCacheData_h */
