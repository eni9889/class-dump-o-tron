//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

__attribute__((visibility("hidden")))
@interface BlurDarkeningBackgroundView : UIView
{
    UIImageView *_topFilterView;
    UIImageView *_bottomFilterView;
    double _scale;
    long long _appearance;
    long long _roundedCornersStyle;
}

+ (id)_topFilterLayerBackgroundColor;
@property(nonatomic) long long roundedCornersStyle; // @synthesize roundedCornersStyle=_roundedCornersStyle;
@property(nonatomic) long long appearance; // @synthesize appearance=_appearance;
- (void).cxx_destruct;
- (id)_roundedCornersResizableImageWithColor:(id)arg1;
- (void)_applyAppearance;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
