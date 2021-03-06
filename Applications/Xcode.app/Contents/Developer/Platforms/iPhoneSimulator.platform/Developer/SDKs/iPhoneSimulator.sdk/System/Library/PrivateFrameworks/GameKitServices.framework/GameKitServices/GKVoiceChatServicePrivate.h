//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VideoConferenceDelegate.h"
#import "VideoConferenceRealTimeChannel.h"

@class GKVoiceChatDictionary, GKVoiceChatService, LoopbackSocketTunnel, NSLock, NSRecursiveLock, NSString, VideoConference;

@interface GKVoiceChatServicePrivate : NSObject <VideoConferenceDelegate, VideoConferenceRealTimeChannel>
{
    id <GKVoiceChatClient> client;
    _Bool outputMeteringEnabled;
    _Bool inputMeteringEnabled;
    _Bool microphoneMuted;
    unsigned int curCallID;
    int state;
    GKVoiceChatDictionary *incomingCallDict;
    GKVoiceChatDictionary *outgoingCallDict;
    NSString *sdp;
    struct tagCONNRESULT currentConnResult;
    LoopbackSocketTunnel *tunnel;
    NSRecursiveLock *stateLock;
    NSLock *clientLock;
    GKVoiceChatService *wrapperService;
    int didUseICE;
    int bundle;
    _Bool forceNoICE;
    VideoConference *conf;
    _Bool clientHasRTChannel;
    int chatMode;
    _Bool focus;
}

+ (id)defaultVoiceChatService;
@property GKVoiceChatService *wrapperService; // @synthesize wrapperService;
@property int state; // @synthesize state;
@property(nonatomic) id client; // @synthesize client;
- (id)remoteDisplayNameForCallID:(unsigned int)arg1;
- (id)localDisplayNameForCallID:(unsigned int)arg1;
@property(readonly) double remoteBitrate;
@property(readonly) double remoteFramerate;
@property(readonly) double localBitrate;
@property(readonly) double localFramerate;
@property(nonatomic) void *remoteVideoLayer;
@property(nonatomic) void *localVideoLayer;
- (void)vcArg:(id)arg1 sendRealTimeData:(id)arg2 toParticipantID:(id)arg3;
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned int)arg2 error:(id)arg3;
- (void)videoConference:(id)arg1 didStartSession:(_Bool)arg2 withCallID:(unsigned int)arg3 error:(id)arg4;
- (void)forceNoICE:(_Bool)arg1;
@property(getter=isFocus) _Bool focus; // @synthesize focus;
@property int chatMode; // @synthesize chatMode;
@property float remoteParticipantVolume;
@property(getter=isMicrophoneMuted) _Bool microphoneMuted;
@property(readonly, nonatomic) float inputMeterLevel;
@property(readonly, nonatomic) float outputMeterLevel;
@property(getter=isInputMeteringEnabled) _Bool inputMeteringEnabled; // @synthesize inputMeteringEnabled;
@property(getter=isOutputMeteringEnabled) _Bool outputMeteringEnabled; // @synthesize outputMeteringEnabled;
- (void)getNSError:(id *)arg1 code:(long long)arg2 description:(id)arg3 reason:(id)arg4;
- (void)getNSError:(id *)arg1 code:(long long)arg2 description:(id)arg3 hResult:(int)arg4;
- (int)startICEConnectionCheck:(id)arg1 isCaller:(_Bool)arg2 withCallID:(unsigned int)arg3;
- (int)startICEConnectionCheck:(id)arg1 isCaller:(_Bool)arg2;
- (id)createInvite:(id *)arg1 toParticipant:(id)arg2 callID:(unsigned int *)arg3;
- (id)createReplyUsingDictionary:(id)arg1 replyCode:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)inviteIsValid:(id)arg1;
- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;
- (void)resetState;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (void)informClientVoiceChatDidStop:(id)arg1;
- (void)informClientVoiceChatDidNotStartMainSelector:(id)arg1;
- (void)informClientVoiceChatDidNotStart:(id)arg1;
- (void)informClientVoiceChatDidStartMainSelector:(id)arg1;
- (void)informClientVoiceChatDidStart:(id)arg1;
- (void)informClientOfInviteFromParticipant:(id)arg1;
- (void)denyCallID:(unsigned int)arg1;
- (_Bool)acceptCallID:(unsigned int)arg1 error:(id *)arg2;
- (void)stopVoiceChatWithParticipantID:(id)arg1;
- (void)stopVoiceChatProc:(id)arg1;
- (_Bool)startVoiceChatWithParticipantID:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (void)cleanup;
- (id)init;

@end

