//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FaceTime/FTFaceTimeMessage.h>

#import "NSCopying.h"

@class NSArray, NSNumber;

@interface FTCancelMessage : FTFaceTimeMessage <NSCopying>
{
    NSArray *_peers;
    NSNumber *_reason;
}

@property(copy) NSNumber *reason; // @synthesize reason=_reason;
@property(copy) NSArray *peers; // @synthesize peers=_peers;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

