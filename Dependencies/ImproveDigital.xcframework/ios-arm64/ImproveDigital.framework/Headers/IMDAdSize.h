//
//  IMDAdSize.h
//  ImproveDigital
//
//  Created by Nagib Bin Azad on 3/25/22.
//  Copyright © 2022 Azerion. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

#if __has_attribute(objc_boxable)
#define IMD_BOXABLE __attribute__((objc_boxable))
#else
#error "Use latest Xcode version."
#endif

#if defined(__cplusplus)
#define IMD_EXTERN extern "C" __attribute__((visibility("default")))
#else
#define IMD_EXTERN extern __attribute__((visibility("default")))
#endif  // defined(__cplusplus)

typedef struct IMD_BOXABLE IMDAdSize IMDAdSize;

struct IMD_BOXABLE IMDAdSize {
    CGSize size;
};

/// 320x50
IMD_EXTERN IMDAdSize const kIMDSizeBanner;
/// 320x100
IMD_EXTERN IMDAdSize const kIMDSizeLargeBanner;
/// 300x250
IMD_EXTERN IMDAdSize const kIMDSizeMediumRectangleBanner;
/// 468x60
IMD_EXTERN IMDAdSize const kIMDSizeFullBanner;
///728x90
IMD_EXTERN IMDAdSize const kIMDSizeLeaderboardBanner;
///// {300, 320, 468, 728} x {50, 90}
IMD_EXTERN IMDAdSize const kIMDSizeSmartBanner;

IMD_EXTERN bool IMDAdSizeEqualToSize(IMDAdSize size1, IMDAdSize size2);
