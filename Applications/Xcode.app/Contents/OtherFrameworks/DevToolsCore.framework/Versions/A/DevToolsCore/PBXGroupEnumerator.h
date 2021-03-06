//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSEnumerator.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface PBXGroupEnumerator : NSEnumerator <NSCopying>
{
    NSMutableArray *_enumeratedObjects;
    unsigned long long _nextIndex;
    unsigned long long _count;
}

+ (id)enumeratorForGroup:(id)arg1 startingAtItem:(id)arg2;
+ (id)enumeratorForGroup:(id)arg1;
+ (SEL)traversalSelector;
- (id)lastObject;
- (id)firstObject;
- (id)previousObject;
- (void)setNextObject:(id)arg1;
- (unsigned long long)numberOfObjects;
- (id)allObjects;
- (id)nextObject;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)rewind;
- (id)initWithRootArray:(id)arg1 nextObject:(id)arg2;

@end

