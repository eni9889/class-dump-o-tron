//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface CKDPInvitationQueryRequest : PBRequest <NSCopying>
{
    int _queryType;
    _Bool _queryAllContainers;
    struct {
        unsigned int queryType:1;
        unsigned int queryAllContainers:1;
    } _has;
}

+ (id)options;
@property(nonatomic) int queryType; // @synthesize queryType=_queryType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasQueryAllContainers;
@property(nonatomic) _Bool queryAllContainers; // @synthesize queryAllContainers=_queryAllContainers;
@property(nonatomic) _Bool hasQueryType;

@end
