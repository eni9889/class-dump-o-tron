//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSDecayTimerDelegate.h"
#import "APSSystemMonitorListener.h"
#import "CUTWiFiManagerDelegate.h"

@class APSDecayTimer, CUTWeakReference, NSDate, NSMutableArray, NSString, PCSimpleTimer;

@interface APSNetworkMonitor : NSObject <CUTWiFiManagerDelegate, APSSystemMonitorListener, APSDecayTimerDelegate>
{
    CUTWeakReference *_delegate;
    NSString *_lastSSID;
    NSMutableArray *_wifiMeasurements;
    unsigned long long _wifiGrowAttemptsBeforeSSID;
    unsigned long long _wifiGrowAttempts;
    double _wifiKeepAliveInterval;
    APSDecayTimer *_decayTimer;
    PCSimpleTimer *_connectionThrottleTimer;
    _Bool _shouldThrottleConnection;
    _Bool _serverSupportsDualMode;
    long long _dualMode;
    NSDate *_lastPiggybackReset;
    NSDate *_lastPiggybackConnection;
    unsigned long long _piggybackCount;
    unsigned long long _maxCostDrivenConnectionsPerDay;
    unsigned long long _maxPiggybackConnectionsPerDay;
    _Bool _disableCostDrivenDualMode;
    _Bool _shouldUseDualMode;
    _Bool _shouldEnableWifiAutoAssoc;
    _Bool _criticalReliability;
}

+ (unsigned long long)powerCostForPushOnRAT:(struct __CFString *)arg1 withLinkQuality:(int)arg2;
@property(readonly, nonatomic) _Bool shouldUseDualMode; // @synthesize shouldUseDualMode=_shouldUseDualMode;
@property(nonatomic) _Bool serverSupportsDualMode; // @synthesize serverSupportsDualMode=_serverSupportsDualMode;
- (void)setPiggybackDualChannelAttempts:(id)arg1;
- (void)setCostDrivenDualChannelAttempts:(id)arg1;
- (void)setDisableCostDrivenDualChannelAttempts:(id)arg1;
- (void)setCriticalReliability:(_Bool)arg1;
- (void)closedSecondChannel:(long long)arg1;
- (void)openedSecondChannel;
@property(readonly, nonatomic) _Bool isPiggybacking;
- (void)_connectionThrottleTimerFired;
- (void)_clearConnectionThrottleTimer;
- (void)_toggleWiFiAutoAssociateIfNecessary;
- (void)__toggleWiFiAutoAssociateIfNecessary;
- (_Bool)_checkPiggybackBudget;
- (void)notePushWithCost:(unsigned long long)arg1;
- (void)_handleSignificantTimeChange;
- (void)_flushStaleElementsFrom:(id *)arg1 withThreshold:(double)arg2;
- (void)setCurrentWiFiKeepAliveInterval:(double)arg1 growAttempts:(unsigned long long)arg2;
- (_Bool)_wifiIsHistoricallyCheap;
- (double)_accumulatedAwakePercentage;
- (void)_flushStaleWiFiMeasurements;
- (void)_processSSIDChangeWithSSID:(id)arg1 querySSID:(_Bool)arg2;
- (void)cutWiFiManager:(id)arg1 generatedPowerReading:(id)arg2;
- (void)cutWiFiManagerLinkDidChange:(id)arg1 context:(id)arg2;
- (void)systemDidUnlock;
- (void)systemDidLock;
- (void)decayTimerFired:(id)arg1;
- (void)_reloadDualMode;
@property(nonatomic) id <APSNetworkMonitorDelegate> delegate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

