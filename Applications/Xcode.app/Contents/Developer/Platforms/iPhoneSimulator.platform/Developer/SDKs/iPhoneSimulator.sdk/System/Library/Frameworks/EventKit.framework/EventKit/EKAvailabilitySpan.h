//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface EKAvailabilitySpan : NSObject
{
    long long _type;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)description;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 type:(long long)arg3;
- (id)init;

@end
