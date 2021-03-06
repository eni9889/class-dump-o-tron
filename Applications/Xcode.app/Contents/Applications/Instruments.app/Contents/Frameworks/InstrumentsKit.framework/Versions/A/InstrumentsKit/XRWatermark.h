//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PFTNibView.h"

@class NSButton, NSString, NSTextField;

@interface XRWatermark : PFTNibView
{
    NSString *_text;
    int _style;
    NSButton *_libraryButton;
    NSButton *_helpButton;
    NSButton *_featureCheckBoxButton;
    NSTextField *_featureCheckboxLabel;
}

+ (void)_setButton:(id)arg1 toColor:(id)arg2;
@property NSTextField *featureCheckboxLabel; // @synthesize featureCheckboxLabel=_featureCheckboxLabel;
@property NSButton *featureCheckBoxButton; // @synthesize featureCheckBoxButton=_featureCheckBoxButton;
@property NSButton *helpButton; // @synthesize helpButton=_helpButton;
@property NSButton *libraryButton; // @synthesize libraryButton=_libraryButton;
- (void)featureCheckboxWasClicked:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)isOpaque;
- (int)style;
- (void)setStyle:(int)arg1;
- (void)dealloc;
- (id)initWithText:(id)arg1;

@end

