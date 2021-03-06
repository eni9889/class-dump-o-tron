//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface FTServerBag : NSObject
{
    long long _type;
}

+ (id)sharedInstanceForBagType:(long long)arg1;
+ (id)_sharedInstance;
+ (id)_sharedInstanceForType:(long long)arg1;
+ (id)sharedInstance;
@property(readonly) _Bool isServerAvailable;
- (id)urlWithKey:(id)arg1;
- (id)objectForKey:(id)arg1;
@property(readonly) _Bool isInDebilitatedMode;
@property(readonly) _Bool allowUnsignedBags;
@property(readonly) _Bool allowSelfSignedCertificates;
@property(readonly, retain) NSString *apsEnvironmentName;
@property(readonly, retain) NSURL *bagURL;
- (id)_bag;
- (id)_cachedBag;
@property(readonly) _Bool isLoaded;
@property(readonly) _Bool isLoading;
- (void)forceBagLoad;
- (void)startBagLoad;
- (void)dealloc;
- (id)initWithBagType:(long long)arg1;

@end

