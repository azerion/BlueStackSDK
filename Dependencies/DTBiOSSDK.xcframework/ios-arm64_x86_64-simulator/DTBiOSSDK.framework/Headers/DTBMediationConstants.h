//
//  DTBMediationConstants.h
//  DTBiOSSDK
//
//  Copyright (c) 2021 Amazon Publisher Services. All rights reserved.

#ifndef DTBMediationConstants_h
#define DTBMediationConstants_h

#define BID_INFO                @"bidInfo"
#define PLACEMENT_HINT          @"pHint"
#define AMAZON_SLOTS            @"amznslots"
#define AMAZON_AD_INFO          @"amazon_ad_info"
#define EVENT_SERVER_PARAMETER  @"event_server_parameter"
#define LOAD_START_TIME         @"load_start"
#define EXPECTED_WIDTH          @"expected_width"
#define EXPECTED_HEIGHT         @"expected_height"
#define SKADNETWORK_PARAMS      @"skadn_params"
#define CLICKTRACKERS_ARRAY     @"clicktrackers"
#define IS_VIDEO                @"isVideo"

/// Sample error codes.
typedef NS_ENUM(NSInteger, DTBAdErrorCode) {
    SampleErrorCodeBadRequest,    ///< Bad request.
    SampleErrorCodeUnknown,       ///< Unknown error.
    SampleErrorCodeNetworkError,  ///< Network error.
    SampleErrorCodeNoInventory,   ///< No inventory.
};


#endif /* DTBMediationConstants_h */
