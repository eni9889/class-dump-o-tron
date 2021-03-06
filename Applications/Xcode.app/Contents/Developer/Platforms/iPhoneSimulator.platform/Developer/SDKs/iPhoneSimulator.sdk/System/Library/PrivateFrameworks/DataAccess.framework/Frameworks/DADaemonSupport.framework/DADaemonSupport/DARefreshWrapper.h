//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DATokenRegistrationDelegate.h"

@class NSDate, NSMutableSet, NSTimer, PCConnectionManager;

@interface DARefreshWrapper : NSObject <DATokenRegistrationDelegate>
{
    int _pushState;
    int _curStyle;
    id <DARefreshManagerDelegate> _delegate;
    NSDate *_pushRegistrationTime;
    PCConnectionManager *_manager;
    NSMutableSet *_tokenRegistrations;
    NSTimer *_retryTimer;
    NSTimer *_dailyRefreshTimer;
}

@property(retain, nonatomic) NSTimer *dailyRefreshTimer; // @synthesize dailyRefreshTimer=_dailyRefreshTimer;
@property(retain, nonatomic) NSTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(retain, nonatomic) NSMutableSet *tokenRegistrations; // @synthesize tokenRegistrations=_tokenRegistrations;
@property(nonatomic) int curStyle; // @synthesize curStyle=_curStyle;
@property(retain, nonatomic) PCConnectionManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NSDate *pushRegistrationTime; // @synthesize pushRegistrationTime=_pushRegistrationTime;
@property(nonatomic) int pushState; // @synthesize pushState=_pushState;
@property(nonatomic) __weak id <DARefreshManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)retryCollections:(id)arg1 after:(double)arg2 reason:(int)arg3;
- (void)_dailyRefreshTimerFired:(id)arg1;
- (void)_retryTimerFired:(id)arg1;
- (void)refreshCollections:(id)arg1 withReason:(int)arg2;
- (void)performTokenRegistrationRequestsWithToken:(id)arg1 onBehalfOf:(id)arg2;
- (void)tokenRegistrationRequest:(id)arg1 finishedWithError:(id)arg2;
- (void)cancelAllTokenRegistrations;
- (id)description;
- (id)_stringForStyle:(int)arg1;
- (void)shutdown;
- (void)startDailyRefreshTimer;
- (void)cancelDailyRefreshTimer;
- (void)cancelRetryTimer;
- (id)init;

@end

