//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreHAP/HAPAccessoryServerBrowser.h>

#import "CBCentralManagerDelegate.h"

@class CBCentralManager, NSMapTable, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface HAPAccessoryServerBrowserBTLE : HAPAccessoryServerBrowser <CBCentralManagerDelegate>
{
    _Bool _performingGeneralScan;
    id <HAPAccessoryServerBrowserBTLEDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    CBCentralManager *_centralManager;
    NSMapTable *_discoveredPeripheralsWithAccessories;
    NSObject<OS_dispatch_source> *_lostAccessoryServerTimer;
    NSMutableArray *_powerOnCentralManagerCompletions;
    CDUnknownBlockType _reachabilityCompletion;
    NSMapTable *_peripheralsWithConnectionRequestTuples;
    NSObject<OS_dispatch_source> *_targetedScanTimer;
    NSMutableArray *_targetedScanAccessoryIdentifiers;
    NSMapTable *_identifersWithReachabilityScanTuples;
}

@property(retain, nonatomic) NSMapTable *identifersWithReachabilityScanTuples; // @synthesize identifersWithReachabilityScanTuples=_identifersWithReachabilityScanTuples;
@property(retain, nonatomic) NSMutableArray *targetedScanAccessoryIdentifiers; // @synthesize targetedScanAccessoryIdentifiers=_targetedScanAccessoryIdentifiers;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *targetedScanTimer; // @synthesize targetedScanTimer=_targetedScanTimer;
@property(retain, nonatomic) NSMapTable *peripheralsWithConnectionRequestTuples; // @synthesize peripheralsWithConnectionRequestTuples=_peripheralsWithConnectionRequestTuples;
@property(copy, nonatomic) CDUnknownBlockType reachabilityCompletion; // @synthesize reachabilityCompletion=_reachabilityCompletion;
@property(retain, nonatomic) NSMutableArray *powerOnCentralManagerCompletions; // @synthesize powerOnCentralManagerCompletions=_powerOnCentralManagerCompletions;
@property(nonatomic, getter=isPerformingGeneralScan) _Bool performingGeneralScan; // @synthesize performingGeneralScan=_performingGeneralScan;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *lostAccessoryServerTimer; // @synthesize lostAccessoryServerTimer=_lostAccessoryServerTimer;
@property(retain, nonatomic) NSMapTable *discoveredPeripheralsWithAccessories; // @synthesize discoveredPeripheralsWithAccessories=_discoveredPeripheralsWithAccessories;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HAPAccessoryServerBrowserBTLEDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_removeLostAccessoryServers;
- (void)_cancelLostAccessoryServerTimer;
- (void)_setupLostAccessoryServerTimer;
- (void)_handleTargetedScanTimeout;
- (void)_updateTargetedScanTimer;
- (_Bool)_shouldCreateHAPAccessoryServerWithIdentifier:(id)arg1;
- (void)_performTargetedScanForAccessoryWithIdentifier:(id)arg1;
- (void)_handleConnectionRequestCompletionForPeripheral:(id)arg1;
- (void)_performTimedConnectionRequestForIdentifier:(id)arg1;
- (void)_createHAPAccessoryAndNotifyDelegateWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3;
- (_Bool)_delegateRespondsToSelector:(SEL)arg1;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)_notifyDelegatesOfRemovedAccessoryServer:(id)arg1;
- (void)_performTimedScanForIdentifiers:(id)arg1 workQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_removeIdentifiersForReachabilityScan;
- (void)_probeReachabilityForAccessoryServersWithIdentifiers:(id)arg1 onQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)probeReachabilityForAccessoryServersWithIdentifiers:(id)arg1 onQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setReachabilityCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_discoverAccessoryServerWithIdentifier:(id)arg1;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (void)_callPowerOnCompletionsWithError:(id)arg1;
- (void)_powerOnCentralManagerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_startScanningForPairingPeers;
- (void)_stopActiveScan;
- (void)stopDiscoveringAccessoryServers;
- (void)_startDiscoveringAccessoryServers;
- (void)startDiscoveringAccessoryServers;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (_Bool)_parseAdvertisementData:(id)arg1 forPeripheral:(id)arg2 name:(id *)arg3 pairingUsername:(id *)arg4;
- (void)disconnectFromBTLEAccessoryServer:(id)arg1;
- (void)connectToBTLEAccessoryServer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

