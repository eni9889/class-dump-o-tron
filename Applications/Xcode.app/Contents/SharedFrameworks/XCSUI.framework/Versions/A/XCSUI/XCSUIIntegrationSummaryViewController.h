//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTViewController.h"

#import "XCSBotSupportingEditorHostedViewController.h"

@class DVTLozengeTextField, DVTReplacementView, DVTStackView_ML, NSArray, NSString, XCSBot, XCSBotSupportingEditor, XCSIntegration, _XCSUIIntegrationSummaryScrollView;

@interface XCSUIIntegrationSummaryViewController : DVTViewController <XCSBotSupportingEditorHostedViewController>
{
    NSArray *_currentSelectedDocumentLocations;
    XCSIntegration *_integration;
    XCSBot *_bot;
    XCSBotSupportingEditor *_botSupportingEditor;
    NSString *_integrationTitle;
    NSString *_dateFinished;
    NSString *_statusString;
    NSString *_errorCount;
    NSString *_warningCount;
    NSString *_issueCount;
    DVTReplacementView *_statusAndIssuesReplacementView;
    DVTReplacementView *_productsReplacementView;
    DVTReplacementView *_devicesReplacementView;
    DVTStackView_ML *_stackView;
    long long _currentIntegrationStep;
    _XCSUIIntegrationSummaryScrollView *_scrollView;
    DVTReplacementView *_reflightReplacementView;
    DVTReplacementView *_errorView;
    DVTLozengeTextField *_errorTextField;
}

+ (BOOL)instancesCanContainDocumentLocation:(id)arg1;
+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
@property __weak DVTLozengeTextField *errorTextField; // @synthesize errorTextField=_errorTextField;
@property __weak DVTReplacementView *errorView; // @synthesize errorView=_errorView;
@property __weak DVTReplacementView *reflightReplacementView; // @synthesize reflightReplacementView=_reflightReplacementView;
@property __weak _XCSUIIntegrationSummaryScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property long long currentIntegrationStep; // @synthesize currentIntegrationStep=_currentIntegrationStep;
@property __weak DVTStackView_ML *stackView; // @synthesize stackView=_stackView;
@property __weak DVTReplacementView *devicesReplacementView; // @synthesize devicesReplacementView=_devicesReplacementView;
@property __weak DVTReplacementView *productsReplacementView; // @synthesize productsReplacementView=_productsReplacementView;
@property __weak DVTReplacementView *statusAndIssuesReplacementView; // @synthesize statusAndIssuesReplacementView=_statusAndIssuesReplacementView;
@property(copy) NSString *issueCount; // @synthesize issueCount=_issueCount;
@property(copy) NSString *warningCount; // @synthesize warningCount=_warningCount;
@property(copy) NSString *errorCount; // @synthesize errorCount=_errorCount;
@property(copy) NSString *statusString; // @synthesize statusString=_statusString;
@property(copy) NSString *dateFinished; // @synthesize dateFinished=_dateFinished;
@property(copy) NSString *integrationTitle; // @synthesize integrationTitle=_integrationTitle;
@property(retain, nonatomic) XCSBotSupportingEditor *botSupportingEditor; // @synthesize botSupportingEditor=_botSupportingEditor;
@property(retain, nonatomic) XCSBot *bot; // @synthesize bot=_bot;
@property(retain, nonatomic) XCSIntegration *integration; // @synthesize integration=_integration;
@property(readonly, copy) NSArray *currentSelectedDocumentLocations; // @synthesize currentSelectedDocumentLocations=_currentSelectedDocumentLocations;
- (void).cxx_destruct;
- (void)selectDocumentLocations:(id)arg1;
- (void)refreshUI;
- (void)updateReplacementViews;
- (void)configureStatusAndDeviceInstalledReplacementViews;
- (void)sizeStatusIsssueViewFit;
- (id)inflightViewController;
- (id)devicesViewController;
- (id)productsViewController;
- (id)statusAndIssueCountsViewController;
@property(readonly, copy) NSArray *currentSelectedItems;
- (void)primitiveInvalidate;
- (void)viewDidInstall;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
