//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AXLiveRegionNode : NSObject
{
    NSString *_label;
    NSString *_value;
    unsigned long long _traits;
}

+ (id)createNodeFromObject:(id)arg1;
@property(nonatomic) unsigned long long traits; // @synthesize traits=_traits;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;

@end

