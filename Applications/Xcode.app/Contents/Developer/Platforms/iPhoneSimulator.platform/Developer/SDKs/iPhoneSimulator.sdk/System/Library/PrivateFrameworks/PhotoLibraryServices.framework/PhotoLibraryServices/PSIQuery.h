//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString, PSIDatabase;

@interface PSIQuery : NSObject
{
    PSIDatabase *_idx;
    NSObject<OS_dispatch_queue> *_syncQueue;
    _Bool _didStart;
    _Bool _isCanceled;
    int _queryId;
    NSString *_searchText;
}

@property(readonly, nonatomic) int queryId; // @synthesize queryId=_queryId;
@property(readonly, copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(readonly, getter=isCanceled) _Bool canceled;
- (void)cancel;
- (void)runWithResultsHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithQueryId:(int)arg1 index:(id)arg2 searchText:(id)arg3;

@end

