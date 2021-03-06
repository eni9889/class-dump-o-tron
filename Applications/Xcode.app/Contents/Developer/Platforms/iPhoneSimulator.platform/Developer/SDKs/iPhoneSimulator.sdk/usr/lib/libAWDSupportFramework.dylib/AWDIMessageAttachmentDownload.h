//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface AWDIMessageAttachmentDownload : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _attachmentSize;
    unsigned int _connectionType;
    unsigned int _downloadDuration;
    int _fzError;
    int _genericError;
    NSString *_guid;
    int _linkQuality;
    unsigned int _messageError;
    unsigned int _tokenError;
    struct {
        unsigned int timestamp:1;
        unsigned int attachmentSize:1;
        unsigned int connectionType:1;
        unsigned int downloadDuration:1;
        unsigned int fzError:1;
        unsigned int genericError:1;
        unsigned int linkQuality:1;
        unsigned int messageError:1;
        unsigned int tokenError:1;
    } _has;
}

@property(nonatomic) unsigned int attachmentSize; // @synthesize attachmentSize=_attachmentSize;
@property(nonatomic) unsigned int connectionType; // @synthesize connectionType=_connectionType;
@property(nonatomic) int linkQuality; // @synthesize linkQuality=_linkQuality;
@property(nonatomic) unsigned int downloadDuration; // @synthesize downloadDuration=_downloadDuration;
@property(nonatomic) int genericError; // @synthesize genericError=_genericError;
@property(nonatomic) unsigned int tokenError; // @synthesize tokenError=_tokenError;
@property(nonatomic) unsigned int messageError; // @synthesize messageError=_messageError;
@property(nonatomic) int fzError; // @synthesize fzError=_fzError;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasAttachmentSize;
@property(nonatomic) _Bool hasConnectionType;
@property(nonatomic) _Bool hasLinkQuality;
@property(nonatomic) _Bool hasDownloadDuration;
@property(nonatomic) _Bool hasGenericError;
@property(nonatomic) _Bool hasTokenError;
@property(nonatomic) _Bool hasMessageError;
@property(nonatomic) _Bool hasFzError;
@property(nonatomic) _Bool hasTimestamp;
@property(readonly, nonatomic) _Bool hasGuid;
- (void)dealloc;

@end

