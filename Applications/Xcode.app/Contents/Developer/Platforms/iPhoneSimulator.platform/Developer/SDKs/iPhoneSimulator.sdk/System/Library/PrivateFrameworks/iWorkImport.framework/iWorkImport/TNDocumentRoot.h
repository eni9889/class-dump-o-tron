//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSADocumentRoot.h>

#import "TSTResolverContainerNameProvider.h"

@class NSArray, NSMutableArray, NSString, TNTheme, TNUIState, TSKTreeNode, TSSStylesheet;

__attribute__((visibility("hidden")))
@interface TNDocumentRoot : TSADocumentRoot <TSTResolverContainerNameProvider>
{
    TNTheme *mTheme;
    TSSStylesheet *mStylesheet;
    NSMutableArray *mSheets;
    TSKTreeNode *mSidebarOrder;
    unsigned long long mSheetNameCounter;
    TNUIState *mUIState;
    _Bool mDocumentWasPreparedFromTemplate;
    _Bool _printingAllSheets;
    NSString *_printerID;
    NSString *_paperID;
    struct CGSize _pageSize;
}

+ (struct CGSize)previewImageMaxSizeForType:(unsigned long long)arg1;
+ (struct CGSize)previewImageSizeForType:(unsigned long long)arg1;
@property(nonatomic, getter=isPrintingAllSheets) _Bool printingAllSheets; // @synthesize printingAllSheets=_printingAllSheets;
@property(retain, nonatomic) TNUIState *uiState; // @synthesize uiState=mUIState;
@property(readonly, retain, nonatomic) TSKTreeNode *sidebarOrder; // @synthesize sidebarOrder=mSidebarOrder;
@property(readonly, nonatomic) TSSStylesheet *stylesheet; // @synthesize stylesheet=mStylesheet;
- (id).cxx_construct;
- (int)verticalAlignmentForTextStorage:(id)arg1;
- (int)naturalAlignmentAtCharIndex:(unsigned long long)arg1 inTextStorage:(id)arg2;
- (_Bool)shouldAllowDrawableInGroups:(id)arg1 forImport:(_Bool)arg2;
- (id)p_previewImageWithImageSize:(struct CGSize)arg1;
- (struct CGSize)p_adjustCapturedContentSize:(struct CGSize)arg1 toAspectRatio:(struct CGSize)arg2;
- (struct CGRect)p_contentFrameToCaptureForSheet:(id)arg1;
- (id)previewImageForSize:(struct CGSize)arg1;
- (double)p_imageBorderForSize:(struct CGSize)arg1;
- (void)documentDidLoad;
- (void)performDeferredUpgradeImportOperationsRequiringCalcEngine;
- (void)performDeferredUpgradeImportOperationsOnNewThreadForCharts:(id)arg1;
- (id)p_chartsWantingDeferredUpgrade;
- (_Bool)isMultiPageForQuickLook;
- (void)sheet:(id)arg1 removedDrawable:(id)arg2;
- (void)sheet:(id)arg1 insertedDrawable:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
@property(nonatomic) _Bool removedAllQuickCalcFunctions;
@property(copy, nonatomic) NSArray *selectedQuickCalcFunctions;
- (id)childEnumerator;
- (id)resolversMatchingPrefix:(id)arg1;
- (id)resolverMatchingName:(id)arg1;
- (id)resolverMatchingName:(id)arg1 contextContainerName:(id)arg2;
- (id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2;
- (id)resolverContainerNamesMatchingPrefix:(id)arg1;
- (id)resolverContainerForName:(id)arg1 caseSensitive:(_Bool)arg2;
- (id)nameForResolverContainer:(id)arg1;
- (id)resolverContainerNameForResolver:(id)arg1;
- (id)p_resolverContainerForResolver:(id)arg1;
- (void)p_buildSidebarOrder;
- (void)p_removeSidebarNodeForSheet:(id)arg1;
- (void)p_addSidebarNodeForSheet:(id)arg1;
- (void)setSidebarChildren:(id)arg1 forSheet:(id)arg2;
- (_Bool)validName:(id)arg1 forRenamingSheet:(id)arg2;
- (_Bool)validNameForNewSheet:(id)arg1;
- (_Bool)shouldShowComments;
- (void)moveSheet:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)insertSheet:(id)arg1 sheetIndex:(unsigned long long)arg2 context:(id)arg3;
- (void)removeSheet:(id)arg1;
- (void)addSheet:(id)arg1 dolcContext:(id)arg2;
- (void)removeAllSheets;
- (id)activeSheet;
- (id)p_untitledSheetName;
- (void)incrementSheetNameCounter;
- (void)prepareNewDocumentWithTemplateBundle:(id)arg1;
- (void)setThemeForTemplateImport:(id)arg1;
@property(retain, nonatomic) TNTheme *theme;
- (unsigned long long)p_tableCountForSheet:(id)arg1;
@property(readonly, nonatomic) unsigned long long tableCount;
@property(readonly, nonatomic) NSArray *sheets;
- (void)setImportedPaperID:(id)arg1 printerID:(id)arg2;
@property(nonatomic) struct CGSize pageSize; // @synthesize pageSize=_pageSize;
@property(copy, nonatomic) NSString *paperID; // @synthesize paperID=_paperID;
@property(copy, nonatomic) NSString *printerID; // @synthesize printerID=_printerID;
- (unsigned long long)applicationType;
- (void)initializeForImport;
- (void)initializeHardCodedBlankDocument;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

