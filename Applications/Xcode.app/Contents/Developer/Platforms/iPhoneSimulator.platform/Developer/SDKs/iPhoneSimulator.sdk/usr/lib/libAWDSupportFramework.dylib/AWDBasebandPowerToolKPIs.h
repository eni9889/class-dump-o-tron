//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface AWDBasebandPowerToolKPIs : PBCodable <NSCopying>
{
    CDStruct_95bda58d _armUtilityPDFs;
    CDStruct_95bda58d _causeCodeBackgroundActivityARMUtilitys;
    CDStruct_95bda58d _causeCodeBackgroundActivityDurations;
    CDStruct_95bda58d _causeCodeCumulativeARMUtilitys;
    CDStruct_95bda58d _causeCodeCumulativeDurations;
    CDStruct_95bda58d _causeCodeMarginalCoverageARMUtilitys;
    CDStruct_95bda58d _causeCodeMarginalCoverageDurations;
    CDStruct_95bda58d _causeCodeOOSARMUtilitys;
    CDStruct_95bda58d _causeCodeOOSDurations;
    CDStruct_95bda58d _causeCodeRACHFailARMUtilitys;
    CDStruct_95bda58d _causeCodeRACHFailDurations;
    CDStruct_95bda58d _causeCodeStruckInDCHARMUtilitys;
    CDStruct_95bda58d _causeCodeStruckInDCHDurations;
    CDStruct_95bda58d _causeCodeTcXONotShuttingARMUtilitys;
    CDStruct_95bda58d _causeCodeTcXONotShuttingDurations;
    CDStruct_95bda58d _causeCodeUnknownARMUtilitys;
    CDStruct_95bda58d _causeCodeUnknownDurations;
    unsigned long long _timestamp;
    int _armUtilityThresholdPoint;
    int _radarPriority;
    struct {
        unsigned int timestamp:1;
        unsigned int armUtilityThresholdPoint:1;
        unsigned int radarPriority:1;
    } _has;
}

@property(nonatomic) int armUtilityThresholdPoint; // @synthesize armUtilityThresholdPoint=_armUtilityThresholdPoint;
@property(nonatomic) int radarPriority; // @synthesize radarPriority=_radarPriority;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setCauseCodeCumulativeDurations:(int *)arg1 count:(unsigned long long)arg2;
- (int)causeCodeCumulativeDurationsAtIndex:(unsigned long long)arg1;
- (void)addCauseCodeCumulativeDurations:(int)arg1;
- (void)clearCauseCodeCumulativeDurations;
@property(readonly, nonatomic) int *causeCodeCumulativeDurations;
@property(readonly, nonatomic) unsigned long long causeCodeCumulativeDurationsCount;
- (void)setCauseCodeCumulativeARMUtilitys:(int *)arg1 count:(unsigned long long)arg2;
- (int)causeCodeCumulativeARMUtilityAtIndex:(unsigned long long)arg1;
- (void)addCauseCodeCumulativeARMUtility:(int)arg1;
- (void)clearCauseCodeCumulativeARMUtilitys;
@property(readonly, nonatomic) int *causeCodeCumulativeARMUtilitys;
@property(readonly, nonatomic) unsigned long long causeCodeCumulativeARMUtilitysCount;
- (void)setCauseCodeUnknownDurations:(int *)arg1 count:(unsigned long long)arg2;
- (int)causeCodeUnknownDurationsAtIndex:(unsigned long long)arg1;
- (void)addCauseCodeUnknownDurations:(int)arg1;
- (void)clearCauseCodeUnknownDurations;
@property(readonly, nonatomic) int *causeCodeUnknownDurations;
@property(readonly, nonatomic) unsigned long long causeCodeUnknownDurationsCount;
- (void)setCauseCodeUnknownARMUtilitys:(int *)arg1 count:(unsigned long long)arg2;
- (int)causeCodeUnknownARMUtilityAtIndex:(unsigned long long)arg1;
- (void)addCauseCodeUnknownARMUtility:(int)arg1;
- (void)clearCauseCodeUnknownARMUtilitys;
@property(readonly, nonatomic) int *causeCodeUnknownARMUtilitys;
@property(readonly, nonatomic) unsigned long long causeCodeUnknownARMUtilitysCount;
- (void)setCauseCodeMarginalCoverageDurations:(int *)arg1 count:(unsigned long long)arg2;
- (int)causeCodeMarginalCoverageDurationsAtIndex:(unsigned long long)arg1;
- (void)addCauseCodeMarginalCoverageDurations:(int)arg1;
- (void)clearCauseCodeMarginalCoverageDurations;
@property(readonly, nonatomic) int *causeCodeMarginalCoverageDurations;
@property(readonly, nonatomic) unsigned long long causeCodeMarginalCoverageDurationsCount;
- (void)setCauseCodeMarginalCoverageARMUtilitys:(int *)arg1 count:(unsigned long long)arg2;
- (int)causeCodeMarginalCoverageARMUtilityAtIndex:(unsigned long long)arg1;
- (void)addCauseCodeMarginalCoverageARMUtility:(int)arg1;
- (void)clearCauseCodeMarginalCoverageARMUtilitys;
@property(readonly, nonatomic) int *causeCodeMarginalCoverageARMUtilitys;
@property(readonly, nonatomic) unsigned long long causeCodeMarginalCoverageARMUtilitysCount;
- (void)setCauseCodeStruckInDCHDurations:(int *)arg1 count:(unsigned long long)arg2;
- (int)causeCodeStruckInDCHDurationsAtIndex:(unsigned long long)arg1;
- (void)addCauseCodeStruckInDCHDurations:(int)arg1;
- (void)clearCauseCodeStruckInDCHDurations;
@property(readonly, nonatomic) int *causeCodeStruckInDCHDurations;
@property(readonly, nonatomic) unsigned long long causeCodeStruckInDCHDurationsCount;
- (void)setCauseCodeStruckInDCHARMUtilitys:(int *)arg1 count:(unsigned long long)arg2;
- (int)causeCodeStruckInDCHARMUtilityAtIndex:(unsigned long long)arg1;
- (void)addCauseCodeStruckInDCHARMUtility:(int)arg1;
- (void)clearCauseCodeStruckInDCHARMUtilitys;
@property(readonly, nonatomic) int *causeCodeStruckInDCHARMUtilitys;
@property(readonly, nonatomic) unsigned long long causeCodeStruckInDCHARMUtilitysCount;
- (void)setCauseCodeRACHFailDurations:(int *)arg1 count:(unsigned long long)arg2;
- (int)causeCodeRACHFailDurationsAtIndex:(unsigned long long)arg1;
- (void)addCauseCodeRACHFailDurations:(int)arg1;
- (void)clearCauseCodeRACHFailDurations;
@property(readonly, nonatomic) int *causeCodeRACHFailDurations;
@property(readonly, nonatomic) unsigned long long causeCodeRACHFailDurationsCount;
- (void)setCauseCodeRACHFailARMUtilitys:(int *)arg1 count:(unsigned long long)arg2;
- (int)causeCodeRACHFailARMUtilityAtIndex:(unsigned long long)arg1;
- (void)addCauseCodeRACHFailARMUtility:(int)arg1;
- (void)clearCauseCodeRACHFailARMUtilitys;
@property(readonly, nonatomic) int *causeCodeRACHFailARMUtilitys;
@property(readonly, nonatomic) unsigned long long causeCodeRACHFailARMUtilitysCount;
- (void)setCauseCodeBackgroundActivityDurations:(int *)arg1 count:(unsigned long long)arg2;
- (int)causeCodeBackgroundActivityDurationsAtIndex:(unsigned long long)arg1;
- (void)addCauseCodeBackgroundActivityDurations:(int)arg1;
- (void)clearCauseCodeBackgroundActivityDurations;
@property(readonly, nonatomic) int *causeCodeBackgroundActivityDurations;
@property(readonly, nonatomic) unsigned long long causeCodeBackgroundActivityDurationsCount;
- (void)setCauseCodeBackgroundActivityARMUtilitys:(int *)arg1 count:(unsigned long long)arg2;
- (int)causeCodeBackgroundActivityARMUtilityAtIndex:(unsigned long long)arg1;
- (void)addCauseCodeBackgroundActivityARMUtility:(int)arg1;
- (void)clearCauseCodeBackgroundActivityARMUtilitys;
@property(readonly, nonatomic) int *causeCodeBackgroundActivityARMUtilitys;
@property(readonly, nonatomic) unsigned long long causeCodeBackgroundActivityARMUtilitysCount;
- (void)setCauseCodeTcXONotShuttingDurations:(int *)arg1 count:(unsigned long long)arg2;
- (int)causeCodeTcXONotShuttingDurationsAtIndex:(unsigned long long)arg1;
- (void)addCauseCodeTcXONotShuttingDurations:(int)arg1;
- (void)clearCauseCodeTcXONotShuttingDurations;
@property(readonly, nonatomic) int *causeCodeTcXONotShuttingDurations;
@property(readonly, nonatomic) unsigned long long causeCodeTcXONotShuttingDurationsCount;
- (void)setCauseCodeTcXONotShuttingARMUtilitys:(int *)arg1 count:(unsigned long long)arg2;
- (int)causeCodeTcXONotShuttingARMUtilityAtIndex:(unsigned long long)arg1;
- (void)addCauseCodeTcXONotShuttingARMUtility:(int)arg1;
- (void)clearCauseCodeTcXONotShuttingARMUtilitys;
@property(readonly, nonatomic) int *causeCodeTcXONotShuttingARMUtilitys;
@property(readonly, nonatomic) unsigned long long causeCodeTcXONotShuttingARMUtilitysCount;
- (void)setCauseCodeOOSDurations:(int *)arg1 count:(unsigned long long)arg2;
- (int)causeCodeOOSDurationsAtIndex:(unsigned long long)arg1;
- (void)addCauseCodeOOSDurations:(int)arg1;
- (void)clearCauseCodeOOSDurations;
@property(readonly, nonatomic) int *causeCodeOOSDurations;
@property(readonly, nonatomic) unsigned long long causeCodeOOSDurationsCount;
- (void)setCauseCodeOOSARMUtilitys:(int *)arg1 count:(unsigned long long)arg2;
- (int)causeCodeOOSARMUtilityAtIndex:(unsigned long long)arg1;
- (void)addCauseCodeOOSARMUtility:(int)arg1;
- (void)clearCauseCodeOOSARMUtilitys;
@property(readonly, nonatomic) int *causeCodeOOSARMUtilitys;
@property(readonly, nonatomic) unsigned long long causeCodeOOSARMUtilitysCount;
- (void)setArmUtilityPDFs:(int *)arg1 count:(unsigned long long)arg2;
- (int)armUtilityPDFAtIndex:(unsigned long long)arg1;
- (void)addArmUtilityPDF:(int)arg1;
- (void)clearArmUtilityPDFs;
@property(readonly, nonatomic) int *armUtilityPDFs;
@property(readonly, nonatomic) unsigned long long armUtilityPDFsCount;
@property(nonatomic) _Bool hasArmUtilityThresholdPoint;
@property(nonatomic) _Bool hasRadarPriority;
@property(nonatomic) _Bool hasTimestamp;
- (void)dealloc;

@end

