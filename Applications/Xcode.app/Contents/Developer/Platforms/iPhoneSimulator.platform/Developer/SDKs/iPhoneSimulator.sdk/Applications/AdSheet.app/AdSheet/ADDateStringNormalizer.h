//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSRegularExpression;

@interface ADDateStringNormalizer : NSObject
{
    NSRegularExpression *_regularExpression;
}

+ (id)dateFromString:(id)arg1;
+ (id)normalizers;
+ (id)formatter;
@property(retain, nonatomic) NSRegularExpression *regularExpression; // @synthesize regularExpression=_regularExpression;
- (id)normalize:(id)arg1;
- (void)dealloc;

@end

