//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKMediaObject, CKVideoMessageRecordingViewController, NSError;

@protocol CKVideoMessageRecordingViewControllerDelegate <NSObject>
- (void)ckVideoMessageRecordingViewController:(CKVideoMessageRecordingViewController *)arg1 mediaObjectCaptured:(CKMediaObject *)arg2 error:(NSError *)arg3;
- (void)ckVideoMessageRecordingViewControllerRecordingCanceled:(CKVideoMessageRecordingViewController *)arg1;
@end
