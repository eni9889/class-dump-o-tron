//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNBannerItem;

@interface MNBannerDismissal : NSObject
{
    int _reason;
    MNBannerItem *_bannerItem;
}

@property(nonatomic) int reason; // @synthesize reason=_reason;
@property(retain, nonatomic) MNBannerItem *bannerItem; // @synthesize bannerItem=_bannerItem;
- (void).cxx_destruct;
- (id)initWithBannerItem:(id)arg1 reason:(int)arg2;

@end

