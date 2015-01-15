//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MKMapViewDelegate.h"
#import "MKMapViewDelegatePrivate.h"
#import "MapsChromeViews.h"

@class MKMapView, MapsChromeViewItem, NSArray, NSDate, NSMutableArray, NSMutableSet, NSString, NSTimer, UIView, UserLocationView;

__attribute__((visibility("hidden")))
@interface ChromeViewController : UIViewController <MKMapViewDelegate, MKMapViewDelegatePrivate, MapsChromeViews>
{
    NSMutableArray *_itemsStack;
    UserLocationView *_userLocationView;
    MKMapView *_mapView;
    _Bool _isViewLoading;
    UIView *_mapViewReplacement;
    _Bool _topModeWasSentModeWillDidAppear;
    _Bool _chromeDidReceiveModeWillAppear;
    _Bool _chromeDidReceiveModeDidAppear;
    _Bool _isAnyModeCurrent;
    _Bool _isTopModeBecomingCurrent;
    _Bool _isMapViewDisownedByPrepareMethods;
    _Bool _isBecomingSuppressed;
    _Bool _animatingMapInsets;
    long long _currentlyRunningLabelEdgeInsetsAnimationsCount;
    NSMutableSet *_modesBeingRemoved;
    unsigned long long _clientsAllowingInsetsAnimation;
    _Bool _hasAttemptedLoadingViewportChangeDateFromDefaults;
    _Bool _hasEverScheduledSavingViewportChangeDateInDefaults;
    NSDate *_lastViewportChangeDate;
    NSTimer *_lastViewportSaveTimer;
    UIView *_containingView;
    _Bool _suppressed;
    _Bool _forceAccessoryAnimationForNextPush;
    NSString *_searchContextDefaultsKeysPrefix;
}

+ (Class)userLocationViewClass;
+ (id)mapReplacementColor;
+ (Class)containingViewClass;
+ (Class)chromeViewItemClass;
+ (id)localizedLocationAuthorizationTitle;
+ (id)localizedLocationAuthorizationMessage;
@property(copy, nonatomic) NSString *searchContextDefaultsKeysPrefix; // @synthesize searchContextDefaultsKeysPrefix=_searchContextDefaultsKeysPrefix;
@property(nonatomic) _Bool forceAccessoryAnimationForNextPush; // @synthesize forceAccessoryAnimationForNextPush=_forceAccessoryAnimationForNextPush;
@property(nonatomic, getter=isSuppressed) _Bool suppressed; // @synthesize suppressed=_suppressed;
@property(retain, nonatomic) UIView *mapViewReplacement; // @synthesize mapViewReplacement=_mapViewReplacement;
@property(retain, nonatomic) UIView *containingView; // @synthesize containingView=_containingView;
- (void).cxx_destruct;
- (id)enteredForegroundDate;
- (void)didUnsuppress;
- (void)performInitialConfigurationOnMapView:(id)arg1;
- (void)moveToAccessoryViewsForMode:(id)arg1 animation:(id)arg2;
- (id)_lastViewportChangeDateLoadingFromDefaultsIfNeeded;
- (void)_saveLastViewportChangeDate;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (_Bool)_shouldSaveLastViewportChangeDateInDefaults;
- (id)_lastViewportChangeDateDefaultsKey;
- (id)newTraits;
- (id)mapViewDelegateForSelector:(SEL)arg1;
- (id)mapViewDelegate;
- (_Bool)getPreferredUserInterfaceIdiom:(out long long *)arg1;
@property(readonly, nonatomic) _Bool supportsSuppression;
- (id)mapView:(id)arg1 painterForVectorOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
@property(readonly, nonatomic) UserLocationView *userLocationViewIfExists;
@property(readonly, nonatomic) UserLocationView *userLocationView;
@property(retain, nonatomic) MKMapView *mapView;
- (void)pushTopItemOnTopOfStackAfterViewLoadIfNeeded;
- (struct CGSize)attributionAnchorOffset;
- (void)currentModeDidChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 animated:(_Bool)arg3;
- (void)currentModeWillChangeByMovingToItem:(id)arg1 fromItem:(id)arg2 animated:(_Bool)arg3;
- (void)stackDidChangeByMovingToItem:(id)arg1 fromItem:(id)arg2;
- (void)stackWillChangeByMovingToItem:(id)arg1 fromItem:(id)arg2;
- (void)reinsertMapViewInViewHierarchy:(id)arg1 userLocationView:(id)arg2;
- (void)reinsertMapViewInViewHierarchy;
- (void)addReplacementViewToViewHierarchy:(id)arg1;
- (void)prepareRemovingMapViewFromViewHierarchyWithReplacement:(id)arg1 retainOwnershipOfMapView:(_Bool)arg2;
- (void)prepareRemovingMapViewFromViewHierarchyWithReplacement:(id)arg1;
- (void)performAllowingInsetsAnimation:(CDUnknownBlockType)arg1;
- (void)_updateInsets;
- (void)_setLabelEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)invalidateLabelEdgeInsetsWithAnimation:(id)arg1 animationShouldHideLabelsAtStart:(_Bool)arg2;
- (void)invalidateLabelEdgeInsetsWithAnimation:(id)arg1;
- (void)invalidateMapInsets;
- (struct UIEdgeInsets)labelEdgeInsets;
- (struct UIEdgeInsets)mapInsetsIncludingBarsWithNonopaqueParts:(_Bool)arg1;
- (void)_scheduleAnimationForUpdatingEdgeInsetsForCurrentMode;
- (void)setMapEdgeInsets:(struct UIEdgeInsets)arg1 forMode:(id)arg2;
- (struct CGRect)unobscuredBoundsInContainingViewWithOptions:(long long)arg1;
- (struct UIEdgeInsets)obscuredInsetsForBoundsOptions:(long long)arg1;
@property(readonly, nonatomic) struct CGRect unobscuredBoundsInContainingView;
- (void)layoutForUnobscuredBoundsChange;
- (void)mapViewInstanceDidChange;
- (void)_loadMapViewIfNeeded;
- (void)loadView;
- (_Bool)isViewLoadedOrLoading;
- (void)didLoadView;
- (void)willLoadView;
@property(readonly, nonatomic) MapsChromeViewItem *topItem;
@property(copy, nonatomic) NSArray *modes;
@property(readonly, nonatomic) NSArray *itemsStack;
- (void)cancelWhenNextCurrentActionWithKey:(id)arg1 forMode:(id)arg2;
- (_Bool)isWhenNextCurrentActionScheduledWithKey:(id)arg1 forMode:(id)arg2;
- (void)whenModeNextBecomesCurrent:(id)arg1 performActionWithKey:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_removeWhenNextCurrentBlocksDictionaryFromMode:(id)arg1;
- (void)_invokeWhenNextCurrentBlocksForMode:(id)arg1 animated:(_Bool)arg2;
- (id)_whenNextCurrentBlocksDictionaryForMode:(id)arg1 creatingIfMissing:(_Bool)arg2;
- (void)_performTransitionWithAnimation:(_Bool)arg1 toItem:(id)arg2 fromItem:(id)arg3 itemsLeavingTheStack:(id)arg4 byChangingStackInBlock:(CDUnknownBlockType)arg5;
- (void)viewDidLayoutSubviews;
- (id)_newChromeItemForMode:(id)arg1;
- (void)setModes:(id)arg1 animated:(_Bool)arg2;
- (void)insertMode:(id)arg1 aboveMode:(id)arg2 animated:(_Bool)arg3;
- (void)removeMode:(id)arg1 animated:(_Bool)arg2;
- (void)replaceMode:(id)arg1 withMode:(id)arg2 animated:(_Bool)arg3;
- (void)replaceTopModeWithMode:(id)arg1 animated:(_Bool)arg2;
- (void)_popToItem:(id)arg1 atIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)popToRootModeAnimated:(_Bool)arg1;
- (void)popToMode:(id)arg1 animated:(_Bool)arg2;
- (void)popModeAnimated:(_Bool)arg1;
- (void)pushMode:(id)arg1 animated:(_Bool)arg2;
- (id)chromeViewItemForMode:(id)arg1;
@property(readonly, nonatomic) id <ChromeModeController> topMode;
@property(readonly, nonatomic) id <ChromeModeController> currentMode;
- (_Bool)isTopMode:(id)arg1;
- (_Bool)isCurrentMode:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)_mapView:(id)arg1 calloutDidAppearForAnnotationView:(id)arg2;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapViewDidFinishLoadingMap:(id)arg1;
- (void)mapViewWillStartLoadingMap:(id)arg1;
- (void)mapViewDidAnimateInAnnotationViews:(id)arg1;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(_Bool)arg2;
- (id)mapViewCurrentRouteMatch:(id)arg1;
- (void)mapViewDidFinishCalloutExpansion:(id)arg1;
- (void)mapView:(id)arg1 didStopRespondingToGesture:(long long)arg2 zoomDirection:(long long)arg3 didDecelerate:(_Bool)arg4;
- (void)mapView:(id)arg1 willStartRespondingToGesture:(long long)arg2 animated:(_Bool)arg3;
- (void)mapViewDidStopUserInteraction:(id)arg1;
- (void)mapViewDidStartUserInteraction:(id)arg1;
- (void)mapView:(id)arg1 flyoverTourLabelDidChange:(id)arg2;
- (void)mapView:(id)arg1 didStopFlyoverTourCompleted:(_Bool)arg2;
- (void)mapViewWillStartFlyoverTour:(id)arg1;
- (void)mapView:(id)arg1 showingFlyoverDidChange:(_Bool)arg2;
- (void)mapView:(id)arg1 canShowFlyoverDidChange:(_Bool)arg2;
- (void)mapView:(id)arg1 canEnter3DModeDidChange:(_Bool)arg2;
- (void)mapView:(id)arg1 didBecomePitched:(_Bool)arg2;
- (void)mapViewWillAnimateInAnnotationViews:(id)arg1;
- (void)mapView:(id)arg1 labelMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2;
- (void)_mapView:(id)arg1 willDeselectLabelMarker:(id)arg2;
- (void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2;
- (_Bool)mapView:(id)arg1 shouldSelectLabelMarker:(id)arg2;
- (_Bool)mapView:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)mapView:(id)arg1 didChangeMapType:(unsigned long long)arg2;
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(_Bool)arg3 fromTrackingButton:(_Bool)arg4;
- (double)mapView:(id)arg1 shouldDelayTapResponse:(id)arg2 onAnnotationView:(id)arg3 forDuration:(double)arg4;
- (void)mapView:(id)arg1 willChangeRotation:(double)arg2;
- (void)mapView:(id)arg1 didAddOverlayRenderers:(id)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(_Bool)arg3;
- (void)mapView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(unsigned long long)arg3 fromOldState:(unsigned long long)arg4;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapViewDidStopLocatingUser:(id)arg1;
- (void)mapViewWillStartLocatingUser:(id)arg1;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)_mapView:(id)arg1 willDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)mapViewWillStartRenderingMap:(id)arg1;
- (void)mapView:(id)arg1 canZoomOutDidChange:(_Bool)arg2;
- (void)mapView:(id)arg1 canZoomInDidChange:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
