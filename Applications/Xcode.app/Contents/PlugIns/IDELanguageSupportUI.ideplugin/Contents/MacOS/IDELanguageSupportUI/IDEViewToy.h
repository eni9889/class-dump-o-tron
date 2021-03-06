//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDELanguageSupportUI/IDEToy.h>

@class IDEViewToyRemoteViewDescription, NSArray, NSImage, NSMutableArray, NSObject<OS_dispatch_source>, NSString;

@interface IDEViewToy : IDEToy
{
    id <IDEToyRegistrationToken> _registrationToken;
    id <IDEToyRegistrationToken> _capturedImageRegistrationToken;
    long long _currentExecutionGeneration;
    NSObject<OS_dispatch_source> *_captureTimer;
    NSMutableArray *_windowImagesForCurrentGeneration;
    NSImage *_viewSnapshot;
    BOOL _lastExecutionDidComplete;
    NSString *_subjectIdentifier;
    unsigned long long _remoteViewState;
    IDEViewToyRemoteViewDescription *_remoteViewDescription;
    struct CGSize _lastRemoteViewSize;
}

@property(readonly) NSImage *viewSnapshot; // @synthesize viewSnapshot=_viewSnapshot;
@property struct CGSize lastRemoteViewSize; // @synthesize lastRemoteViewSize=_lastRemoteViewSize;
@property(retain) IDEViewToyRemoteViewDescription *remoteViewDescription; // @synthesize remoteViewDescription=_remoteViewDescription;
@property(readonly) unsigned long long remoteViewState; // @synthesize remoteViewState=_remoteViewState;
@property(readonly) BOOL lastExecutionDidComplete; // @synthesize lastExecutionDidComplete=_lastExecutionDidComplete;
@property(readonly, copy) NSString *subjectIdentifier; // @synthesize subjectIdentifier=_subjectIdentifier;
- (void).cxx_destruct;
- (BOOL)isLiveToy;
- (void)processPlaygroundResult:(id)arg1;
- (void)executionGenerationDidEndAndCompleted:(BOOL)arg1;
- (void)executionGenerationWillEnd;
- (void)beginExecutionGeneration:(unsigned long long)arg1;
- (id)viewControllerForDisplayingToy;
- (void)setToybox:(id)arg1;
@property(readonly) NSArray *windowImagesForCurrentGeneration;
- (id)initWithSubjectIdentifier:(id)arg1;

@end

