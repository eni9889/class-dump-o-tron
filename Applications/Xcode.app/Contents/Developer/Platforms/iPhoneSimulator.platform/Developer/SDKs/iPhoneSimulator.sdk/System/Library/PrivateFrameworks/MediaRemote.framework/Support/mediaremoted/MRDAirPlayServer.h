//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MRDXPCMessageHandling.h"

@class MSVSystemDialog, NSMutableSet, NSString;

@interface MRDAirPlayServer : NSObject <MRDXPCMessageHandling>
{
    int _externalScreenTypeDidChangeToken;
    _Bool _overrideRouteDiscoveryMode;
    NSMutableSet *_routeHashesToIgnorePortStatusFailures;
    unsigned long long _routeHashForAlreadyDisplayedBusyAlert;
    MSVSystemDialog *_activePasswordDialog;
}

@property(retain, nonatomic) MSVSystemDialog *activePasswordDialog; // @synthesize activePasswordDialog=_activePasswordDialog;
- (void)_presentPasswordDialogForRoute:(id)arg1 withOptions:(unsigned int)arg2;
- (void)_postExternalScreenDidChange;
- (void)_handleAuthenticationFailureForRoute:(id)arg1 withOptions:(unsigned int)arg2;
- (void)_handleBusyStatusForRoute:(id)arg1 withOptions:(unsigned int)arg2;
- (void)_updateSystemRouteDiscoveryMode;
- (void)_unregisterAVSystemControllerNotifications;
- (void)_registerAVSystemControllerNotifications;
- (void)_avSystemControllerServerDiedNotification:(id)arg1;
- (void)_portStatusDidChangeNotification:(id)arg1;
- (void)_externalScreenDidChangeNotification:(id)arg1;
- (void)_currentRouteHasVolumeControlDidChangeNotification:(id)arg1;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;
- (void)_handleGetExternalScreenTypeMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetPickedRouteHasVolumeControlMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSetPickedRouteMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleGetPickableRoutesMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSetRouteDiscoveryModeMessage:(id)arg1 fromClient:(id)arg2;
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;
- (_Bool)routeIsActiveWithUID:(id)arg1;
- (void)pickRouteWithUID:(id)arg1;
- (_Bool)setPickedRoute:(id)arg1 withPassword:(id)arg2 options:(unsigned int)arg3;
- (id)pickableRoutesForCategory:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
