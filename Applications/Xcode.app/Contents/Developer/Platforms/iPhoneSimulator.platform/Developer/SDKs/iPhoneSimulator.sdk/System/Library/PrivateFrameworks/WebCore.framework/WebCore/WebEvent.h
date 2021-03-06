//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface WebEvent : NSObject
{
    int _type;
    double _timestamp;
    struct CGPoint _locationInWindow;
    NSString *_characters;
    NSString *_charactersIgnoringModifiers;
    unsigned int _modifierFlags;
    _Bool _keyRepeating;
    _Bool _popupVariant;
    unsigned long long _keyboardFlags;
    unsigned short _keyCode;
    _Bool _tabKey;
    int _characterSet;
    float _deltaX;
    float _deltaY;
    unsigned int _touchCount;
    NSArray *_touchLocations;
    NSArray *_touchIdentifiers;
    NSArray *_touchPhases;
    _Bool _isGesture;
    float _gestureScale;
    float _gestureRotation;
    _Bool _wasHandled;
}

@property(nonatomic) _Bool wasHandled; // @synthesize wasHandled=_wasHandled;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (id).cxx_construct;
@property(readonly, nonatomic) float gestureRotation;
@property(readonly, nonatomic) float gestureScale;
@property(readonly, nonatomic) _Bool isGesture;
@property(readonly, retain, nonatomic) NSArray *touchPhases;
@property(readonly, retain, nonatomic) NSArray *touchIdentifiers;
@property(readonly, retain, nonatomic) NSArray *touchLocations;
@property(readonly, nonatomic) unsigned int touchCount;
@property(readonly, nonatomic) float deltaY;
@property(readonly, nonatomic) float deltaX;
@property(readonly, nonatomic) int characterSet;
@property(readonly, nonatomic, getter=isTabKey) _Bool tabKey;
@property(readonly, nonatomic) unsigned short keyCode;
@property(readonly, nonatomic) unsigned long long keyboardFlags;
@property(readonly, nonatomic, getter=isPopupVariant) _Bool popupVariant;
@property(readonly, nonatomic, getter=isKeyRepeating) _Bool keyRepeating;
@property(readonly, nonatomic) unsigned int modifierFlags;
@property(readonly, retain, nonatomic) NSString *charactersIgnoringModifiers;
@property(readonly, retain, nonatomic) NSString *characters;
@property(readonly, nonatomic) struct CGPoint locationInWindow;
- (id)description;
- (id)_eventDescription;
- (id)_touchPhasesDescription;
- (id)_touchPhaseDescription:(int)arg1;
- (id)_touchIdentifiersDescription;
- (id)_touchLocationsDescription:(id)arg1;
- (id)_characterSetDescription;
- (id)_modiferFlagsDescription;
- (id)_typeDescription;
- (void)dealloc;
- (id)initWithKeyEventType:(int)arg1 timeStamp:(double)arg2 characters:(id)arg3 charactersIgnoringModifiers:(id)arg4 modifiers:(unsigned int)arg5 isRepeating:(_Bool)arg6 withFlags:(unsigned long long)arg7 keyCode:(unsigned short)arg8 isTabKey:(_Bool)arg9 characterSet:(int)arg10;
- (id)initWithKeyEventType:(int)arg1 timeStamp:(double)arg2 characters:(id)arg3 charactersIgnoringModifiers:(id)arg4 modifiers:(unsigned int)arg5 isRepeating:(_Bool)arg6 isPopupVariant:(_Bool)arg7 keyCode:(unsigned short)arg8 isTabKey:(_Bool)arg9 characterSet:(int)arg10;
- (id)initWithTouchEventType:(int)arg1 timeStamp:(double)arg2 location:(struct CGPoint)arg3 modifiers:(unsigned int)arg4 touchCount:(unsigned int)arg5 touchLocations:(id)arg6 touchIdentifiers:(id)arg7 touchPhases:(id)arg8 isGesture:(_Bool)arg9 gestureScale:(float)arg10 gestureRotation:(float)arg11;
- (id)initWithScrollWheelEventWithTimeStamp:(double)arg1 location:(struct CGPoint)arg2 deltaX:(float)arg3 deltaY:(float)arg4;
- (id)initWithMouseEventType:(int)arg1 timeStamp:(double)arg2 location:(struct CGPoint)arg3;

@end

