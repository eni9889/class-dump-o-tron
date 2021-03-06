//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEORPCorrectedCoordinate, GEORPCorrectedLabel, GEORPCorrectedSearch, GEORPDirectionsProblem, GEORPMapLocation, GEORPPlaceProblem, NSMutableArray, NSString;

@interface GEORPProblemCorrections : PBCodable <NSCopying>
{
    NSString *_comments;
    GEORPCorrectedCoordinate *_correctedCoordinate;
    NSMutableArray *_correctedFields;
    GEORPCorrectedLabel *_correctedLabel;
    GEORPMapLocation *_correctedMapLocation;
    GEORPCorrectedSearch *_correctedSearch;
    GEORPDirectionsProblem *_directionsProblem;
    NSMutableArray *_photos;
    GEORPPlaceProblem *_placeProblem;
}

@property(retain, nonatomic) GEORPDirectionsProblem *directionsProblem; // @synthesize directionsProblem=_directionsProblem;
@property(retain, nonatomic) GEORPPlaceProblem *placeProblem; // @synthesize placeProblem=_placeProblem;
@property(retain, nonatomic) NSMutableArray *photos; // @synthesize photos=_photos;
@property(retain, nonatomic) NSString *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) GEORPMapLocation *correctedMapLocation; // @synthesize correctedMapLocation=_correctedMapLocation;
@property(retain, nonatomic) GEORPCorrectedSearch *correctedSearch; // @synthesize correctedSearch=_correctedSearch;
@property(retain, nonatomic) GEORPCorrectedCoordinate *correctedCoordinate; // @synthesize correctedCoordinate=_correctedCoordinate;
@property(retain, nonatomic) GEORPCorrectedLabel *correctedLabel; // @synthesize correctedLabel=_correctedLabel;
@property(retain, nonatomic) NSMutableArray *correctedFields; // @synthesize correctedFields=_correctedFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDirectionsProblem;
@property(readonly, nonatomic) _Bool hasPlaceProblem;
- (id)photoAtIndex:(unsigned long long)arg1;
- (unsigned long long)photosCount;
- (void)addPhoto:(id)arg1;
- (void)clearPhotos;
@property(readonly, nonatomic) _Bool hasComments;
@property(readonly, nonatomic) _Bool hasCorrectedMapLocation;
@property(readonly, nonatomic) _Bool hasCorrectedSearch;
@property(readonly, nonatomic) _Bool hasCorrectedCoordinate;
@property(readonly, nonatomic) _Bool hasCorrectedLabel;
- (id)correctedFieldAtIndex:(unsigned long long)arg1;
- (unsigned long long)correctedFieldsCount;
- (void)addCorrectedField:(id)arg1;
- (void)clearCorrectedFields;
- (void)dealloc;

@end

