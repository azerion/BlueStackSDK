//
//  SASBidderInterstitialAdapterDelegate.h
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

 Use this protocol to provide information about the ad loading status or events of bidder SDK interstitials to the Smart Display SDK.
*/
@protocol SASInterstitialBidderAdapterDelegate <NSObject>
@required

/**
 Notify the Smart Display SDK that an interstitial ad has been loaded successfully.
 
 @param adapter The bidder adapter.
 */
- (void)interstitialBidderAdapterDidLoad:(id<SASBidderAdapterProtocol>)adapter;

/**
 Notify the Smart Display SDK that an interstitial ad has failed to load.
 
 @param adapter The bidder adapter.
 @param error The error returned by the mediation SDK.
 */
- (void)interstitialBidderAdapter:(id<SASBidderAdapterProtocol>)adapter didFailToLoadWithError:(NSError *)error;

/**
 Notify the Smart Display SDK that an interstitial ad has been displayed successfully.
 
 @warning You must call this method as soon as your ad is shown, no impression will be logged on Smart side if you don't.
 
 @param adapter The bidder adapter.
 */
- (void)interstitialBidderAdapterDidShow:(id<SASBidderAdapterProtocol>)adapter;

/**
 Notify the Smart Display SDK that an interstitial ad has failed to show.
 
 @note Since this error will always happen after a successful loading, calling this delegate will simply forward the error to the app.
 
 @param adapter The bidder adapter.
 @param error The error returned by the bidder SDK.
 */
- (void)interstitialBidderAdapter:(id<SASBidderAdapterProtocol>)adapter didFailToShowWithError:(NSError *)error;

/**
 Notify the Smart Display SDK that an interstitial ad will present a modal view, for instance after a click.
 
 @param adapter The bidder adapter.
 */
- (void)interstitialBidderAdapterWillPresentModalView:(id<SASBidderAdapterProtocol>)adapter;

/**
 Notify the Smart Display SDK that an interstitial ad will dismiss a modal view, for instance a post click modal view that was open before.
 
 @param adapter The bidder adapter.
 */
- (void)interstitialBidderAdapterWillDismissModalView:(id<SASBidderAdapterProtocol>)adapter;

/**
 Notify the Smart Display SDK that an interstitial has sent a click event.
 
 @param adapter The bidder adapter.
 */
- (void)interstitialBidderAdapterDidReceiveAdClickedEvent:(id<SASBidderAdapterProtocol>)adapter;

/**
 Notify the Smart Display SDK that the currently displayed interstitial has been closed.
 
 @param adapter The bidder adapter.
 */
- (void)interstitialBidderAdapterDidClose:(id<SASBidderAdapterProtocol>)adapter;

@end

NS_ASSUME_NONNULL_END

