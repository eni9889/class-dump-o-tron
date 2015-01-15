//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MLDDAAPImportOperation.h"

@class NSMutableDictionary;

@interface MLDMatchImportOperation : MLDDAAPImportOperation
{
    float _progressRatio;
    NSMutableDictionary *_cloudIDsToPIDs;
}

- (void).cxx_destruct;
- (void)updateImportProgress:(float)arg1;
- (_Bool)importPlaylistElement:(id)arg1 toLibrary:(id)arg2 usingConnection:(id)arg3 orphanContainers:(id *)arg4;
- (shared_ptr_7b646331)importItemFromDAAPElement:(shared_ptr_0d630658)arg1;
- (_Bool)_performMatchImportWithTransaction:(id)arg1;
- (void)main;
- (unsigned long long)importSource;

@end
