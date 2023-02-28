//
//  DTBAdNetworkInfo.h
//  DTBiOSSDK
//
//  Created by Jammula, Nimitha on 1/4/22.
//  Copyright © 2022 amazon.com. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum{
    DTBADNETWORK_GOOGLE_AD_MANAGER,
    DTBADNETWORK_MOPUB_AD_SERVER,
    DTBADNETWORK_ADMOB,
    DTBADNETWORK_AD_GENERATION,
    DTBADNETWORK_IRON_SOURCE,
    DTBADNETWORK_MAX,
    DTBADNETWORK_NIMBUS,
    DTBADNETWORK_OTHER
} DTBAdNetwork;

extern NSString * _Nonnull  const FormatType_toString[];

NS_ASSUME_NONNULL_BEGIN

@interface DTBAdNetworkInfo : NSObject

/**
 An ad network name string.
 */
@property NSString *adNetworkName;

/**
 An ad network property dictionary.
 */
@property NSMutableDictionary *adNetworkProperties;

/**
  @param adNetworkName An ad network name enum.
 */
- (instancetype)initWithNetworkName:(DTBAdNetwork)adNetworkName;

/**
  @return An ad network name string.
 */
- (NSString *)getAdNetworkName;

/**
 Set the adNetworkValue in the adNetworkProperties key.
 @param adNetworkProperties A non-null ad network property string key.
 @param adNetworkValue A non-null string value to be set.
 */
- (DTBAdNetworkInfo *)setAdNetworkProperties:(NSString *)adNetworkProperties
                              adNetworkValue:(NSString *)adNetworkValue;

/**
 @param adNetworkProperties An ad network property string key.
 @return A string value of the adNetworkProperties key.
 */
- (NSString * _Nullable)getAdNetworkProperties:(NSString *)adNetworkProperties;

@end

NS_ASSUME_NONNULL_END
