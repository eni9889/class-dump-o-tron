//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCH3DFramebufferSplitPipeline.h>

#import "TSCH3DFramebufferAccumulator.h"

@class TSCH3DComponent16WidenShaderEffect, TSCH3DFramebufferCopyPipeline;

__attribute__((visibility("hidden")))
@interface TSCH3DComponent16AccumulatePipeline : TSCH3DFramebufferSplitPipeline <TSCH3DFramebufferAccumulator>
{
    TSCH3DFramebufferCopyPipeline *mPipeline;
    TSCH3DComponent16WidenShaderEffect *mWiden;
    _Bool mValid;
}

- (_Bool)run;
- (void)reset;
- (void)allocateFramebuffersWithSize:(tvec2_3b141483 *)arg1;
- (id)makeFBOWithSize:(tvec2_3b141483 *)arg1 resource:(id)arg2;
- (void)setTexcoords:(id)arg1;
- (void)setVertices:(id)arg1;
- (void)setFactor:(float)arg1;
- (void)dealloc;
- (id)initWithProcessor:(id)arg1 session:(id)arg2;
- (id)target1FBOResource;
- (id)target0FBOResource;

@end

