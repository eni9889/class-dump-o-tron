//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBBoundInspector.h"

@class IBAutoCompletingComboBoxDataSource, IBKeyEquivalentEntryField, NSButton, NSComboBox, NSPopUpButton, NSStepper, NSTextField, NSTextView;

@interface IBMenuItemInspector : IBBoundInspector
{
    NSTextField *titleTextField;
    NSTextView *attributedTitleTextField;
    NSTextField *tagTextField;
    IBKeyEquivalentEntryField *keyEquivalentField;
    NSPopUpButton *statePopUp;
    NSButton *alternateCheckBox;
    NSButton *enabledCheckBox;
    NSButton *isHiddenCheckBox;
    NSComboBox *imageNameComboBox;
    NSComboBox *onStateImageNameComboBox;
    NSComboBox *offStateImageNameComboBox;
    NSComboBox *mixedStateImageNameComboBox;
    NSTextField *indentationLevelTextField;
    NSStepper *indentationLevelStepper;
    IBAutoCompletingComboBoxDataSource *imageDataSource;
}

- (id)documentationInfoForView:(id)arg1;
- (void)clearKeyEquivalent:(id)arg1;
- (void)setKeyEquivalent:(id)arg1;
- (void)refresh;
- (void)awakeFromNib;
- (void)dealloc;

@end

