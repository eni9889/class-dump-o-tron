//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <lwawt/CMenuComponent.h>

@class CMenu, NSMutableArray;

@interface CMenuBar : CMenuComponent
{
    NSMutableArray *fMenuList;
    CMenu *fHelpMenu;
    BOOL fModallyDisabled;
}

+ (void)clearMenuBarExcludingAppleMenu_OnAppKitThread:(BOOL)arg1;
+ (BOOL)isActiveMenuBar:(id)arg1;
+ (void)activate:(id)arg1 modallyDisabled:(BOOL)arg2;
+ (void)addDefaultHelpMenu;
- (id)initWithPeer:(struct _jobject *)arg1;
- (void)dealloc;
- (void)deactivate;
- (void)javaAddMenu:(id)arg1;
- (void)javaAddMenu:(id)arg1 atIndex:(int)arg2;
- (long long)javaIndexToNSMenuIndex_OnAppKitThread:(int)arg1;
- (void)nativeAddMenuAtIndex_OnAppKitThread:(id)arg1;
- (void)javaDeleteMenu:(int)arg1;
- (void)nativeDeleteMenu_OnAppKitThread:(id)arg1;
- (void)javaSetHelpMenu:(id)arg1;

@end

