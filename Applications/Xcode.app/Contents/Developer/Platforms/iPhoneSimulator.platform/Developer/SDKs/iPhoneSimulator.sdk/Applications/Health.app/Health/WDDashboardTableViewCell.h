//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "WDDashboardChartItemDelegate.h"

@class NSDate, NSString, UIImageView, UILabel, WDChart, WDDashboardChartItem, WDDottedAverageBackgroundView;

@interface WDDashboardTableViewCell : UITableViewCell <WDDashboardChartItemDelegate>
{
    UIImageView *_backgroundImageView;
    UIImageView *_categoryIcon;
    UILabel *_averageLabel;
    UIImageView *_averageUnitIcon;
    UILabel *_currentValueLabel;
    UILabel *_lastUpdatedLabel;
    UILabel *_titleLabel;
    WDDottedAverageBackgroundView *_chartBackground;
    WDDashboardChartItem *_chartItem;
    WDChart *_chartView;
    long long _timeScope;
    NSDate *_displayStartDate;
    NSDate *_displayEndDate;
}

+ (id)_lastUpdatedFormatterWithoutYear;
+ (id)_lastUpdatedFormatterWithYear;
+ (double)preferredCellHeight;
@property(readonly, nonatomic) NSDate *displayEndDate; // @synthesize displayEndDate=_displayEndDate;
@property(readonly, nonatomic) NSDate *displayStartDate; // @synthesize displayStartDate=_displayStartDate;
@property(readonly, nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
@property(readonly, nonatomic) WDChart *chartView; // @synthesize chartView=_chartView;
@property(retain, nonatomic) WDDashboardChartItem *chartItem; // @synthesize chartItem=_chartItem;
- (void).cxx_destruct;
- (void)chartItemDidUpdate:(id)arg1;
- (id)_getLastUpdatedText;
- (id)_getCategoryIcon;
- (id)_currentValueTextWithValueFontSize:(double)arg1 unitFontSize:(double)arg2;
- (id)_getLastUpdatedDate;
- (id)_averageLabelText;
- (void)_updateUI;
- (void)_setupSubviews;
- (id)_timeAxisDescriptor;
- (void)setStartDate:(id)arg1 endDate:(id)arg2 displayStartDate:(id)arg3 displayEndDate:(id)arg4 timeScope:(long long)arg5;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 displayStartDate:(id)arg3 displayEndDate:(id)arg4 timeScope:(long long)arg5;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
