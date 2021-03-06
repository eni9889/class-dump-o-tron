//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MapsAutoLayoutContext, UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface StarkReroutingOverlaySign : UIView
{
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_reroutingLabel;
    UILabel *_messageLabel;
    UIView *_container;
    MapsAutoLayoutContext *_layoutContext;
    _Bool _showsDataConnectionMessage;
}

@property(nonatomic) _Bool showsDataConnectionMessage; // @synthesize showsDataConnectionMessage=_showsDataConnectionMessage;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)setShowsDataConnectionMessage:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateStyling;
- (id)initWithFrame:(struct CGRect)arg1;

@end

