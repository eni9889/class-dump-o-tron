//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PBXBTree;

@interface PBXBTreeEnumerator : NSObject
{
    PBXBTree *_btree;
    _pbxbtreecursor_4f04ce2b _cursor;
}

- (const void *)previousValue;
- (const void *)nextValueForKey:(const void *)arg1;
- (const void *)nextValue;
- (const void *)valueForKey:(const void *)arg1;
- (const void *)lastValue;
- (const void *)firstValue;
- (id)initWithBTree:(id)arg1;

@end
