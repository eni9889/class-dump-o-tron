//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HKDataUnit, HKHealthStore, NSArray, NSDate, NSNumber;

@interface WDDataProvider : NSObject
{
    id <WDDataProviderDelegate> _delegate;
    HKHealthStore *_healthStore;
    HKDataUnit *_dataUnit;
    NSArray *_historicalData;
    NSNumber *_currentValue;
    NSNumber *_averageValue;
    NSNumber *_minValue;
    NSNumber *_maxValue;
    NSDate *_lastUpdatedDate;
    NSDate *_startDate;
    NSDate *_endDate;
    long long _timeScope;
    long long _chartStyle;
}

@property(readonly, nonatomic) long long chartStyle; // @synthesize chartStyle=_chartStyle;
@property(readonly, nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
@property(readonly, nonatomic) NSNumber *maxValue; // @synthesize maxValue=_maxValue;
@property(readonly, nonatomic) NSNumber *minValue; // @synthesize minValue=_minValue;
@property(readonly, nonatomic) NSNumber *averageValue; // @synthesize averageValue=_averageValue;
@property(readonly, nonatomic) NSNumber *currentValue; // @synthesize currentValue=_currentValue;
@property(readonly, nonatomic) NSArray *historicalData; // @synthesize historicalData=_historicalData;
@property(readonly, nonatomic) HKDataUnit *dataUnit; // @synthesize dataUnit=_dataUnit;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(nonatomic) __weak id <WDDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateAverage:(id)arg1 min:(id)arg2 max:(id)arg3;
- (void)updateHistoricalData:(id)arg1;
- (void)updateCurrentValueWithValue:(id)arg1 date:(id)arg2;
- (void)setStartDate:(id)arg1 endDate:(id)arg2 timeScope:(long long)arg3;
- (void)stopQueries;
- (void)restartQueries;
- (id)initWithDataUnit:(id)arg1 chartStyle:(long long)arg2 healthStore:(id)arg3;

@end
