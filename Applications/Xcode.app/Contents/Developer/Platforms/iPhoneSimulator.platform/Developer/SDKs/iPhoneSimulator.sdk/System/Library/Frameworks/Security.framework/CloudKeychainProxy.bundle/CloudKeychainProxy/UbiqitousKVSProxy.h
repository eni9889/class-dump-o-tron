//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface UbiqitousKVSProxy : NSObject
{
    id currentiCloudToken;
    CDUnknownBlockType itemsChangedCallback;
    int callbackMethod;
    _Bool _syncWithPeersPending;
    _Bool _shadowSyncWithPeersPending;
    _Bool _inCallout;
    _Bool _oldInCallout;
    _Bool _unlockedSinceBoot;
    _Bool _isLocked;
    _Bool _seenKVSStoreChange;
    _Bool _ensurePeerRegistration;
    _Bool _shadowEnsurePeerRegistration;
    _Bool _syncTimerScheduled;
    NSDictionary *_keyParameterKeys;
    NSDictionary *_circleKeys;
    NSDictionary *_messageKeys;
    NSMutableSet *_alwaysKeys;
    NSMutableSet *_firstUnlockKeys;
    NSMutableSet *_unlockedKeys;
    NSMutableSet *_pendingKeys;
    NSMutableSet *_shadowPendingKeys;
    unsigned long long _nextFreshnessTime;
    NSObject<OS_dispatch_source> *_syncTimer;
    unsigned long long _deadline;
    unsigned long long _lastSyncTime;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_freshParamsQueue;
}

+ (id)sharedKVSProxy;
@property(retain) NSObject<OS_dispatch_queue> *freshParamsQueue; // @synthesize freshParamsQueue=_freshParamsQueue;
@property(retain) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property unsigned long long lastSyncTime; // @synthesize lastSyncTime=_lastSyncTime;
@property unsigned long long deadline; // @synthesize deadline=_deadline;
@property _Bool syncTimerScheduled; // @synthesize syncTimerScheduled=_syncTimerScheduled;
@property(retain) NSObject<OS_dispatch_source> *syncTimer; // @synthesize syncTimer=_syncTimer;
@property unsigned long long nextFreshnessTime; // @synthesize nextFreshnessTime=_nextFreshnessTime;
@property _Bool shadowEnsurePeerRegistration; // @synthesize shadowEnsurePeerRegistration=_shadowEnsurePeerRegistration;
@property _Bool ensurePeerRegistration; // @synthesize ensurePeerRegistration=_ensurePeerRegistration;
@property _Bool seenKVSStoreChange; // @synthesize seenKVSStoreChange=_seenKVSStoreChange;
@property _Bool isLocked; // @synthesize isLocked=_isLocked;
@property _Bool unlockedSinceBoot; // @synthesize unlockedSinceBoot=_unlockedSinceBoot;
@property _Bool oldInCallout; // @synthesize oldInCallout=_oldInCallout;
@property _Bool inCallout; // @synthesize inCallout=_inCallout;
@property _Bool shadowSyncWithPeersPending; // @synthesize shadowSyncWithPeersPending=_shadowSyncWithPeersPending;
@property _Bool syncWithPeersPending; // @synthesize syncWithPeersPending=_syncWithPeersPending;
@property(retain, nonatomic) NSMutableSet *shadowPendingKeys; // @synthesize shadowPendingKeys=_shadowPendingKeys;
@property(retain, nonatomic) NSMutableSet *pendingKeys; // @synthesize pendingKeys=_pendingKeys;
@property(retain, nonatomic) NSMutableSet *unlockedKeys; // @synthesize unlockedKeys=_unlockedKeys;
@property(retain, nonatomic) NSMutableSet *firstUnlockKeys; // @synthesize firstUnlockKeys=_firstUnlockKeys;
@property(retain, nonatomic) NSMutableSet *alwaysKeys; // @synthesize alwaysKeys=_alwaysKeys;
@property(retain, nonatomic) NSDictionary *messageKeys; // @synthesize messageKeys=_messageKeys;
@property(retain, nonatomic) NSDictionary *circleKeys; // @synthesize circleKeys=_circleKeys;
@property(retain, nonatomic) NSDictionary *keyParameterKeys; // @synthesize keyParameterKeys=_keyParameterKeys;
- (void).cxx_destruct;
- (void)processPendingKeysForCurrentLockState;
- (void)processKeyChangedEvent:(id)arg1;
- (id)copyValues:(id)arg1;
- (id)pendKeysAndGetPendingForCurrentLockState:(id)arg1;
- (id)pendingKeysForCurrentLockState;
- (void)intersectWithCurrentLockState:(id)arg1;
- (id)pendKeysAndGetNewlyPended:(id)arg1;
- (id)keysForCurrentLockState;
- (void)kvsStoreChange;
- (void)keybagDidUnlock;
- (void)keybagDidLock;
- (void)keybagStateChange;
- (_Bool)updateIsLocked;
- (_Bool)updateUnlockedSinceBoot;
- (void)requestEnsurePeerRegistration;
- (void)requestSyncWithAllPeers;
- (void)scheduleSyncRequestTimer;
- (unsigned long long)nextSyncTime;
- (void)timerFired;
- (void)doSyncWithAllPeers;
- (void)doEnsurePeerRegistration;
- (void)sendKeysCallout:(CDUnknownBlockType)arg1;
- (void)calloutWith:(CDUnknownBlockType)arg1;
- (void)doAfterFlush:(CDUnknownBlockType)arg1;
- (void)cloudChanged:(id)arg1;
- (void)iCloudAccountAvailabilityChanged:(id)arg1;
- (void)streamEvent:(id)arg1;
- (void)saveToUbiquitousStore;
- (id)localNotification:(id)arg1 outFlags:(long long *)arg2;
- (void)registerKeys:(id)arg1;
- (void)registerAtTimeKeys:(id)arg1;
- (id)copyAllKeys;
- (void)importKeyInterests:(id)arg1;
- (id)exportKeyInterests;
- (id)getAll;
- (id)get:(id)arg1;
- (void)clearStore;
- (void)removeObjectForKey:(id)arg1;
- (void)waitForSynchronization:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)cloudStore;
- (void)requestSynchronization:(_Bool)arg1;
- (void)setObjectsFromDictionary:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (void)setItemsChangedBlock:(CDUnknownBlockType)arg1;
- (void)processAllItems;
- (id)description;
- (id)init;
- (void)persistState;

@end
