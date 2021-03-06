//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DevToolsInterface/PBXLSModel.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, PBXDebugDataValueViewHelper, PBXLSDVValue, PBXLSStackFrame, PBXLSType, XCUnretainedReference;

@interface PBXLSDataValue : PBXLSModel
{
    NSString *_symbolicName;
    PBXLSType *_baseType;
    PBXLSType *_viewAsType;
    PBXLSType *_dynamicType;
    NSString *_typeExpression;
    NSMutableArray *_valueHistoryList;
    PBXLSDVValue *_currentValue;
    NSString *_blockStartAddress;
    int _valueChangeStatus;
    int _summaryChangeStatus;
    int _baseTypeChangeStatus;
    int _dynamicTypeChangeStatus;
    BOOL _inScope;
    BOOL _hasChildren;
    BOOL _isUpdatingAfterSet;
    int _valueFormat;
    PBXLSStackFrame *_contextFrame;
    NSString *_pathExpression;
    int _pathExpressionValidityStatus;
    PBXDebugDataValueViewHelper *_viewHelper;
    BOOL _usedForDataTip;
    NSArray *_allChildDataValuesCache;
    SEL _expandAction;
    BOOL _isBeingWatched;
    XCUnretainedReference *_myUnretainedReference;
    int _containerValidityStatus;
    int _containerChangeStatus;
    long long _containerOffsetIndex;
    long long _containerCurrentSize;
    long long _containerOldSize;
    unsigned int _containerStride;
    struct _NSRange _containerDisplayRange;
    NSString *_containerSizeVarObj;
    NSMutableDictionary *_containerElementsVarObjs;
    int _containerDisplayStyle;
    BOOL _hasNewChildren;
    BOOL _isCPURegister;
}

@property BOOL usedForDataTip; // @synthesize usedForDataTip=_usedForDataTip;
@property BOOL isCPURegister; // @synthesize isCPURegister=_isCPURegister;
- (BOOL)alwaysUpdate;
- (void)setHasNewChildren:(BOOL)arg1;
- (BOOL)hasNewChildren;
- (int)containerDisplayStyle;
- (void)setContainerDisplayStyle:(int)arg1;
- (id)containerElementsVarObjs;
- (void)setContainerDisplayRange:(struct _NSRange)arg1;
- (struct _NSRange)containerDisplayRange;
- (void)setContainerSizeVarObj:(id)arg1;
- (id)containerSizeVarObj;
- (unsigned int)containerStride;
- (long long)containerOldSize;
- (void)setContainerOldSize;
- (void)setContainerCurrentSize:(long long)arg1;
- (long long)containerCurrentSize;
- (long long)containerOffsetIndex;
- (int)containerChangeStatus;
- (int)containerValidityStatus;
- (void)setContainerValidityStatus:(int)arg1;
- (id)unretainedReference;
- (void)setIsBeingWatched:(BOOL)arg1;
- (BOOL)isBeingWatched;
- (void)setBlockStartAddress:(id)arg1;
- (id)blockStartAddress;
- (void)didReleaseChildren;
- (void)didGetChildren;
- (void)didUpdateValues;
- (void)didSetNewValue;
- (BOOL)isUpdatingAfterSet;
- (void)setUpdatingAfterSet:(BOOL)arg1;
- (void)_informContainerViewControllersOfMyUpdate;
- (void)requestReleaseChildren;
- (void)requestSetStringValue:(id)arg1;
- (int)valueFormat;
- (void)requestSetValueFormat:(int)arg1;
- (BOOL)canSetValueFormat;
- (void)requestGetChildren;
- (unsigned long long)childrenCount;
- (void)requestUpdateValues;
- (void)invalidateAllChildDataValuesCache;
- (id)allChildDataValues;
- (BOOL)canGetPathExpressionString;
- (void)requestGetPathExpressionStringForWatchpoint;
- (void)requestGetPathExpressionString;
- (int)pathExpressionValidityStatus;
- (void)setPathExpressionValidityStatus:(int)arg1;
- (id)pathExpressionString;
- (void)setPathExpressionString:(id)arg1;
- (void)addChildDataValue:(id)arg1;
- (BOOL)usesSyntheticChildren;
- (BOOL)hasChildren;
- (void)setHasChildren:(BOOL)arg1;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addChild:(id)arg1;
- (void)recursiveClearContextFrame;
- (id)contextFrame;
- (void)setContextFrame:(id)arg1;
- (int)dynamicTypeChangeStatus;
- (void)setDynamicTypeChangeStatus:(int)arg1;
- (void)resetDynamicTypeChangeStatus;
- (int)summaryChangeStatus;
- (void)setSummaryChangeStatus:(int)arg1;
- (void)resetSummaryChangeStatus;
- (int)valueChangeStatus;
- (void)setValueChangeStatus:(int)arg1;
- (void)resetValueChangeStatus;
- (BOOL)valueIsEditable;
- (BOOL)inScope;
- (void)setInScope:(BOOL)arg1;
- (id)summary;
- (void)setSummary:(id)arg1;
- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (void)requestInfoReferencesInThread:(id)arg1 atStackFrame:(id)arg2;
- (void)requestInfoRootsInThread:(id)arg1 atStackFrame:(id)arg2;
- (void)requestPrintDescriptionInThread:(id)arg1 atStackFrame:(id)arg2;
- (BOOL)canPrintGCInformation;
- (BOOL)canPrintDescription;
- (BOOL)hasIntUintVoidPrefix;
- (BOOL)isNSArrayType;
- (BOOL)isSTLVectorType;
- (BOOL)isArrayType;
- (BOOL)isPointerType;
- (id)typeExpressionString;
- (void)setTypeExpressionString:(id)arg1;
- (id)type;
- (id)staticType;
- (id)dynamicType;
- (void)setDynamicType:(id)arg1;
- (id)viewAsType;
@property(readonly) BOOL usesCustomDataFormatters;
- (id)viewHelper;
- (id)executable;
- (void)setExpandAction:(SEL)arg1;
- (SEL)expandAction;
- (void)setViewHelper:(id)arg1;
- (void)setViewAsType:(id)arg1;
- (id)baseType;
- (void)setBaseType:(id)arg1;
- (id)symbolicName;
- (void)setSymbolicName:(id)arg1;
- (id)containingDataValue;
- (id)parentDataValue;
- (id)valueHistoryList;
- (id)contentDescription;
- (void)finishedWithDataValue;
- (double)additionalHeight;
- (void)dealloc;
- (id)initWithDebugger:(id)arg1;
- (void)_pushNewValueAtOperationNumber:(unsigned long long)arg1;

@end

