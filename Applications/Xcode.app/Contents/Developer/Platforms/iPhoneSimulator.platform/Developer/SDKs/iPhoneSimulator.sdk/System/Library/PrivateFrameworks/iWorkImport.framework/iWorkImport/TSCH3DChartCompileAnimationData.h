//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSCH3DChartGeometryArrayCompilerDelegate.h"

@class NSMutableDictionary, NSString, TSCH3DAnimationTimeSlice, TSCH3DChartElementSceneObject, TSCH3DChartGeometryArrayCompiler, TSCH3DGeometryElementArrays, TSCH3DGeometryInterleavedArray;

__attribute__((visibility("hidden")))
@interface TSCH3DChartCompileAnimationData : NSObject <TSCH3DChartGeometryArrayCompilerDelegate>
{
    TSCH3DAnimationTimeSlice *mTimeSlice;
    TSCH3DGeometryInterleavedArray *mInterleavedArray;
    NSMutableDictionary *mCompiledGeometries;
    TSCH3DChartGeometryArrayCompiler *mCompiler;
    TSCH3DGeometryElementArrays *mElementArrays;
    TSCH3DChartElementSceneObject *mSceneObject;
}

+ (id)dataWithTimeSlice:(id)arg1 sceneObject:(id)arg2;
+ (_Bool)hasCompiledDataForScene:(id)arg1;
+ (id)compiledDataForScene:(id)arg1;
+ (id)scenePropertiesKey;
@property(retain, nonatomic) TSCH3DChartElementSceneObject *sceneObject; // @synthesize sceneObject=mSceneObject;
- (void)didCompileScene:(id)arg1 compiler:(id)arg2;
- (void)didProcessElementArraysForElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 compiler:(id)arg4;
- (void)addElementArrays:(id)arg1 compiler:(id)arg2;
- (id)cullBackfacesKeepingIndices:(id)arg1;
- (void)precalculateTexcoords;
- (struct GeometryResource)currentGeometryResource;
- (id)makeWholeBufferWithClass:(Class)arg1 forGeometryArrays:(const struct GeometryArrays *)arg2;
- (id)compiledGeometry;
- (_Bool)compileEntireBuffer;
- (_Bool)transformBuffers;
- (tvec2_3b141483)elementIndex;
- (void)dealloc;
- (id)initWithTimeSlice:(id)arg1 sceneObject:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

