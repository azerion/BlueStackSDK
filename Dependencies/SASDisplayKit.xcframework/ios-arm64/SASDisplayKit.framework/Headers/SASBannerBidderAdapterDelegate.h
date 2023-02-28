//
//  SASBidderBannerAdapterDelegate.h
//  SASDisplayKit
//
//  Created by Thomas Geley on 20/04/2020.
//  Copyright © 2020 Smart AdServer. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SASBidderAdapter;

/**
 Protocol implemented by SASBidderAdapter's delegate.

 Use this protocol to provide information about the ad loading status or events of bidder SDK banners to the Smart Display SDK.
*/
@protocol SASBannerBidderAdapterDelegate <NSObject>
@required

/**
 Notify the Smart Display SDK that a banner ad has been loaded successfully.
 
 @param adapter The bidder adapter.
 @param bannerView The banner view that has been loaded.
 */
- (void)bannerBidderAdapter:(id<SASBidderAdapterProtocol>)adapter didLoadBanner:(UIView *)bannerView;

/**
 Notify the Smart Display SDK that a banner ad has failed to load.
 
 @param adapter The bidder adapter.
 @param error The error returned by the bidder SDK.
 */
- (void)bannerBidderAdapter:(id<SASBidderAdapterProtocol>)adapter didFailToLoadWithError:(NSError *)error;

/**
 Notify the Smart Display SDK that a banner ad will present a modal view, for instance after a click.
 
 @param adapter The bidder adapter.
 */
- (void)bannerBidderAdapterWillPresentModalView:(id<SASBidderAdapterProtocol>)adapter;

/**
 Notify the Smart Display SDK that a banner ad will dismiss a modal view, for instance a post click modal view that was open before.
 
 @param adapter The bidder adapter.
 */
- (void)bannerBidderAdapterWillDismissModalView:(id<SASBidderAdapterProtocol>)adapter;

/**
 Notify the Smart Display SDK that a banner has sent a click event.
 
 @param adapter The bidder adapter.
 */
- (void)bannerBidderAdapterDidReceiveAdClickedEvent:(id<SASBidderAdapterProtocol>)adapter;

@end

NS_ASSUME_NONNULL_END
