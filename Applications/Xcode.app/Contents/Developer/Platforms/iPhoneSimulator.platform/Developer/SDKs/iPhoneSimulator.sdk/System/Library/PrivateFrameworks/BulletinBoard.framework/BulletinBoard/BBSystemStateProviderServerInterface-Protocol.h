//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@protocol BBSystemStateProviderServerInterface <NSObject>
- (void)noteRestrictedSectionIDsDidChange:(NSSet *)arg1;
- (void)noteChangeOfState:(unsigned long long)arg1 newValue:(_Bool)arg2;
- (void)noteOccurrenceOfEvent:(unsigned long long)arg1;
@end

