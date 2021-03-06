//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSApplication.h"

#import "NSApplicationDelegate.h"
#import "NSUserNotificationCenterDelegate.h"

@class NSLock, NSMenuItem, NSString, XRAutomaticSpinTracer, XRDockMenuViewController, XRHUDWindow, XRInstrumentsServices;

@interface PFTApplication : NSApplication <NSApplicationDelegate, NSUserNotificationCenterDelegate>
{
    XRHUDWindow *_hudWindow;
    NSLock *_transitionLock;
    XRDockMenuViewController *_dockMenuController;
    XRInstrumentsServices *_serviceProvider;
    XRAutomaticSpinTracer *_spinTracer;
    NSMenuItem *_debugSelfServiceMenuItem;
    NSMenuItem *_debugSelfServiceSeparatorMenuItem;
}

+ (void)initialize;
@property __weak NSMenuItem *debugSelfServiceSeparatorMenuItem; // @synthesize debugSelfServiceSeparatorMenuItem=_debugSelfServiceSeparatorMenuItem;
@property __weak NSMenuItem *debugSelfServiceMenuItem; // @synthesize debugSelfServiceMenuItem=_debugSelfServiceMenuItem;
- (void).cxx_destruct;
- (void)_hideDebugMenu;
- (BOOL)presentError:(id)arg1;
- (void)importPerformanceSession:(id)arg1;
- (void)toggleSpinProfiling:(id)arg1;
- (id)applicationDockMenu:(id)arg1;
- (void)toggleRecording:(id)arg1;
- (int)performTransition:(int)arg1 withProvider:(id)arg2 providerInfo:(id)arg3 onWindow:(id)arg4 inDirection:(int)arg5;
- (void)showHelp:(id)arg1;
- (void)showFeatureGuide:(id)arg1;
- (void)showUserGuide:(id)arg1;
- (void)terminate:(id)arg1;
- (BOOL)_appHasOpenNSWindow;
- (void)_windowOpenedDuringHUD:(id)arg1;
- (void)newDocument:(id)arg1;
- (void)toggleHUD:(id)arg1;
- (void)showPreferencesPanel:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (BOOL)applicationOpenUntitledFile:(id)arg1;
- (void)finishLaunching;
- (void)importData:(id)arg1;
- (void)setupDocumentActions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

