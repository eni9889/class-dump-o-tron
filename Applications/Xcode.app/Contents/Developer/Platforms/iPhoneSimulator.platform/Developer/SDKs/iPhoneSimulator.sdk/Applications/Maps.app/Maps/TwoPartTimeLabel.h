//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TwoPartTopBarLabel.h"

@class NSTimeZone;

__attribute__((visibility("hidden")))
@interface TwoPartTimeLabel : TwoPartTopBarLabel
{
    double _remainingTime;
    NSTimeZone *_destinationTimezone;
}

@property(retain, nonatomic) NSTimeZone *destinationTimezone; // @synthesize destinationTimezone=_destinationTimezone;
@property(nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
- (void).cxx_destruct;
- (void)updateContent;

@end

