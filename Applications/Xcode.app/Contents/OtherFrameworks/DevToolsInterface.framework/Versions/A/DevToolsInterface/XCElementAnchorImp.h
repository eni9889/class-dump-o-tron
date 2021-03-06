//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/XCElementImp.h>

#import "XCElementAnchorP.h"

@class NSMutableArray, NSMutableDictionary, NSObject, NSObject<XCElementAnchorDelegateP>, NSObject<XCElementP>, NSString;

@interface XCElementAnchorImp : XCElementImp <XCElementAnchorP>
{
    NSObject *_representedObject;
    struct NSObject *_anchorDelegate;
    NSMutableDictionary *_configuration;
    XCElementImp *_contentGroup;
    NSMutableArray *_activities;
    struct {
        unsigned int contentGroupDisplayed:1;
        unsigned int _reserved:31;
    } _aFlags;
}

@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(retain, nonatomic) NSObject<XCElementAnchorDelegateP> *anchorDelegate; // @synthesize anchorDelegate=_anchorDelegate;
@property(retain, nonatomic) NSObject<XCElementP> *contentGroup; // @synthesize contentGroup=_contentGroup;
- (void)close;
- (BOOL)prepareToClose;
- (BOOL)canBeClosed;
- (void)dealloc;
- (void)clearView;
- (void)_releaseValuesAnchor;
- (void)removeFromView;
- (void)receiveXCESignal:(id)arg1;
- (void)objectDidEndEditing:(struct NSObject *)arg1 inElement:(struct NSObject *)arg2;
- (void)objectDidBeginEditing:(struct NSObject *)arg1 inElement:(struct NSObject *)arg2;
- (void)configureAndSetObjectDidChangeActivity:(id)arg1;
- (void)objectDidChange;
- (void)observeToggleSignal:(id)arg1;
- (void)observeToggleSource:(id)arg1 keyPath:(id)arg2;
- (void)configureAndSetToggleActivity:(id)arg1;
- (void)observeObjectSignal:(id)arg1;
- (void)observeObjectSource:(id)arg1 keyPath:(id)arg2;
- (void)configureAndSetObjectActivity:(id)arg1;
- (void)addActivity:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *activities; // @dynamic activities;
- (BOOL)handleMouseDownOnElement:(struct NSObject *)arg1 event:(id)arg2;
- (BOOL)handleSelectionOf:(struct NSObject *)arg1;
- (void)setSelected:(BOOL)arg1;
- (BOOL)configurationIsInstantiated;
@property(readonly, nonatomic) NSMutableDictionary *configuration; // @dynamic configuration;
- (void)addToView;
- (BOOL)isInEditingState;
- (BOOL)isInEditingStateChildren;
- (BOOL)isEditing;
- (BOOL)isEditingChildren;
- (void)discardEditing;
- (void)discardEditingChildren;
- (BOOL)commitEditing;
- (BOOL)commitEditingChildren;
- (void)setInitialContentGroupDisplayed:(BOOL)arg1;
@property(nonatomic) BOOL contentGroupDisplayed;
- (void)initialRepresentedObject:(id)arg1;
- (id)initInMain:(id)arg1;
- (BOOL)isAnchor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

