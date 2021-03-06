//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "BrowserPanel.h"
#import "UIKeyInput.h"

@class NSArray, NSString, UIActivityIndicatorView, UIBarButtonItem, UILabel;

@interface FindOnPagePanel : UIView <BrowserPanel, UIKeyInput>
{
    _Bool _requiresKeyboard;
    NSArray *_toolbarItems;
    UILabel *_currentResultLabel;
    UIBarButtonItem *_previousButtonItem;
    UIBarButtonItem *_nextButtonItem;
    UIActivityIndicatorView *_indicatorView;
    _Bool _useActivityView;
}

@property(nonatomic) _Bool useActivityView; // @synthesize useActivityView=_useActivityView;
- (void).cxx_destruct;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
- (_Bool)hasText;
- (_Bool)canBecomeFirstResponder;
- (void)setRequiresKeyboard:(_Bool)arg1;
- (_Bool)_requiresKeyboardWhenFirstResponder;
- (void)updateUI;
- (id)findTextField;
- (id)inputAccessoryView;
- (id)toolbarItems;
- (void)_nextTapped:(id)arg1;
- (void)_previousTapped:(id)arg1;
- (void)_done;
- (_Bool)shouldShowToolbarInFullscreen;
- (_Bool)shouldHideOnSuspend;
- (_Bool)ignoresPrivateBrowsingStyle;
- (int)pausesPages;
- (int)panelType;
- (id)_currentResultLabel;
- (_Bool)_willShowActivityIndicator;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;

@end

