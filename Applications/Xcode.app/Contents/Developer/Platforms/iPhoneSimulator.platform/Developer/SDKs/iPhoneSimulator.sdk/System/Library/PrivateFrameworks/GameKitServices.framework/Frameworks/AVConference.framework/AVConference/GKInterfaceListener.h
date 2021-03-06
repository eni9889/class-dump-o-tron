//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GKInterfaceListener : NSObject
{
    struct __SCDynamicStore *_dynamicStore;
    struct _opaque_pthread_mutex_t _notificationMutex;
    id <InterfaceListenerDelegate> _interfaceListenerDelegate;
    _Bool _isWifiUp;
    _Bool _isCellUp;
    int _notifyToken;
    _Bool _monitoringAvailable;
}

@property _Bool _isCellUp; // @synthesize _isCellUp;
@property _Bool _isWifiUp; // @synthesize _isWifiUp;
@property id <InterfaceListenerDelegate> interfaceListenerDelegate;
- (void)stopRoutingChangeListener;
- (_Bool)startRoutingChangeListener;
- (_Bool)stopChangeListener;
- (_Bool)startChangeListener;
- (void)hasConnectionWithWifi:(_Bool *)arg1 cell:(_Bool *)arg2;
- (void)dealloc;
- (id)init;

@end

