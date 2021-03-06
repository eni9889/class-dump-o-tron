//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface GEOPDReviewFilter : PBCodable <NSCopying>
{
    CDStruct_13868713 *_photoSizeFilters;
    unsigned long long _photoSizeFiltersCount;
    unsigned long long _photoSizeFiltersSpace;
}

- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setPhotoSizeFilters:(CDStruct_13868713 *)arg1 count:(unsigned long long)arg2;
- (CDStruct_13868713)photoSizeFilterAtIndex:(unsigned long long)arg1;
- (void)addPhotoSizeFilter:(CDStruct_13868713)arg1;
- (void)clearPhotoSizeFilters;
@property(readonly, nonatomic) CDStruct_13868713 *photoSizeFilters;
@property(readonly, nonatomic) unsigned long long photoSizeFiltersCount;
- (void)dealloc;

@end

