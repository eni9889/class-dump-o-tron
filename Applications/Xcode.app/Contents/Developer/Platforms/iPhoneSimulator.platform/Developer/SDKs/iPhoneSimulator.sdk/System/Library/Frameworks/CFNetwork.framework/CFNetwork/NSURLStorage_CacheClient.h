//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLStorageCacheClient.h"

@class NSData, NSString, NSXPCConnection, NSXPCInterface;

__attribute__((visibility("hidden")))
@interface NSURLStorage_CacheClient : NSObject <NSURLStorageCacheClient>
{
    NSXPCInterface *_netStoreInterface;
    NSXPCConnection *_networkStorageConnection;
    NSString *_taskManagerIdentifier;
    NSString *_path;
    struct __CFURLCache *_cfCache;
    NSData *_sandboxExtensionToken;
    long long _storageSize;
}

- (void)notifyCachedURLResponseBecameFileBacked:(id)arg1 filePath:(id)arg2 forUUID:(id)arg3;
- (void)setMinSizeForVMCachedResource:(long long)arg1;
- (long long)currentDiskUsage;
- (void)copyAllPartitionNamesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)copyHostNamesForOptionalPartition:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)deleteAllHostNames:(id)arg1 forOptionalPartition:(id)arg2;
- (void)deleteResponsesSinceDate:(id)arg1;
- (void)deleteAllResponses;
- (void)deleteResponseForRequestWithKey:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)cachedResponseForKey:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addCachedResponseWithDictionary:(id)arg1 key:(id)arg2;
- (void)addCachedResponse:(id)arg1 key:(id)arg2;
- (_Bool)createStorageTaskManagerForPath:(id)arg1 maxSize:(long long)arg2 extension:(id)arg3 withIdentifier:(id)arg4;
- (void)setMaxSize:(long long)arg1;
- (id)getPath;
- (void)_reconnectWithStorageServer;
- (void)_disassociateCFURLCacheInstance;
- (void)_associateCFURLCacheInstance:(struct __CFURLCache *)arg1;
- (void)dealloc;
- (id)initWithCache:(struct __CFURLCache *)arg1;

@end

