//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBViewEditor.h"

@class IBOrderedRelationshipDragAndDropPolicy;

@interface IBSplitViewEditor : IBViewEditor
{
    IBOrderedRelationshipDragAndDropPolicy *insertionPolicy;
}

+ (struct CGRect)rectForDefaultCursorForChildView:(id)arg1 ofEditedObject:(id)arg2 inWindowController:(id)arg3;
- (void)failToAcceptDragInfo:(id)arg1;
- (id)acceptDragInfo:(id)arg1;
- (BOOL)prepareToAcceptDragInfo:(id)arg1;
- (BOOL)wantsDefaultDragInsertionIndicatorForDragInfo:(id)arg1;
- (id)selectDragDestination:(id)arg1;
- (void)customizePasteboardInsertionContext:(id)arg1 fromPasteboard:(id)arg2 andDraggingInfo:(id)arg3;
- (void)drawDragAndDropInsertionHints;
- (BOOL)interceptEvent:(id)arg1;
- (void)tryToDragSubviewsWithLeftMouseDown:(id)arg1 andLeftMouseDragged:(id)arg2;
- (void)reattachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (void)drawSelection;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)didClose;
- (void)didOpen;
- (long long)splitViewGrowthDirection;
- (id)editedSplitView;

@end

