//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "StarkTableViewController.h"

#import "MKLocationManagerObserver.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSIndexPath, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface StarkSearchTableViewController : StarkTableViewController <MKLocationManagerObserver, UITableViewDelegate, UITableViewDataSource>
{
    _Bool _displaysDistanceInMetric;
    _Bool _displaysYardsForShortDistances;
    NSTimer *_timer;
    _Bool _timeToUpdate;
    NSIndexPath *_selectedIndexPath;
    NSArray *_cachedSearchResults;
}

@property(retain, nonatomic) NSArray *cachedSearchResults; // @synthesize cachedSearchResults=_cachedSearchResults;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)updateArrows;
- (void)updateArrowInCell:(id)arg1 animated:(_Bool)arg2;
- (double)poiHeadingForLocation:(id)arg1 currentLocation:(id)arg2 currentHeading:(double)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (void)_handleLocaleChangeNotification:(id)arg1;
- (id)visuallySelectedItem;
- (void)modeWillPop;
- (_Bool)_viewControllerWasSelected;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)toggleRateLimitedUpdate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
