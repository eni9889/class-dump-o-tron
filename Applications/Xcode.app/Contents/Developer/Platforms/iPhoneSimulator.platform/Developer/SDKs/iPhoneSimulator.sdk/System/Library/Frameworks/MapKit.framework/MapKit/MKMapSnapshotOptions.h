//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class MKMapCamera;

@interface MKMapSnapshotOptions : NSObject <NSCopying>
{
    MKMapCamera *_camera;
    CDStruct_02837cd9 _mapRect;
    CDStruct_feeb6407 _region;
    unsigned long long _mapType;
    int _mode;
    _Bool _showsPointsOfInterest;
    _Bool _showsBuildings;
    _Bool _rendersInBackground;
    struct CGSize _size;
    double _scale;
    _Bool _usingRect;
}

@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic, getter=_rendersInBackground, setter=_setRendersInBackground:) _Bool rendersInBackground; // @synthesize rendersInBackground=_rendersInBackground;
@property(nonatomic) _Bool showsBuildings; // @synthesize showsBuildings=_showsBuildings;
@property(nonatomic) _Bool showsPointsOfInterest; // @synthesize showsPointsOfInterest=_showsPointsOfInterest;
@property(readonly, nonatomic) _Bool usingRect; // @synthesize usingRect=_usingRect;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) unsigned long long mapType; // @synthesize mapType=_mapType;
@property(nonatomic) CDStruct_90e2a262 region; // @synthesize region=_region;
@property(nonatomic) CDStruct_90e2a262 mapRect; // @synthesize mapRect=_mapRect;
@property(copy, nonatomic) MKMapCamera *camera; // @synthesize camera=_camera;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

