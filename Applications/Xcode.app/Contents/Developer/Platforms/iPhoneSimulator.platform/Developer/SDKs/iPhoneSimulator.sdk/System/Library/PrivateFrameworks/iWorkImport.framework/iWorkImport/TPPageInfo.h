//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSDContainerInfo.h"

@class NSObject<TSDContainerInfo>, NSString, TPBodyInfo, TPDocumentRoot, TSDInfoGeometry, TSPObject<TSDOwningAttachment>;

__attribute__((visibility("hidden")))
@interface TPPageInfo : NSObject <TSDContainerInfo>
{
    TPDocumentRoot *_documentRoot;
    unsigned long long _pageIndex;
    TPBodyInfo *_bodyInfo;
    id <TPPageLayoutInfoProvider> _layoutInfoProvider;
}

@property(readonly, nonatomic) id <TPPageLayoutInfoProvider> layoutInfoProvider; // @synthesize layoutInfoProvider=_layoutInfoProvider;
@property(readonly, retain, nonatomic) TPBodyInfo *bodyInfo; // @synthesize bodyInfo=_bodyInfo;
@property(readonly, nonatomic) TPDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
@property(readonly, nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
- (id)childInfos;
- (Class)layoutClass;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
- (_Bool)isThemeContent;
- (Class)repClass;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithPageIndex:(unsigned long long)arg1 documentRoot:(id)arg2 layoutInfoProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(readonly) Class superclass;

@end

