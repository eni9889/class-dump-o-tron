//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GKReachability : NSObject
{
    _Bool localWiFiRef;
    struct __SCNetworkReachability *reachabilityRef;
}

+ (id)_gkReachabilityForLocalWiFi;
+ (id)_gkReachabilityForInternetConnection;
+ (id)_gkReachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)_gkReachabilityWithHostName:(id)arg1;
- (int)_gkCurrentReachabilityStatus;
- (_Bool)_gkConnectionRequired;
- (int)networkStatusForFlags:(unsigned int)arg1;
- (int)localWiFiStatusForFlags:(unsigned int)arg1;
- (void)dealloc;
- (void)_gkStopNotifier;
- (_Bool)_gkStartNotifier;

@end

