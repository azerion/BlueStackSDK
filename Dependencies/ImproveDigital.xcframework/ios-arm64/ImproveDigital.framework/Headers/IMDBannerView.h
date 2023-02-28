//
//  IMDBannerView.h
//  ImproveDigital
//
//  Created by Nagib Bin Azad on 7/2/21.
//  Copyright © 2021 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <ImproveDigital/IMDAdSize.h>
#import <ImproveDigital/IMDBannerViewDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@interface IMDBannerView : UIView

@property (nonatomic, assign) IMDAdSize adSize;
@property (nonatomic, strong) NSString* _Nonnull placementId;
@property (nonatomic, assign) id<IMDBannerViewDelegate> _Nullable delegate;

-(instancetype)initWithPlacementId:(NSString* _Nonnull)placementId withAdSize:(IMDAdSize)adSize;
-(instancetype)initWithPlacementId:(NSString* _Nonnull)placementId
                        withAdSize:(IMDAdSize)adSize
                      withDelegate:(id<IMDBannerViewDelegate> _Nullable)delegate;
- (void)loadAd;
- (void)startAutoRefresh;
- (void)stopAutoRefresh;

@end

NS_ASSUME_NONNULL_END
