//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorLayoutStack.h>

#import <IDEKit/IDEInspectorValueElement-Protocol.h>

@class DVTDelayedInvocation, IDEInspectorChooserChoice, IDEInspectorKeyPath, IDEInspectorLayoutGroup, NSArray, NSDictionary, NSMenuItem, NSObject, NSPopUpButton, NSString;
@protocol DVTCancellable, IDEBindableDeclarativeInspectorController;

@interface IDEInspectorChooser : IDEInspectorLayoutStack <IDEInspectorValueElement>
{
    NSArray *_categories;
    NSPopUpButton *_choicePopUp;
    NSDictionary *_choicesByValue;
    IDEInspectorChooserChoice *_defaultChoice;
    IDEInspectorChooserChoice *_selectedChoice;
    IDEInspectorChooserChoice *_nilChoice;
    IDEInspectorLayoutGroup *_selectedChoiceLayoutGroup;
    IDEInspectorLayoutGroup *_emptyChoiceLayoutGroup;
    NSObject<IDEBindableDeclarativeInspectorController> *_inspectorController;
    NSMenuItem *_defaultSeperator;
    NSMenuItem *_specialMarkMenuItem;
    id <DVTCancellable> _valueObservation;
    id <DVTCancellable> _nilPlaceholderObservation;
    BOOL _disableWhenNil;
    IDEInspectorKeyPath *_valueKeyPath;
    DVTDelayedInvocation *_refreshInvocation;
}

+ (id)categoryForXMLElement:(id)arg1 choiceType:(id)arg2 owner:(id)arg3;
+ (id)choiceForXMLElement:(id)arg1 choiceType:(id)arg2 owner:(id)arg3;
+ (id)choiceValueForElement:(id)arg1 type:(id)arg2;
+ (id)chooserForXMLElement:(id)arg1 boundTo:(id)arg2;
- (void).cxx_destruct;
- (id)_attributedMenuItemTitleForHeaderTitle:(id)arg1;
- (id)aggregateReplacementBySettingValue:(id)arg1 forKeyPath:(id)arg2 onObject:(id)arg3 fromKeyPath:(id)arg4 ofObject:(id)arg5;
- (id)categoryTitleAttributes;
- (void)configureAccessibilityForUIElement:(id)arg1 forAttribute:(id)arg2 keyPath:(id)arg3 withAppendedString:(id)arg4;
- (id)initWithTitle:(id)arg1 categories:(id)arg2 defaultChoice:(id)arg3 nilChoice:(id)arg4 disableWhenNil:(BOOL)arg5 inspectorController:(id)arg6 valueKeyPath:(id)arg7;
- (id)inspectedArrayControllerKeys;
- (id)inspectorController;
- (id)inspectorItemForSelectedChoice;
- (void)installIntoInspectorContentView:(id)arg1;
- (void)primitiveInvalidate;
- (void)refresh;
- (void)refreshIfNeeded;
@property(retain, nonatomic) IDEInspectorLayoutGroup *selectedChoiceLayoutGroup; // @synthesize selectedChoiceLayoutGroup=_selectedChoiceLayoutGroup;
- (void)setInspectorController:(id)arg1;
- (void)triggerRefresh;
- (void)uninstallFromInspectorContentView;
- (void)updateMenuWithValue:(id)arg1 selectedValueState:(long long)arg2;
- (void)userMadeSelection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

