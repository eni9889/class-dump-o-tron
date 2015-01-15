//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PKCodeAcquisitionDelegate.h"
#import "PKGroupsControllerDelegate.h"
#import "PKPassGroupStackViewDatasource.h"
#import "PKPassGroupStackViewDelegate.h"
#import "PKPaymentServiceDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, NSTimer, PKGroupsController, PKLegacyWelcomeView, PKPassGroupStackView, PKPassWelcomeView, PKPaymentService, PKPaymentWelcomeView, PKUsageNotificationServer, UIButton, UIImageView, UIScrollView;

@interface PKPassGroupsViewController : UIViewController <PKGroupsControllerDelegate, PKPassGroupStackViewDatasource, PKPassGroupStackViewDelegate, UIScrollViewDelegate, PKPaymentServiceDelegate, PKCodeAcquisitionDelegate>
{
    UIButton *_addButton;
    UIScrollView *_welcomeContainer;
    UIImageView *_statusBarGradient;
    PKPassGroupStackView *_groupStackView;
    PKLegacyWelcomeView *_legacyWelcomeView;
    PKPaymentWelcomeView *_paymentWelcomeView;
    PKPassWelcomeView *_passWelcomeView;
    UIButton *_appStoreButton;
    PKPaymentService *_paymentService;
    _Bool _showingWelcome;
    PKGroupsController *_groupsController;
    unsigned long long _modalCardIndex;
    _Bool _viewAppeared;
    _Bool _viewAppearedBefore;
    long long _presentationState;
    NSTimer *_allowDimmingTimer;
    NSTimer *_passViewedNotificationTimer;
    _Bool _passesAreOutdated;
    _Bool _reloadingPasses;
    _Bool _backgroundMode;
    NSMutableArray *_blocksQueuedForUpdateCompletion;
    PKUsageNotificationServer *_usageServer;
    _Bool _welcomeStateEnabled;
    id <PKPassGroupsViewControllerDelegate> _delegate;
}

@property(readonly, nonatomic, getter=isShowingWelcome) _Bool showingWelcome; // @synthesize showingWelcome=_showingWelcome;
@property(nonatomic, getter=isWelcomeStateEnabled) _Bool welcomeStateEnabled; // @synthesize welcomeStateEnabled=_welcomeStateEnabled;
@property _Bool passesAreOutdated; // @synthesize passesAreOutdated=_passesAreOutdated;
@property(nonatomic) id <PKPassGroupsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_appStorePressed;
- (void)_addTapped;
- (void)updateRegionSupportIfNecessary;
- (void)_regionConfigurationDidChangeNotification;
- (void)_localeDidChangeNotification:(id)arg1;
- (void)_updateStatusBarGradientOpacity:(_Bool)arg1;
- (void)_updateWelcomeButtonOpacity:(_Bool)arg1;
- (void)_updateWelcomeButton:(_Bool)arg1;
- (void)_loadWelcomeContainer;
- (void)_loadWelcomeContainerIfNecessary;
- (void)_setShowingWelcome:(_Bool)arg1;
- (void)_toggleWelcomeContainerVisible;
- (void)_applyPresentationState;
- (void)_presentWithUpdatedPasses:(CDUnknownBlockType)arg1;
@property(readonly, retain, nonatomic) PKPassGroupStackView *groupStackView;
- (void)presentPassWithUniqueID:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3 fallbackHandler:(CDUnknownBlockType)arg4;
- (void)presentPassWithUniqueID:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)presentPassWithUniqueID:(id)arg1 animated:(_Bool)arg2;
- (void)presentGroupTable;
- (void)presentOffscreenAnimated:(_Bool)arg1 split:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)presentOffscreenAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)presentOnscreen:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)presentInitialState;
- (void)reloadPasses;
- (void)reloadPassesWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentPassWithBulletinRecordID:(id)arg1;
- (void)_presentGroupWithIndex:(unsigned long long)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_presentGroupWithIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)codeAcquisitionControllerDidCancel:(id)arg1;
- (void)codeAcquisitionController:(id)arg1 didAcquirePass:(id)arg2;
- (void)paymentDeviceDidEnterField;
- (void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)groupStackViewDidHideHeader:(id)arg1;
- (void)groupStackViewDidShowHeader:(id)arg1;
- (void)groupStackView:(id)arg1 didTransitionToState:(long long)arg2 animated:(_Bool)arg3;
- (void)groupStackView:(id)arg1 transitioningToState:(long long)arg2 animated:(_Bool)arg3;
- (void)_passViewedNotificationTimerFired;
- (void)_clearPassViewedNotificationTimer;
- (void)_startPassViewedNotificationTimer;
- (void)_handleStatusBarChange:(id)arg1;
- (void)_handleApplicationdidEnterBackground:(id)arg1;
- (void)_handleApplicationWillEnterForeground:(id)arg1;
- (void)updateLockscreenIdleTimer;
- (void)allowIdleTimer;
- (unsigned long long)suppressedContent;
- (_Bool)passesGrowWhenFlipped;
- (void)groupStackView:(id)arg1 groupDidMoveFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)groupStackViewDidEndReordering:(id)arg1;
- (void)groupStackViewDidBeginReordering:(id)arg1;
- (_Bool)groupStackViewShouldAllowReordering:(id)arg1;
- (void)groupStackView:(id)arg1 deleteConfirmedForPass:(id)arg2;
- (void)groupStackView:(id)arg1 didEndShowingPassView:(id)arg2;
- (void)groupStackView:(id)arg1 didBeginShowingPassView:(id)arg2;
- (unsigned long long)indexOfSeparationGroup;
- (unsigned long long)indexOfGroup:(id)arg1;
- (unsigned long long)numberOfGroups;
- (id)groupAtIndex:(unsigned long long)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)cardsChanged:(id)arg1;
- (double)_welcomeContainerDesiredHeight;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)loadView;
- (void)dealloc;
- (id)initWithGroupsController:(id)arg1;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
