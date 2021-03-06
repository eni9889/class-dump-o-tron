//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoLibrary/PLPhotoBrowserController.h>

@interface PLPhotoScrollerViewController : PLPhotoBrowserController
{
    _Bool _modalSheetIsPresent;
    _Bool _dontChangeStatusBar;
    _Bool _viewWillDisappear;
}

- (_Bool)dontChangeStatusBar;
- (void)setDontChangeStatusBar:(_Bool)arg1;
- (void)removeRemakerContainerView;
- (id)remakerContainerView;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)_initWithAssetCollections:(id)arg1 dataSource:(id)arg2 lockStatusBar:(_Bool)arg3 currentImageIndexPath:(id)arg4 delayImageLoading:(_Bool)arg5;

@end

