//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XRComment.h"

@class NSArray, NSMutableDictionary, NSString, XRCodeFragment, XRCodeManager;

@interface XRCoachComment : NSObject <XRComment>
{
    NSMutableDictionary *_analysisInfo;
    NSArray *_fragments;
    XRCodeManager *_srcManager;
    XRCodeFragment *_sourceFrag;
    XRCodeFragment *_disasmFrag;
    XRCodeFragment *_myFrag;
    BOOL _minimalInfo;
    BOOL _forcedNeed;
}

@property(retain, nonatomic) XRCodeFragment *fragment; // @synthesize fragment=_myFrag;
@property(retain, nonatomic) XRCodeFragment *sourceFragment; // @synthesize sourceFragment=_sourceFrag;
@property(retain, nonatomic) XRCodeFragment *disasmFragment; // @synthesize disasmFragment=_disasmFrag;
- (BOOL)needsInspector;
- (void)setNeedsInspector;
@property(readonly, nonatomic) NSArray *dataItems;
@property(readonly) double importance;
- (BOOL)isMerged;
- (void)mergeWithComment:(id)arg1;
- (BOOL)canMergeWithComment:(id)arg1;
- (id)stringWithType:(int)arg1;
- (id)analysisInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithAnalysis:(id)arg1 forFragment:(id)arg2 referencingSources:(id)arg3 inSourceCodeManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

