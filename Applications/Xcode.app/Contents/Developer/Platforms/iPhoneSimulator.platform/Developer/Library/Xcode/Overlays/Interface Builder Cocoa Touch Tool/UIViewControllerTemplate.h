//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIObjectTemplate.h"

@class NSArray, NSDictionary, NSString, NSValue, UINavigationItem, UITabBarItem, UIView;

@interface UIViewControllerTemplate : UIObjectTemplate
{
    UIViewControllerTemplate *parentViewController;
    UINavigationItem *navigationItem;
    UITabBarItem *tabBarItem;
    NSString *title;
    NSDictionary *externalObjectsTableForViewLoading;
    NSString *nibName;
    NSString *nibBundleIdentifier;
    NSArray *toolbarItems;
    NSArray *childViewControllers;
    NSArray *storyboardSegueTemplates;
    NSArray *topLevelObjectsToKeepAliveFromStoryboard;
    UIView *view;
    _Bool autoresizesArchivedViewToFullSize;
    _Bool wantsFullScreenLayout;
    _Bool definesPresentationContext;
    _Bool providesPresentationContextTransitionStyle;
    long long modalTransitionStyle;
    long long modalPresentationStyle;
    _Bool hidesBottomBarWhenPushed;
    NSValue *contentSizeForViewInPopover;
    NSValue *preferredContentSize;
    NSArray *keyCommands;
    _Bool _extendedLayoutIncludesOpaqueBars;
    _Bool _automaticallyAdjustsScrollViewInsets;
    NSString *storyboardIdentifier;
    NSString *restorationIdentifier;
    unsigned long long _edgesForExtendedLayout;
}

@property(nonatomic) _Bool automaticallyAdjustsScrollViewInsets; // @synthesize automaticallyAdjustsScrollViewInsets=_automaticallyAdjustsScrollViewInsets;
@property(nonatomic) _Bool extendedLayoutIncludesOpaqueBars; // @synthesize extendedLayoutIncludesOpaqueBars=_extendedLayoutIncludesOpaqueBars;
@property(nonatomic) unsigned long long edgesForExtendedLayout; // @synthesize edgesForExtendedLayout=_edgesForExtendedLayout;
@property(copy, nonatomic) NSArray *keyCommands; // @synthesize keyCommands;
@property(copy, nonatomic) NSValue *preferredContentSize; // @synthesize preferredContentSize;
@property(copy, nonatomic) NSValue *contentSizeForViewInPopover; // @synthesize contentSizeForViewInPopover;
@property(nonatomic) _Bool hidesBottomBarWhenPushed; // @synthesize hidesBottomBarWhenPushed;
@property(nonatomic) long long modalPresentationStyle; // @synthesize modalPresentationStyle;
@property(nonatomic) long long modalTransitionStyle; // @synthesize modalTransitionStyle;
@property(nonatomic) _Bool providesPresentationContextTransitionStyle; // @synthesize providesPresentationContextTransitionStyle;
@property(nonatomic) _Bool definesPresentationContext; // @synthesize definesPresentationContext;
@property(copy, nonatomic) NSArray *topLevelObjectsToKeepAliveFromStoryboard; // @synthesize topLevelObjectsToKeepAliveFromStoryboard;
@property(copy, nonatomic) NSArray *storyboardSegueTemplates; // @synthesize storyboardSegueTemplates;
@property(retain, nonatomic) UIView *view; // @synthesize view;
@property(copy, nonatomic) NSArray *toolbarItems; // @synthesize toolbarItems;
@property(copy, nonatomic) NSString *restorationIdentifier; // @synthesize restorationIdentifier;
@property(copy, nonatomic) NSString *storyboardIdentifier; // @synthesize storyboardIdentifier;
@property(copy, nonatomic) NSString *nibBundleIdentifier; // @synthesize nibBundleIdentifier;
@property(copy, nonatomic) NSString *nibName; // @synthesize nibName;
@property(copy, nonatomic) NSDictionary *externalObjectsTableForViewLoading; // @synthesize externalObjectsTableForViewLoading;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) UITabBarItem *tabBarItem; // @synthesize tabBarItem;
@property(retain, nonatomic) UINavigationItem *navigationItem; // @synthesize navigationItem;
@property(nonatomic) __weak UIViewControllerTemplate *parentViewController; // @synthesize parentViewController;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
@property(copy, nonatomic) NSArray *childViewControllers;
- (void)createTabBarItemsIfNecessary;
- (void)createNavigationItemsIfNecessary;
- (void)dealloc;
- (void)setIbShadowedLayoutGuides:(id)arg1;
- (id)ibShadowedLayoutGuides;
- (_Bool)ibCapturePlaceholderTable:(id)arg1 forRelationship:(id)arg2 withContext:(id)arg3;

@end

