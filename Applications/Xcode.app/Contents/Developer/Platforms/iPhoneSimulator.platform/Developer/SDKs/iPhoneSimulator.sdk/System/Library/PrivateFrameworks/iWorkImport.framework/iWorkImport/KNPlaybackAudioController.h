//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSKMediaPlayerControllerDelegate.h"

@class AVQueuePlayer, KNSoundtrack, NSString, TSKAVQueuePlayerController;

__attribute__((visibility("hidden")))
@interface KNPlaybackAudioController : NSObject <TSKMediaPlayerControllerDelegate>
{
    KNSoundtrack *mSoundtrack;
    AVQueuePlayer *mAudioPlayer;
    TSKAVQueuePlayerController *mPlayerController;
    unsigned int mAudioPlaybackIsQueued:1;
    unsigned int mIsObservingPlayerItemStatus:1;
    _Bool mIsPlaying;
    _Bool mIsPaused;
}

@property(readonly, nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=mIsPlaying;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)playbackDidStopForPlayerController:(id)arg1;
- (void)playerController:(id)arg1 playbackDidFailWithError:(id)arg2;
- (void)p_tearDownAudioPlayback;
- (void)p_startAudioPlayback;
- (void)p_initAudioPlaybackAtMediaIndex:(unsigned long long)arg1;
- (void)resume;
- (void)pause;
- (void)interruptAndReset;
- (void)stop;
- (void)startAtMediaIndex:(unsigned long long)arg1 time:(double)arg2;
- (void)start;
- (void)dealloc;
- (id)initWithSoundtrack:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

