//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString, PFTCallTreeNode, XRBacktraceRepository;

@interface XRCachedCallTree : NSObject
{
    XRBacktraceRepository *_controllerNotRetained;
    PFTCallTreeNode *_cachedTree;
    NSString *_rootNodeName;
    NSArray *_nodeDataSource;
    NSMutableArray *_failedSource;
    long long _lastUsedNode;
    unsigned long long _savedIndex;
    id _lastNodeCheck;
    unsigned long long _weightCount;
}

- (unsigned long long *)savedIndex;
- (id)name;
- (id)callTree;
- (void)updateCallTreeRoot:(id)arg1 byAddingSamples:(id)arg2 forCategory:(id)arg3;
- (BOOL)_updateByAddingSamples:(id)arg1 range:(struct _NSRange)arg2 toCallTree:(id)arg3 forCategory:(id)arg4;
- (void)updateCallTreeRoot:(id)arg1 withCategory:(id)arg2;
- (void)update;
- (void)invalidate;
- (void)dealloc;
- (id)initWithController:(id)arg1 sampleArray:(id)arg2 name:(id)arg3 weightCount:(unsigned long long)arg4;

@end

