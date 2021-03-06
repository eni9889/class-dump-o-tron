//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RAPTablePartSection.h"

@class NSString, RAPMapFeaturePickerViewController;

__attribute__((visibility("hidden")))
@interface RAPLocationPickerMapSection : RAPTablePartSection
{
    NSString *_prompt;
    CDStruct_02837cd9 _initialMapRect;
    CDStruct_02837cd9 _placeDisplayMapRect;
    CDUnknownBlockType _changeHandler;
    RAPMapFeaturePickerViewController *_coordinatePicker;
    CDStruct_2c43369c _selectedCoordinate;
}

@property(readonly, nonatomic) CDStruct_c3b9c2ee selectedCoordinate; // @synthesize selectedCoordinate=_selectedCoordinate;
- (void).cxx_destruct;
- (void)didSelectCellForRowAtIndex:(long long)arg1 tableIndexPath:(id)arg2;
- (id)_coordinatePicker;
- (double)heightForRowAtIndex:(long long)arg1;
- (id)cellForRowAtIndex:(long long)arg1;
- (void)registerReuseIdentifiersForCells;
- (long long)rowsCount;
- (id)initWithLocationPickerPrompt:(id)arg1 initialPickingMapRect:(CDStruct_02837cd9)arg2 initialPlaceDisplayMapRect:(CDStruct_02837cd9)arg3 changeHandler:(CDUnknownBlockType)arg4;

@end

