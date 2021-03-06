//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CornerActionManager, NSData, NSDate, NSDictionary, NSString, NSURL, NSUUID;

@interface AdvertisableItem : NSObject
{
    NSUUID *_uuid;
    unsigned long long _type;
    NSDictionary *_options;
    unsigned long long _changeCount;
    NSDate *_activityDate;
    NSString *_title;
    NSString *_typeIdentifier;
    NSURL *_webpageURL;
    NSData *_streamsData;
    NSData *_activityPayload;
    NSString *_teamID;
    NSDate *_lastAdvertisedTime;
    CornerActionManager *_manager;
}

@property(retain) CornerActionManager *manager; // @synthesize manager=_manager;
@property(retain) NSDate *lastAdvertisedTime; // @synthesize lastAdvertisedTime=_lastAdvertisedTime;
@property(copy) NSString *teamID; // @synthesize teamID=_teamID;
@property(copy) NSData *activityPayload; // @synthesize activityPayload=_activityPayload;
@property(copy) NSData *streamsData; // @synthesize streamsData=_streamsData;
@property(copy) NSURL *webpageURL; // @synthesize webpageURL=_webpageURL;
@property(copy) NSString *typeIdentifier; // @synthesize typeIdentifier=_typeIdentifier;
@property(copy) NSString *title; // @synthesize title=_title;
@property(copy) NSDate *activityDate; // @synthesize activityDate=_activityDate;
@property unsigned long long changeCount; // @synthesize changeCount=_changeCount;
@property(copy) NSDictionary *options; // @synthesize options=_options;
@property unsigned long long type; // @synthesize type=_type;
@property(copy) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)statusString;
- (id)logString;
- (id)description;
- (_Bool)wasResumedOnAnotherDeviceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)updateInformationFromSourceWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isDirty;
- (_Bool)eligibleToAdvertise;
- (_Bool)matchesAdvertisingBytes:(id)arg1;
@property(readonly, copy) NSData *advertisingBytes;
- (id)initWithUUID:(id)arg1 manager:(id)arg2;

@end

