//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class NSNumber, NSString;

@interface ASResolveRecipientsAvailabilityItem : ASItem
{
    NSNumber *_easStatus;
    NSString *_mergedFreeBusy;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
@property(retain, nonatomic) NSString *mergedFreeBusy; // @synthesize mergedFreeBusy=_mergedFreeBusy;
- (void)setEASStatus:(id)arg1;
@property(retain, nonatomic) NSNumber *easStatus; // @synthesize easStatus=_easStatus;
- (void).cxx_destruct;
- (id)description;

@end
