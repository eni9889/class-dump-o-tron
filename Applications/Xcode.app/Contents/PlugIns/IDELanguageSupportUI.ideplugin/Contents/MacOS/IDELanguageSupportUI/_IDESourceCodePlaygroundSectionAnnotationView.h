//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, IDESourceCodePlaygroundSectionAnnotationViewController, NSString, NSTrackingArea;

@interface _IDESourceCodePlaygroundSectionAnnotationView : NSView <DVTInvalidation>
{
    NSTrackingArea *_trackingArea;
    IDESourceCodePlaygroundSectionAnnotationViewController *_viewController;
}

+ (void)initialize;
@property(retain) IDESourceCodePlaygroundSectionAnnotationViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateTrackingAreas;
- (void)resetCursorRects;
- (void)dealloc;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
