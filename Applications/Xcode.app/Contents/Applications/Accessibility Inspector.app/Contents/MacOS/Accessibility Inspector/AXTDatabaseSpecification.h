//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AXTDatabaseSpecification : NSObject
{
    NSString *_literalName;
    NSString *_cocoaAvailability;
    NSString *_carbonAvailability;
}

@property(retain, nonatomic) NSString *carbonAvailability; // @synthesize carbonAvailability=_carbonAvailability;
@property(retain, nonatomic) NSString *cocoaAvailability; // @synthesize cocoaAvailability=_cocoaAvailability;
@property(retain, nonatomic) NSString *literalName; // @synthesize literalName=_literalName;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)_initWithName:(id)arg1 dictionary:(id)arg2;

@end

