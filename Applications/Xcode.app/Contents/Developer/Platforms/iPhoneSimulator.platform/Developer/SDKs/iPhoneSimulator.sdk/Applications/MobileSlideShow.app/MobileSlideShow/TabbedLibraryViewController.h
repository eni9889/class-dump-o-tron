//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUTabbedLibraryViewController.h"

@class WImportViewController;

@interface TabbedLibraryViewController : PUTabbedLibraryViewController
{
    WImportViewController *_importViewController;
}

@property(retain, nonatomic) WImportViewController *importViewController; // @synthesize importViewController=_importViewController;
- (id)newRootViewControllerForContentMode:(int)arg1;
- (_Bool)shouldShowTabForContentMode:(int)arg1;
- (void)dealloc;

@end
