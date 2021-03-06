//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/SFUDataRepresentation.h>

@class TSPDatabase;

__attribute__((visibility("hidden")))
@interface TSPDatabaseDataRepresentation : SFUDataRepresentation
{
    TSPDatabase *_database;
    long long _identifier;
}

- (void).cxx_destruct;
- (struct sqlite3_blob *)_openBlob;
- (struct ZeroCopyInputStream *)createProtobufInputStream;
- (_Bool)hasSameLocationAs:(id)arg1;
- (id)inputStream;
- (long long)dataLength;
- (id)initWithDatabase:(id)arg1 identifier:(long long)arg2;

@end

