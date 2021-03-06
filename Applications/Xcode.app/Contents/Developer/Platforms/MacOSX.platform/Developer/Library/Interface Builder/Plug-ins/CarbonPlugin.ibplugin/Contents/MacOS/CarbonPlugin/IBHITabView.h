//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBHIView.h"

@class IBHITabViewItem, NSMutableArray;

@interface IBHITabView : IBHIView
{
    unsigned short tabDirection;
    NSMutableArray *tabViewItems;
    IBHITabViewItem *selectedTabViewItem;
    BOOL autoLayoutPanes;
}

+ (id)classNameForHICoder;
- (void)mouseDown:(id)arg1;
- (struct _NSRect)convertRect:(struct _NSRect)arg1 fromSubviewForCarbonBoundsEncoding:(id)arg2;
- (struct _NSRect)partiallyComputedRuntimeFrameForView:(id)arg1;
- (void)layoutContentView;
- (void)validateContentView;
- (id)tabViewItemAtPoint:(struct _NSPoint)arg1;
- (struct _NSRect)rectForTabViewItem:(id)arg1;
- (struct _NSRect)titleRectForTabViewItem:(id)arg1;
- (int)indexOfTabViewItemAtPoint:(struct _NSPoint)arg1;
- (struct _NSRect)rectForTabViewItemAtIndex:(int)arg1;
- (struct _NSRect)contentRect;
- (void)fixBrokenRootViewRelativeFrames:(id)arg1;
- (void)insertTabViewItem:(id)arg1 atIndex:(int)arg2;
- (void)setTabViewItemsDictionaries:(id)arg1;
- (id)tabViewItemsDictionaries;
- (void)setAutoLayoutPanes:(BOOL)arg1;
- (BOOL)autoLayoutPanes;
- (void)setSelectedTabViewItem:(id)arg1;
- (id)selectedTabViewItem;
- (void)setOneBasedSelectedTabViewItemIndex:(int)arg1;
- (int)oneBasedSelectedTabViewItemIndex;
- (void)setSelectedTabViewItemIndex:(int)arg1;
- (int)selectedTabViewItemIndex;
- (void)removeTabViewItem:(id)arg1;
- (void)addTabViewItem:(id)arg1;
- (void)setTabViewItems:(id)arg1;
- (id)tabViewItems;
- (id)tabViewItemViews;
- (int)numberOfTabViewItems;
- (void)setNumberOfTabViewItems:(int)arg1;
- (void)setTabDirection:(unsigned short)arg1;
- (unsigned short)tabDirection;
- (void)addIB2RelevantSubview:(id)arg1;
- (id)ib2RelevantSubviews;
- (void)pushCocoaFrameToHIView;
- (void)customizeView:(struct OpaqueControlRef *)arg1;
- (struct OpaqueControlRef *)createViewInWindow:(struct OpaqueWindowPtr *)arg1 withFrame:(struct CGRect)arg2;
- (BOOL)supportsControlSize:(unsigned short)arg1;
- (void)encodeWithHICoder:(id)arg1;
- (id)initWithHIDecoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)buildRuntimeCodingDescription:(id)arg1;
- (void)buildDesignTimeCodingDescription:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct _NSRect)arg1;

@end

