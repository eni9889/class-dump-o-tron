//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMLogItem.h"

@class NSDate, NSNumber;

@interface CMNatalieData : CMLogItem
{
    double fStartDate;
    double fNatalies;
    long long fSession;
    long long fRecordId;
}

- (id)description;
@property(readonly, nonatomic) long long recordId;
@property(readonly, nonatomic) long long session;
@property(readonly, nonatomic) NSNumber *natalies;
@property(readonly, nonatomic) NSDate *startDate;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(double)arg1 natalies:(double)arg2 session:(long long)arg3 recordId:(long long)arg4 timestamp:(double)arg5;

@end

