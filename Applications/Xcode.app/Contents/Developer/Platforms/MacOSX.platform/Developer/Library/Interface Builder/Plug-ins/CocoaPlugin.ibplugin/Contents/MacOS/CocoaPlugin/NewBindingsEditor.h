//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBBindingInfo, IBInspectorSliceView, NSBox, NSMutableArray, NSObjectController, NSTextField, NSView;

@interface NewBindingsEditor : NSObject
{
    NSView *_view;
    NSBox *_divider;
    NSTextField *_placeholdersLabel;
    NSObjectController *_objectController;
    NSView *_valueTransformerComboBox;
    IBBindingInfo *_bindingInfo;
    IBInspectorSliceView *_sliceView;
    NSMutableArray *_editors;
    NSMutableArray *_optionViewControllers;
    BOOL _setup;
    BOOL _bound;
    id _inspector;
    id _selectedController;
    id _selectedControllerKey;
    id _selectedModelKeyPath;
    id _selectedValueTransformerName;
}

+ (id)booleanValuedOptionsPredicate;
+ (id)placeholderOptionsPredicate;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (BOOL)commitEditing;
- (void)discardEditing;
- (void)objectDidEndEditing:(id)arg1;
- (void)objectDidBeginEditing:(id)arg1;
- (void)setSelectedValueTransformerName:(id)arg1;
- (void)setSelectedModelKeyPath:(id)arg1;
- (BOOL)validateSelectedModelKeyPath:(id *)arg1 error:(id *)arg2;
- (void)setSelectedControllerKey:(id)arg1;
- (BOOL)validateSelectedControllerKey:(id *)arg1 error:(id *)arg2;
- (id)acceptableValueTransformerNames;
- (id)binding;
- (id)modelObjectKeys;
- (id)controllerKeys;
- (void)updateBindingOption:(id)arg1;
- (void)updateSelectedKeys;
- (void)setSelectedController:(id)arg1;
- (void)setBound:(BOOL)arg1;
- (void)createBindingInInspector;
- (void)setPrimitiveSelectedControllerKey:(id)arg1;
- (void)setPrimitiveSelectedModelKeyPath:(id)arg1;
- (id)bindingKeyPath;
- (BOOL)validateBound:(id *)arg1 error:(id *)arg2;
- (BOOL)hasBindableControllers;
- (void)setupForDrawing;
- (id)optionDescriptionForName:(id)arg1;
- (BOOL)expanded;
- (void)setExpanded:(BOOL)arg1;
- (id)documentation;
- (id)view;
- (id)sliceView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)setBindingInfo:(id)arg1;
- (void)refreshSliceViewState;
- (void)_reset;
- (id)initWithInspector:(id)arg1;

@end

