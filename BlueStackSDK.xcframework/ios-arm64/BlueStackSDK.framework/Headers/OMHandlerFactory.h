//
//  OMHandlerFactory.h
//  BlueStackSDK
//
//  Created by Sayed Hasan on 20/2/26.
//

#import <BlueStackSDK/OMHandler.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OMHandlerFactory : NSObject

- (nonnull OMHandler *)createOMHandlerWithOMScriptUrl:(nonnull NSString *)omScriptUrl;

@end

NS_ASSUME_NONNULL_END
