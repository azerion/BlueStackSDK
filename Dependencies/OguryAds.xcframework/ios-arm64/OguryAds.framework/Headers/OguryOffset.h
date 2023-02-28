//
//  Copyright © 2020 Ogury Ltd. All rights reserved.
//

#import <CoreGraphics/CoreGraphics.h>

typedef struct OguryOffset {
    CGFloat x;
    CGFloat y;
} OguryOffset;

CG_INLINE OguryOffset
OguryOffsetMake(CGFloat x, CGFloat y)
{
    OguryOffset offset; offset.x = x; offset.y = y; return offset;
}
