//
//  OMHandler.h
//
//  Created by Sayed Hasan on 1/12/25.
//

#import <AdRenderKit/AdRenderKit-Swift.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIView.h>

NS_ASSUME_NONNULL_BEGIN

@interface OMHandler : NSObject <OMStaticAd>

- (instancetype)initWithOMScripts:(NSString *)omScripts
             omverificationscript:(nullable NSString *)omverificationscript
                        vendorKey:(nullable NSString *)vendorKey
                       parameters:(nullable NSString *)parameters;

@end

NS_ASSUME_NONNULL_END
