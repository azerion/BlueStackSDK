//
//  AdapterInitConfig.h
//  BlueStackSDK
//
//  Created by Nagib Bin Azad on 31/5/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AdapterInitConfig : NSObject

@property (nonatomic, strong, nonnull) NSString *name;
@property (nonatomic, strong, nonnull) NSDictionary *params;

+ (instancetype)initWithName:(nonnull NSString *)name params:(nonnull NSDictionary *)params;

@end

NS_ASSUME_NONNULL_END
