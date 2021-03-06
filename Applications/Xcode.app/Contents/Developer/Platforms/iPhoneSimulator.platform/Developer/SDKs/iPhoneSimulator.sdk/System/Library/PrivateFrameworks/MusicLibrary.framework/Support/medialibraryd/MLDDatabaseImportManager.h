//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSMutableArray, NSOperationQueue;

@interface MLDDatabaseImportManager : NSObject
{
    NSOperationQueue *_importOperationQueue;
    NSMutableArray *_suspendedImportOperations;
    NSError *_lastImportError;
}

@property(retain, nonatomic) NSError *lastImportError; // @synthesize lastImportError=_lastImportError;
- (void).cxx_destruct;
- (void)_handleImportOperationCancelled:(id)arg1;
- (void)_handleImportOperationCompleted:(id)arg1;
- (id)_suspendedImportOperations;
- (id)_importOperations;
- (void)resumeSuspendedImportOperations;
- (void)suspendImportOperations;
- (void)cancelImportOperationsForSource:(unsigned long long)arg1;
- (void)cancelImportOperationsOriginatingFromClient:(id)arg1;
- (void)cancelAllImportOperations;
- (float)currentOperationProgressWithError:(id *)arg1;
- (void)performImport:(id)arg1 fromSource:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) unsigned long long suspendedOperationsCount;
@property(readonly, nonatomic) unsigned long long operationsCount;
- (id)init;

@end

