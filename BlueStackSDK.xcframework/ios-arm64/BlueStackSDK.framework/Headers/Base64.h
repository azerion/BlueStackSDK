//
//  Base64.h
//  TestCrypto
//
//  Created by HtrimechMac on 24/02/2020.
//  Copyright © 2020 HtrimechMac. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Base64 : NSObject
+ (NSString *) encodeString: (NSString *) strData;
+ (NSString *) encodeData: (NSData *) objData ;
+ (NSData *) decodeString: (NSString *) strBase64 ;
@end

NS_ASSUME_NONNULL_END
