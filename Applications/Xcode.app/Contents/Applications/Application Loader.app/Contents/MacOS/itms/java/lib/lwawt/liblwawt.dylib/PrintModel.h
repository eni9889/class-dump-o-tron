//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPrintInfo;

@interface PrintModel : NSObject
{
    NSPrintInfo *fPrintInfo;
}

- (id)initWithPrintInfo:(id)arg1;
- (void)dealloc;
- (BOOL)runPageSetup;
- (BOOL)runJobSetup;
- (BOOL)runPrintLoopWithView:(id)arg1 waitUntilDone:(BOOL)arg2 withEnv:(const struct JNINativeInterface_ **)arg3;
- (BOOL)safePrintLoop:(id)arg1 withEnv:(const struct JNINativeInterface_ **)arg2;

@end

