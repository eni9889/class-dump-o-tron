//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, NSString, SUScriptURLRequest;

@interface SUScriptProtocol : SUScriptObject
{
}

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (id)_webThreadValueForProtocolKey:(id)arg1;
- (void)_setValue:(id)arg1 forProtocolKey:(id)arg2;
- (void)_setProtocol:(id)arg1;
- (id)_copyProtocol;
@property _Bool shouldShowInOverlay;
@property(retain) SUScriptURLRequest *overlayBackgroundURLRequest;
@property _Bool excludeFromNavigationHistory;
@property(retain) NSString *copyright;
@property(retain) NSArray *allowedOrientations;
@property(readonly) NSString *protocolVersion;
@property(readonly) NSString *clientIdentifier;
- (id)_className;
- (void)setValuesFromDictionary:(id)arg1;

@end
