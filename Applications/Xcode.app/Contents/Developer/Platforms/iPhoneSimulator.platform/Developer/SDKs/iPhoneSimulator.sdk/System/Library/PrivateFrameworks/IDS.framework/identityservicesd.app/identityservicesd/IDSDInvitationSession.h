//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSInvitationPushHandlerListener.h"

@class NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface IDSDInvitationSession : NSObject <IDSInvitationPushHandlerListener>
{
    NSString *_uniqueID;
    NSString *_conferenceID;
    NSSet *_destinations;
    NSData *_remoteBlob;
    id <IDSLink> _idsLink;
    unsigned int _sessionID;
    CDUnknownBlockType _completionBlock;
    NSMutableDictionary *_conferenceIDMap;
    NSMutableDictionary *_callTypeMap;
    NSMutableArray *_initiatedConferences;
    NSDictionary *_callerProperties;
    struct __SecKey *_privateKey;
    _Bool _privateIdentityLoaded;
}

@property(readonly, retain, nonatomic) NSDictionary *callerProperties; // @synthesize callerProperties=_callerProperties;
@property(readonly, nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) NSString *conferenceID; // @synthesize conferenceID=_conferenceID;
@property(retain, nonatomic) id <IDSLink> idsLink; // @synthesize idsLink=_idsLink;
@property(retain, nonatomic) NSData *remoteBlob; // @synthesize remoteBlob=_remoteBlob;
@property(readonly, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (double)_messageTimeoutTimeForMessage:(id)arg1;
- (void)_cancelOtherInvitesForPeerID:(id)arg1 skipPairs:(id)arg2 properties:(id)arg3 conference:(id)arg4 reason:(id)arg5;
- (void)relay:(id)arg1 sendCancel:(id)arg2 toPerson:(id)arg3;
- (_Bool)_hasOutgoingRelayInitiateInFlight;
- (void)relay:(id)arg1 sendUpdate:(id)arg2 toPerson:(id)arg3;
- (void)relay:(id)arg1 sendInitateRequest:(id)arg2 toPerson:(id)arg3;
- (void)sendAVMessageToPerson:(id)arg1 sessionID:(unsigned int)arg2 type:(unsigned int)arg3 userInfo:(id)arg4 conference:(id)arg5;
- (void)cancelVCRequestWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (void)respondToVCInvitationWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (void)requestVCWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3;
- (void)_cancelVCRequestWithPerson:(id)arg1 properties:(id)arg2 conference:(id)arg3 pairsToSkip:(id)arg4 reason:(id)arg5;
- (void)_sendRejectToPeerID:(id)arg1 peerToken:(id)arg2 sessionToken:(id)arg3 callType:(int)arg4 reason:(long long)arg5 clientInfo:(id)arg6;
- (_Bool)_checkRegistrationAndFailIfNecessaryAction:(long long)arg1 callType:(int)arg2 conferenceID:(id)arg3 withPerson:(id)arg4 properties:(id)arg5;
- (_Bool)_checkForBadPeerIDWithAction:(long long)arg1 callType:(int)arg2 conferenceID:(id)arg3 withPerson:(id)arg4 properties:(id)arg5 peerID:(id)arg6;
- (_Bool)_checkManagedProfileAndFailIfNecessaryAction:(long long)arg1 callType:(int)arg2 conferenceID:(id)arg3 withPerson:(id)arg4 properties:(id)arg5;
- (_Bool)_checkCanSendRequestsAndFailIfNecessaryAction:(long long)arg1 callType:(int)arg2 conferenceID:(id)arg3 withPerson:(id)arg4 properties:(id)arg5;
- (_Bool)_checkConferenceIDAndFailIfNecessaryWithAction:(long long)arg1 callType:(int)arg2 conferenceID:(id)arg3 withPerson:(id)arg4 properties:(id)arg5;
- (_Bool)_checkAliasInfoAndFailIfNecessaryWithAction:(long long)arg1 callType:(int)arg2 conferenceID:(id)arg3 withPerson:(id)arg4 properties:(id)arg5;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4;
- (_Bool)_validRegistrationStateToMakeCalls;
- (_Bool)_validRegistrationStateToAcceptCalls;
- (_Bool)_registrationSupportedForRegistration;
- (_Bool)_hasOutgoingInvitationInFlight;
- (id)callerCertForCallType:(int)arg1;
- (id)_keychainRegistration:(id)arg1;
- (id)idsAccountForCallType:(int)arg1;
- (_Bool)allowedAsChild;
- (_Bool)isDeviceRegistered;
- (id)callerURI;
- (struct __SecKey *)callerPrivateKey;
- (id)phoneNumber;
- (id)userID;
- (id)regionServerContext;
- (id)regionBasePhoneNumber;
- (id)profileID;
- (id)regionID;
- (id)pushToken;
- (id)topicForCallType:(int)arg1;
- (void)_setCallType:(int)arg1 forConferenceID:(id)arg2;
- (int)_callTypeForConferenceID:(id)arg1;
- (id)_mappedSessionTokenForConferenceID:(id)arg1;
- (void)_setInitiatedConference:(id)arg1;
- (void)_setConferenceIDMap:(id)arg1 forToken:(id)arg2;
- (void)processRelayUpdate:(id)arg1 fromPerson:(id)arg2;
- (void)processInlineRelayInitiate:(id)arg1 fromPerson:(id)arg2;
- (void)endSession;
- (void)declineInviation;
- (void)cancelInvitation;
- (void)acceptInvitation;
- (void)sendInvitation:(id)arg1;
- (void)sessionWillBecomeInactive;
- (id)externalAddressForSelfConnectionBlob:(id)arg1;
- (void)processRelayCancelPushWithHandler:(id)arg1 relayCancelled:(id)arg2 topic:(id)arg3 peerID:(id)arg4 relayType:(id)arg5 relayTokenAllocReq:(id)arg6 relayConnectionID:(id)arg7 relayTransactionIDAlloc:(id)arg8 myRelayIP:(id)arg9 myRelayPort:(id)arg10 peerRelayIP:(id)arg11 peerRelayPort:(id)arg12 reason:(id)arg13 clientInfo:(id)arg14 serviceData:(id)arg15;
- (void)processRelayUpdatePushWithHandler:(id)arg1 relayUpdated:(id)arg2 topic:(id)arg3 peerID:(id)arg4 peerPushToken:(id)arg5 relayType:(id)arg6 relayConnectionID:(id)arg7 relayTransactionIDChannelBind:(id)arg8 relayTokenChannelBind:(id)arg9 relayBlob:(id)arg10 peerRelayNATIP:(id)arg11 peerRelayNATPort:(id)arg12 clientInfo:(id)arg13 serviceData:(id)arg14;
- (void)processRelayInitiatePushWithHandler:(id)arg1 relayInitiated:(id)arg2 topic:(id)arg3 peerID:(id)arg4 peerPushToken:(id)arg5 relayType:(id)arg6 relayConnectionID:(id)arg7 relayTransactionIDAlloc:(id)arg8 relayTokenAllocReq:(id)arg9 myRelayIP:(id)arg10 myRelayPort:(id)arg11 peerRelayIP:(id)arg12 peerRelayPort:(id)arg13 clientInfo:(id)arg14 serviceData:(id)arg15;
- (void)processSendPushWithHandler:(id)arg1 incomingMessage:(id)arg2 topic:(id)arg3 peerID:(id)arg4 reason:(id)arg5 clientInfo:(id)arg6 serviceData:(id)arg7;
- (void)processCancelPushWithHandler:(id)arg1 sessionCancelled:(id)arg2 topic:(id)arg3 peerID:(id)arg4 reason:(id)arg5 clientInfo:(id)arg6 serviceData:(id)arg7;
- (void)processRejectPushWithHandler:(id)arg1 sessionRejected:(id)arg2 topic:(id)arg3 peerID:(id)arg4 peerPushToken:(id)arg5 reason:(id)arg6 clientInfo:(id)arg7 serviceData:(id)arg8;
- (void)processAcceptPushWithHandler:(id)arg1 sessionAccepted:(id)arg2 topic:(id)arg3 peerID:(id)arg4 peerCN:(id)arg5 peerPushToken:(id)arg6 peerNATType:(id)arg7 peerBlob:(id)arg8 peerNatIP:(id)arg9 relayType:(id)arg10 relayConnectionID:(id)arg11 relayTransactionIDAlloc:(id)arg12 relayTokenAllocReq:(id)arg13 myRelayIP:(id)arg14 myRelayPort:(id)arg15 peerRelayIP:(id)arg16 peerRelayPort:(id)arg17 clientInfo:(id)arg18 serviceData:(id)arg19;
- (void)processInitiatePushWithHandler:(id)arg1 sessionInitated:(id)arg2 topic:(id)arg3 myID:(id)arg4 peerID:(id)arg5 peerDisplayID:(id)arg6 peerCN:(id)arg7 peerPushToken:(id)arg8 peerNATType:(id)arg9 peerBlob:(id)arg10 peerNatIP:(id)arg11 clientInfo:(id)arg12 serviceData:(id)arg13;
- (_Bool)_checkBadPushToken:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

