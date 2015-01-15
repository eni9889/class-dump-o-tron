//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEDebugNavigableModel.h"

@class IDELaunchSession, NSArray, NSNumber, NSString;

@interface DBGCompressedStackFrame : NSObject <IDEDebugNavigableModel>
{
    NSArray *_representedStackFrames;
}

@property(readonly, copy) NSArray *representedStackFrames; // @synthesize representedStackFrames=_representedStackFrames;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly) IDELaunchSession *launchSession;
@property(readonly, copy) NSString *associatedProcessUUID;
@property(readonly) BOOL hasSymbols;
@property(readonly, copy) NSString *displayName;
@property(readonly, copy) NSNumber *frameNumber;
@property(readonly, copy) NSString *name;
- (id)initWithStackFrames:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
