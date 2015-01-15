//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VKMapMatch : NSObject
{
    CDStruct_2e21d8bb *roadFeature;
    NSString *featureName;
    CDStruct_2c43369c coordinateOnFeature;
    double courseOnFeature;
    float distanceFromJunction;
    float junctionRadius;
    float roadWidth;
}

@property(readonly, nonatomic) float roadWidth; // @synthesize roadWidth;
@property(readonly, nonatomic) float junctionRadius; // @synthesize junctionRadius;
@property(readonly, nonatomic) float distanceFromJunction; // @synthesize distanceFromJunction;
@property(readonly, nonatomic) double courseOnFeature; // @synthesize courseOnFeature;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinateOnFeature; // @synthesize coordinateOnFeature;
@property(readonly, nonatomic) NSString *featureName; // @synthesize featureName;
@property(readonly, nonatomic) CDStruct_2e21d8bb *roadFeature; // @synthesize roadFeature;
- (id).cxx_construct;
- (id)description;
- (void)dealloc;
- (id)initWithGEORoadFeature:(CDStruct_2e21d8bb *)arg1 pointOnFeature:(struct VKPoint)arg2 courseOnFeature:(float)arg3 distanceFromJunction:(float)arg4 junctionRadius:(float)arg5 roadWidth:(float)arg6;

@end
