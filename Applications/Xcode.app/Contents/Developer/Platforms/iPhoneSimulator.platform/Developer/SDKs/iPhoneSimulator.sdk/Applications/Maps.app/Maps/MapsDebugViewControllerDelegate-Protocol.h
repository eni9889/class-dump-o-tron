//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNTracePlayer, NSArray, UIViewController<MapsDebugViewController>;

@protocol MapsDebugViewControllerDelegate <NSObject>
@property(nonatomic) _Bool locationPulseEnabled;
@property(nonatomic) _Bool hasShownWalkingNavModeAdvisory;
@property(nonatomic) _Bool hasShownDrivingNavModeAdvisory;
- (void)debugControllerDidFinish:(UIViewController<MapsDebugViewController> *)arg1;
- (void)debugController:(UIViewController<MapsDebugViewController> *)arg1 choseTracePlayer:(MNTracePlayer *)arg2 startNav:(_Bool)arg3;
- (NSArray *)allVisibleMapViewsForDebugController:(UIViewController<MapsDebugViewController> *)arg1;
@end
