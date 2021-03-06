//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary, NSString;

@interface AXIPCMessage : NSObject <NSSecureCoding>
{
    int _key;
    unsigned int _clientPort;
    NSDictionary *_payload;
    CDStruct_4c969caf _auditToken;
}

+ (_Bool)supportsSecureCoding;
+ (id)archivedMessageFromData:(id)arg1;
@property(nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
@property(nonatomic) unsigned int clientPort; // @synthesize clientPort=_clientPort;
@property(retain, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
@property(nonatomic) int key; // @synthesize key=_key;
- (id)description;
- (void)dealloc;
@property(readonly, nonatomic) NSString *senderBundleId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(int)arg1 payload:(id)arg2 keyDebugInfo:(id)arg3;
- (id)initWithKey:(int)arg1 payload:(id)arg2;
- (id)initWithKey:(int)arg1;

@end

