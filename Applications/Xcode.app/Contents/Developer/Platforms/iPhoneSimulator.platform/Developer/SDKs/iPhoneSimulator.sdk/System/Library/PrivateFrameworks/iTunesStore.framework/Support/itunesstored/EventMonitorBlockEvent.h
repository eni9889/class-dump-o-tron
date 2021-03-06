//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EventMonitorEvent.h"

#import "NSCopying.h"

@interface EventMonitorBlockEvent : EventMonitorEvent <NSCopying>
{
    CDUnknownBlockType _eventBlock;
    CDUnknownBlockType _testBlock;
}

@property(copy, nonatomic) CDUnknownBlockType testBlock; // @synthesize testBlock=_testBlock;
@property(copy, nonatomic) CDUnknownBlockType eventBlock; // @synthesize eventBlock=_eventBlock;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)performAction;
- (_Bool)hasOccurred;
- (void)dealloc;

@end

