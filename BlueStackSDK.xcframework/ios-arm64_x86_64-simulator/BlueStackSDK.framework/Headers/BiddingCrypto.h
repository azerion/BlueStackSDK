//
//  BiddingCrypto.h
// 
//
//  Created by HtrimechMac on 24/02/2020.
//  Copyright © 2020 . All rights reserved.
//

#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN

@interface BiddingCrypto : NSObject


@property (nonatomic, strong) NSData *eKey;
@property (nonatomic, strong) NSData *iKey;

- (id)initWithiKey:(NSString *)iKey andeKey:(NSString *)eKey;
- (NSString *)encryptPriceWithPrice:(double)price andIv:(NSString *)iv;
- (double)decryptPriceWithEncodedPrice:(NSString *)encodedPriceString andIv:(NSString *)iv;
- (NSString *) encryptString:(NSString *)string withIv:(NSString *)iv;
- (NSString *) decryptString:(NSString *)encodedString;

@end

NS_ASSUME_NONNULL_END
