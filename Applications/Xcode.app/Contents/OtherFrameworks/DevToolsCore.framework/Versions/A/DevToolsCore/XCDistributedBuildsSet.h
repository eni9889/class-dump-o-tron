//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface XCDistributedBuildsSet : NSObject
{
    BOOL _currentlyUsed;
    id _name;
    NSMutableSet *_computers;
}

- (id)description;
- (void)removeComputer:(id)arg1;
- (void)addComputers:(id)arg1;
- (void)addComputer:(id)arg1;
- (id)computers;
- (void)setName:(id)arg1;
- (id)name;
- (void)setCurrentlyUsed:(BOOL)arg1;
- (BOOL)currentlyUsed;
- (long long)caseInsensitiveCompare:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 currentlyUsed:(BOOL)arg2;

@end

