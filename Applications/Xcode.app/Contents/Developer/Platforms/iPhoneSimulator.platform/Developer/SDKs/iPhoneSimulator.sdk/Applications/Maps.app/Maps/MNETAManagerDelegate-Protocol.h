//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOETARoute, GEOETATrafficUpdateRequest, GEOETATrafficUpdateResponse, GEORoute, MNETAManager, NSError;

@protocol MNETAManagerDelegate <NSObject>
- (void)etaManagerUpdatedTrafficIncidents:(MNETAManager *)arg1;
- (void)etaManager:(MNETAManager *)arg1 failedToReceiveETAResponse:(NSError *)arg2;
- (void)etaManager:(MNETAManager *)arg1 updatedRouteFromETARoute:(GEOETARoute *)arg2 etaBehavior:(long long)arg3 routeRemainingDistance:(double)arg4 routeRemainingTime:(unsigned int)arg5;
- (void)etaManager:(MNETAManager *)arg1 receivedETAResponse:(GEOETATrafficUpdateResponse *)arg2;
- (void)etaManager:(MNETAManager *)arg1 willSendETARequest:(GEOETATrafficUpdateRequest *)arg2;
- (void)etaManager:(MNETAManager *)arg1 recommendsNewRoute:(GEORoute *)arg2 etaRoute:(GEOETARoute *)arg3 oldEstimatedTime:(unsigned int)arg4 newEstimatedTime:(unsigned int)arg5;
- (void)etaManager:(MNETAManager *)arg1 forceSwitchToNewRoute:(GEORoute *)arg2 etaRoute:(GEOETARoute *)arg3;
- (void)etaManagerUpdatedETATime:(MNETAManager *)arg1;
@end
