//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GKPlayerProfileHeaderView.h"

@class GKHorizontalBubbleControlsView, GKTextBubbleControl;

@interface GKNonFriendProfileHeaderView : GKPlayerProfileHeaderView
{
    _Bool _didFloatInBubbles;
    GKTextBubbleControl *_sendRequestBubble;
    GKHorizontalBubbleControlsView *_bubblesContainerView;
}

@property(nonatomic) _Bool didFloatInBubbles; // @synthesize didFloatInBubbles=_didFloatInBubbles;
@property(retain, nonatomic) GKHorizontalBubbleControlsView *bubblesContainerView; // @synthesize bubblesContainerView=_bubblesContainerView;
@property(retain, nonatomic) GKTextBubbleControl *sendRequestBubble; // @synthesize sendRequestBubble=_sendRequestBubble;
- (void)floatInBubbles;
- (void)updatePlayerStatus;
- (void)sendBubbleTapped:(id)arg1;
- (id)viewAtBottomEdge;
- (void)dealloc;
- (void)establishViews;

@end

