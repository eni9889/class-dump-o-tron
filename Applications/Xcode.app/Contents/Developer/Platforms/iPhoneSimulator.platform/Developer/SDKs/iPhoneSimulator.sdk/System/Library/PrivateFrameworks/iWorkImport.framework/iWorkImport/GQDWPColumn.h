//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface GQDWPColumn : NSObject
{
    long long mIndex;
    float mWidth;
    float mSpacing;
    _Bool mHasSpacing;
}

+ (const struct StateSpec *)stateForReading;
- (float)spacing;
- (_Bool)hasSpacing;
- (float)width;
- (long long)index;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;

@end

