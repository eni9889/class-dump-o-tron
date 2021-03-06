//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "Clock.h"

@class AnalogClockView, DigitalClockLabel, NSTimeZone, UILabel;

@interface WorldClockCellView : UIView <Clock>
{
    NSTimeZone *_timeZone;
    long long _nowInMinutes;
    _Bool _editing;
    _Bool _started;
    id <WorldClockCellViewDelegate> _delegate;
    long long _style;
    AnalogClockView *_analogClock;
    DigitalClockLabel *_digitalClock;
    UILabel *_nameLabel;
    UILabel *_combinedLabel;
}

+ (double)defaultCellHeight;
+ (id)combinedStringFromDate:(id)arg1 withTimezoneOffset:(long long)arg2 dayText:(id *)arg3 hourText:(id *)arg4 usesSeparateLines:(_Bool)arg5;
@property(readonly, nonatomic) _Bool started; // @synthesize started=_started;
@property(readonly, nonatomic) UILabel *combinedLabel; // @synthesize combinedLabel=_combinedLabel;
@property(readonly, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(readonly, nonatomic) DigitalClockLabel *digitalClock; // @synthesize digitalClock=_digitalClock;
@property(readonly, nonatomic) AnalogClockView *analogClock; // @synthesize analogClock=_analogClock;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) id <WorldClockCellViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (id)stringFromDate:(id)arg1 withTimezoneOffset:(long long)arg2;
- (void)setTimeZone:(id)arg1;
- (void)updateTime;
- (double)coarseUpdateInterval;
- (double)updateInterval;
- (void)updateTimeContinuously:(long long)arg1;
@property(readonly, nonatomic) int runMode;
- (void)localeChange:(id)arg1;
- (void)stop;
- (void)start;
- (void)significantTimeChange:(id)arg1;
- (void)setStyle:(long long)arg1 animated:(_Bool)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

