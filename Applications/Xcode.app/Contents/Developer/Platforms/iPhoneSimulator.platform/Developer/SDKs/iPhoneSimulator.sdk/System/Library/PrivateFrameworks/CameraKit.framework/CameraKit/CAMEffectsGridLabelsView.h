//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "_UIBackdropViewObserver.h"

@class CAMEffectsGridView, NSArray, _UIBackdropView, _UILegibilitySettingsProvider;

@interface CAMEffectsGridLabelsView : UIView <_UIBackdropViewObserver>
{
    _Bool _disableLayoutForLabels;
    CAMEffectsGridView *_gridView;
    long long _orientation;
    NSArray *_filterLabelViews;
    NSArray *_filterIndices;
    _UIBackdropView *__backdropView;
    _UILegibilitySettingsProvider *__legibilitySettingsProvider;
}

@property(retain, nonatomic) _UILegibilitySettingsProvider *_legibilitySettingsProvider; // @synthesize _legibilitySettingsProvider=__legibilitySettingsProvider;
@property(retain, nonatomic) _UIBackdropView *_backdropView; // @synthesize _backdropView=__backdropView;
- (void)_setFilterIndices:(id)arg1;
@property(retain, nonatomic) NSArray *filterIndices; // @synthesize filterIndices=_filterIndices;
@property(retain, nonatomic) NSArray *filterLabelViews; // @synthesize filterLabelViews=_filterLabelViews;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic, getter=isDisabledLayoutForLabels) _Bool disableLayoutForLabels; // @synthesize disableLayoutForLabels=_disableLayoutForLabels;
@property(retain, nonatomic) CAMEffectsGridView *gridView; // @synthesize gridView=_gridView;
- (void).cxx_destruct;
- (void)backdropViewDidChange:(id)arg1;
- (void)updateToContentSize:(id)arg1;
- (struct CGAffineTransform)_transformForOrientation:(long long)arg1;
- (struct CGRect)frameForLabelView:(id)arg1 withinGridFrame:(struct CGRect)arg2;
- (void)layoutSubviews;
- (void)_setFilterLabelViews:(id)arg1;
- (void)_rebuildLabelViews;
- (void)updateFilterLabels;
- (void)_replaceLabelViews:(_Bool)arg1;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

