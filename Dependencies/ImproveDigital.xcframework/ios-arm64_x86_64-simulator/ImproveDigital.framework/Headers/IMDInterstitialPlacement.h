//
//  IMDInterstitialPlacement.h
//  ImproveDigital
//
//  Created by Nagib Bin Azad on 10/27/22.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, IMDInterstitialPlacementType) {
    IMDInterstitialPlacementType_STATIC,
    IMDInterstitialPlacementType_VAST
};

NS_ASSUME_NONNULL_BEGIN

@interface IMDInterstitialPlacement : NSObject

@property (strong, nonatomic) NSString *placementId;
@property (assign, nonatomic) IMDInterstitialPlacementType type;

- (instancetype)initWithPlacementId:(NSString *)placementId withType:(IMDInterstitialPlacementType)type;

@end

NS_ASSUME_NONNULL_END
