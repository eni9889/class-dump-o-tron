//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RAPReportTableViewController.h"

@class RAPReportComposerAddPlaceController, RAPReportComposerImageryCorrectionController, RAPReportComposerLabelCorrectionController;

__attribute__((visibility("hidden")))
@interface RAPReportComposerCategoryViewController : RAPReportTableViewController
{
    RAPReportComposerLabelCorrectionController *_labelCorrectionController;
    RAPReportComposerImageryCorrectionController *_imageryCorrectionController;
    RAPReportComposerAddPlaceController *_addPlaceController;
}

- (void).cxx_destruct;
- (void)_segueToViewControllerForSelectedInitialCategory;
- (void)viewDidLoad;
- (void)_cancel;
- (id)initWithReport:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

