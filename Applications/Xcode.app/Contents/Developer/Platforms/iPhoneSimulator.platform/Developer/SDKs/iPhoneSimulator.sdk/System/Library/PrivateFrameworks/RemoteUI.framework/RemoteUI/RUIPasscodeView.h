//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <RemoteUI/RUIElement.h>

#import "RUIPasscodeFieldDelegate.h"
#import "RUITableFooterDelegate.h"

@class RUIObjectModel, RUIPage, RUIPasscodeField, UILabel, UIView;

@interface RUIPasscodeView : RUIElement <RUITableFooterDelegate, RUIPasscodeFieldDelegate>
{
    UIView *_view;
    UILabel *_label;
    UIView *_footer;
    RUIObjectModel *_objectModel;
    RUIPage *_page;
    RUIPasscodeField *_passcodeField;
}

@property(readonly, nonatomic) RUIPasscodeField *passcodeField; // @synthesize passcodeField=_passcodeField;
@property(nonatomic) __weak RUIPage *page; // @synthesize page=_page;
@property(nonatomic) __weak RUIObjectModel *objectModel; // @synthesize objectModel=_objectModel;
- (void).cxx_destruct;
- (void)submitPIN;
- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;
- (void)footerView:(id)arg1 activatedLinkWithURL:(id)arg2;
- (void)viewDidLayout;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)populatePostbackDictionary:(id)arg1;
- (id)passcodeView;

@end
