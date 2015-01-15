//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ISOperationQueue, NSObject<OS_dispatch_queue>;

@interface SoftwareUpdatesStore : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    ISOperationQueue *_operationQueue;
}

+ (void)showPendingUpdatesBadgeWithMessage:(id)arg1 connection:(id)arg2;
+ (void)removeAllUpdatesBulletinsWithMessage:(id)arg1 connection:(id)arg2;
+ (void)reloadWithMessage:(id)arg1 connection:(id)arg2;
+ (void)observeXPCServer:(id)arg1;
+ (void)migrateWithMessage:(id)arg1 connection:(id)arg2;
+ (void)hidePendingUpdatesBadgeWithMessage:(id)arg1 connection:(id)arg2;
+ (void)clearExpiredHistoryWithMessage:(id)arg1 connection:(id)arg2;
+ (id)defaultStore;
- (id)_updateTitleForStoreItemData:(id)arg1;
- (_Bool)_shouldShowApplicationBadge;
- (_Bool)_shouldPerformAutomaticUpdates;
- (void)_setSoftwareUpdateCheckIntervalCellular:(double)arg1;
- (void)_setSoftwareUpdateCheckInterval:(double)arg1;
- (void)_setLastSoftwareUpdateCheckDate:(id)arg1;
- (void)_setCheckInterval:(double)arg1 forDefaultsKey:(struct __CFString *)arg2;
- (void)_setBadgeWithCount:(long long)arg1;
- (void)_sendChangeNotification;
- (void)_resetBackgroundTaskJobs;
- (void)_reloadWithClient:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_reloadApplicationBadge;
- (void)_performBackgroundSoftwareUpdateCheckIfNeeded;
- (void)_performBackgroundSoftwareUpdateCheck;
- (void)_performBackgroundCheckForJob:(id)arg1 jobName:(id)arg2;
- (id)_operationQueue;
- (id)_nextCheckDateWithInterval:(double)arg1;
- (void)_mergeAvailableUpdates:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_handleMessage:(id)arg1 connection:(id)arg2 withReplyBlock:(CDUnknownBlockType)arg3;
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;
- (void)_disableForcedBadge;
- (double)_checkIntervalWithDefault:(double)arg1 bagKeys:(id)arg2 defaultsKey:(struct __CFString *)arg3;
- (double)_backgroundSoftwareUpdateCheckIntervalCellular;
- (double)_backgroundSoftwareUpdateCheckInterval;
- (void)_addUpdateCheckJobWithDate:(id)arg1 identifier:(id)arg2 allowsCellular:(_Bool)arg3;
- (void)_addOperation:(id)arg1;
- (void)verifyPendingUpdates;
- (void)start;
- (void)showPendingUpdatesBadge;
- (void)removeAllBulletins;
- (void)reloadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)postBulletinForInstalledUpdates;
- (void)noteUpdatesStateChanged;
- (void)hidePendingUpdatesBadge;
- (void)dealloc;
- (id)init;

@end
