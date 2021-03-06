//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTLayoutView_ML.h"

@class NSView;

@interface IBCanvasBackgroundView : DVTLayoutView_ML
{
    NSView *_overlayView;
    CDUnknownBlockType _drawingCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType drawingCompletionBlock; // @synthesize drawingCompletionBlock=_drawingCompletionBlock;
@property(retain, nonatomic) NSView *overlayView; // @synthesize overlayView=_overlayView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setBoundsOrigin:(struct CGPoint)arg1;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (void)layoutTopDown;

@end

