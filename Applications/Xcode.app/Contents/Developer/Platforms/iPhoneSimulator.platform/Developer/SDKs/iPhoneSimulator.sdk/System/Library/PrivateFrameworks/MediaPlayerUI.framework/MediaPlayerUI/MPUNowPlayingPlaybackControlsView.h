//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPPlaybackControlsView.h"

#import "MPDetailSliderDelegate.h"
#import "MPUNowPlayingTransportControlsDelegate.h"
#import "UIActionSheetDelegate.h"

@class MPUApplicationDefaults, MPUNowPlayingTransportControls, MPUSkipLimitView, MPVolumeSlider, NSArray, NSString, SKUICircleProgressIndicator, UIActionSheet, UIButton, UIView;

@interface MPUNowPlayingPlaybackControlsView : MPPlaybackControlsView <MPDetailSliderDelegate, MPUNowPlayingTransportControlsDelegate, UIActionSheetDelegate>
{
    UIActionSheet *_createActionSheet;
    SKUICircleProgressIndicator *_createActivityIndicatorView;
    UIButton *_createButton;
    NSArray *_createButtonActions;
    _Bool _isDetailScrubbing;
    MPUNowPlayingTransportControls *_transportControls;
    MPVolumeSlider *_volumeSlider;
    _Bool _usesMiniProgressControl;
    MPUApplicationDefaults *_applicationDefaults;
    long long _orientation;
    MPUSkipLimitView *_skipLimitView;
    UIView *_titlesView;
    struct CGRect _artworkFrame;
}

+ (unsigned long long)defaultVisibleParts;
@property(readonly, nonatomic) UIActionSheet *createActionSheet; // @synthesize createActionSheet=_createActionSheet;
@property(nonatomic) _Bool usesMiniProgressControl; // @synthesize usesMiniProgressControl=_usesMiniProgressControl;
@property(nonatomic) __weak UIView *titlesView; // @synthesize titlesView=_titlesView;
@property(readonly, nonatomic) MPUSkipLimitView *skipLimitView; // @synthesize skipLimitView=_skipLimitView;
@property(nonatomic) struct CGRect artworkFrame; // @synthesize artworkFrame=_artworkFrame;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) MPUApplicationDefaults *applicationDefaults; // @synthesize applicationDefaults=_applicationDefaults;
@property(readonly, nonatomic) UIView *_createButton; // @synthesize _createButton;
- (void).cxx_destruct;
- (void)_layoutSkipLimitView;
- (_Bool)_isCreateAvailable;
- (void)_playbackContentsDidChangeNotification:(id)arg1;
- (void)_defaultsDidChangeNotification:(id)arg1;
- (void)_createAction:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(readonly, nonatomic) double _volumeBottomVerticalInsetPhone;
- (void)_updateForItemDidChangeAnimated:(_Bool)arg1;
@property(readonly, nonatomic) double _transportControlsLastResortVerticalOffsetPhone;
- (Class)_transportControlsClass;
@property(readonly, nonatomic) double _titlesLastResortVerticalOffsetPhone;
- (id)_titleForCreateAction:(long long)arg1;
@property(readonly, nonatomic) double _textButtonVerticalInsetBaselinePad;
@property(readonly, nonatomic) double _textButtonBottomVerticalInsetBaselinePhone;
- (_Bool)_shouldAddBottomGap;
@property(readonly, nonatomic) struct CGRect _boundsForCenteringCreateActivityIndicatorView;
- (id)_availableCreateActionsForItem:(id)arg1;
- (void)setUsesMiniProgressControl:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isShowingCreateLoadingIndicator) _Bool showingCreateLoadingIndicator;
- (void)transportControlsDidLayoutSubviews:(id)arg1;
- (void)unregisterForPlayerNotifications;
- (id)shuffleButtonImage;
- (_Bool)shouldOverrideProgressTimeLabelStyle;
- (void)setPlayer:(id)arg1;
- (void)setItem:(id)arg1;
@property(nonatomic) __weak id <MPUNowPlayingPlaybackControlsViewDelegate><MPTransportControlsTarget> delegate;
- (id)repeatButtonImage;
- (void)reloadView;
- (id)newProgressIndicator;
- (void)registerForPlayerNotifications;
- (id)newButtonForPart:(unsigned long long)arg1;
- (_Bool)detailScrubbingHidesControls;
- (long long)buttonType;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

