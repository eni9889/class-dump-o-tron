//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSViewController;

@interface NSView (MZViewControllerAdditions)
+ (void)load;
- (id)mz_nearestViewController;
- (void)REPLACEMENT_updateConstraints;
- (void)mz_setShouldIgnoreViewControllerConstraints:(BOOL)arg1;
- (BOOL)mz_shouldIgnoreViewControllerConstraints;
@property NSViewController *mz_viewController;
- (void)mz_setViewController:(id)arg1;
@end

