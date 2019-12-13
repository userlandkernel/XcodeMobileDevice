//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXInspectorPaneModule.h>

#import <DevToolsInterface/NSTableViewDataSource-Protocol.h>
#import <DevToolsInterface/NSTableViewDelegate-Protocol.h>
#import <DevToolsInterface/XCEDataRootAdapterP-Protocol.h>

@class NSArray, NSArrayController, NSMutableArray, NSMutableDictionary, NSPopUpButton, NSSearchField, NSSet, NSSplitView, NSString, NSTextView, PBXExtendedOutlineView, XCPropertyConditionSet, XCPropertyDefinition, XCPropertyInfoContext;

@interface XCBuildPropertiesInspectorPane : PBXInspectorPaneModule <NSTableViewDataSource, NSTableViewDelegate, XCEDataRootAdapterP>
{
    PBXExtendedOutlineView *_buildPropertiesOutlineView;
    NSSearchField *_buildPropertiesSearchField;
    NSPopUpButton *_categoryPopUpButton;
    NSPopUpButton *_configurationPopUpButton;
    NSPopUpButton *_actionPopUpButton;
    NSSplitView *_buildPropertiesSplitView;
    NSTextView *_buildPropertiesTextView;
    NSString *_selectedConfigurationName;
    NSArray *_selectedConfigurationNames;
    NSMutableArray *_selectedConfigurations;
    NSArrayController *_selectedConfigurationsArrayController;
    XCPropertyInfoContext *_propertyInfoContext;
    NSMutableArray *_buildPropertiesArray;
    NSArrayController *_buildConfigurationsController;
    NSArrayController *_configurationFilesController;
    NSMutableArray *_buildPropertySpecifications;
    NSArray *_filterDictionaries;
    unsigned long long _selectedCategoryIndex;
    unsigned long long _lastSelectedCategoryIndex;
    NSMutableArray *_configurationFileList;
    BOOL _showPropertyAssignments;
    BOOL _showRawPropertyNames;
    struct CGRect _savedDocumentVisibleRect;
    BOOL _savedDocumentVisibleRectLocked;
    BOOL _showInternalNames;
    BOOL _showDefinitions;
    NSSearchField *_searchField;
    NSString *_searchString;
    NSString *_buildSettingDescription;
    NSMutableDictionary *_adapterForUIType;
    BOOL _needsCompleteUpdate;
    BOOL _processingCompleteUpdate;
    NSString *_selectedConfiguration;
    NSString *_preselectedName;
    XCPropertyDefinition *_preselectedDefinition;
    XCPropertyConditionSet *_preselectedConditionSet;
    NSString *_preselectedEditColumnId;
    NSMutableArray *_retainingObjects;
    long long _disableUserTrigger;
    NSArray *_currentBuildPropertySpecifications;
    NSSet *_currentPropertyDefinitionNames;
    NSArray *_currentUserDefinedNames;
    BOOL _firstRebuild;
    long long _searchCategory;
}

+ (id)alternateLabel;
+ (BOOL)canInspectItems:(id)arg1;
+ (void)initialize;
+ (id)inspectableClasses;
+ (id)keyPathsForValuesAffectingActiveBuildConfigurationMenuTitle;
+ (id)keyPathsForValuesAffectingCurrentInspectedConfigurationListContainer;
+ (id)keyPathsForValuesAffectingProject;
+ (id)keyPathsForValuesAffectingPropertyNameColumnTitle;
+ (id)keyPathsForValuesAffectingPropertyValueColumnTitle;
+ (id)keyPathsForValuesAffectingSelectedConfigurationList;
+ (id)keyPathsForValuesAffectingShowPropertyAssignmentsMenuItemTitle;
+ (id)keyPathsForValuesAffectingShowRawPropertyNamesMenuItemTitle;
+ (id)keyPathsForValuesAffectingTargets;
+ (id)label;
+ (unsigned long long)panelPosition;
- (void)_alertWithErrorString:(id)arg1;
- (void)_alertWithErrorStringDidEndOrDismiss:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_configurationNamesChangedInProject:(id)arg1;
- (void)_delayedAlertWithErrorString:(id)arg1;
- (void)_disableFlushInspectorWindow;
- (void)_disableFlushInspectorWindowLocal;
- (void)_enableFlushInspectorWindow;
- (void)_enableFlushInspectorWindowLocal;
- (void)_logSortDescriptors:(id)arg1 title:(id)arg2;
- (BOOL)_modifyBuildPropertiesUsingPasteboard:(id)arg1;
- (void)_moduleSpecificDebugInfoForDebugMenu:(id)arg1;
- (void)_rebuildConfigurationFileList;
- (void)_rebuildConfigurationPopupButton;
- (void)_rebuildSelectedConfigurationNames;
- (void)_rebuildSelectedConfigurations;
- (void)_restoreSelectedConfigurationName;
- (void)_selectConfigurationInPopUpButton;
- (void)_storeSelectedConfigurationName;
- (void)_updateActionPopUp;
- (void)activeBuildConfigurationChanged:(id)arg1;
- (struct NSObject *)adapterForUIType:(id)arg1;
- (void)addBuildPropertyToSelectionForNewCondition:(id)arg1;
- (void)addCondition:(id)arg1;
- (void)addUserDefinedBuildProperty:(id)arg1;
- (void)addUserDefinedSetting:(id)arg1;
- (id)additionalPasteboardTypes;
- (id)additionalPasteboardTypesToDeclare;
- (void)alertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (id)allPropertyNamesMutable;
- (void)applicationDidUpdate:(id)arg1;
- (id)buildConfigurationNames;
- (id)buildPropertiesOutlineView;
@property(copy) NSString *buildSettingDescription; // @synthesize buildSettingDescription=_buildSettingDescription;
- (void)callSetNeedsCompleteUpdate;
- (void)callSetNeedsCompleteUpdate:(id)arg1;
- (void)callSetNeedsDisplay;
- (void)callSetNeedsDisplay:(id)arg1;
- (void)cancelPendingEdits;
- (void)closeModule;
- (id)configurationFileList;
- (void)configureSearchMenu;
- (BOOL)confirmPendingEdits;
- (id)currentInspectedConfigurationListContainer;
- (id)currentInspectedConfigurationListContainers;
- (void)currentInspectedItemsChanged:(id)arg1;
- (id)dataSource:(id)arg1 contextMenuForSelectedNodes:(id)arg2;
- (BOOL)dataSource:(id)arg1 control:(id)arg2 didFailToFormatString:(id)arg3 errorDescription:(id)arg4;
- (void)dataSource:(id)arg1 outlineView:(id)arg2 sortDescriptorsDidChange:(id)arg3;
- (void)dealloc;
- (id)descriptionForDataNode:(id)arg1;
- (void)editAssignmentOfSelectedBuildProperty:(id)arg1;
- (void)editConfigurations:(id)arg1;
- (id)filterDictionaries;
- (id)init;
- (id)inspectedBuildable;
- (void)invokeCompleteUpdate:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 createItemsFromPasteboard:(id)arg2;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)preselectBuildSettingNamed:(id)arg1 withDefinition:(id)arg2 conditionSet:(id)arg3 editColumnId:(id)arg4;
- (void)processCompleteUpdate;
- (id)project;
- (BOOL)projectCanClose:(id)arg1;
- (id)propertyInfoContext;
- (id)propertyNameColumnTitle;
- (BOOL)propertyNameIsValidForNewSetting:(id)arg1;
- (id)propertyValueColumnTitle;
- (void)rebuildOutlineUsingCache:(BOOL)arg1;
- (void)referenceWasAddedToProject:(id)arg1;
- (void)referenceWillBeRemovedFromProject:(id)arg1;
- (void)removeLocalAssignment:(id)arg1;
- (void)removeLocalAssignmentForSelectedBuildProperty:(id)arg1;
- (id)rootsFromBuildableUsingCache:(BOOL)arg1;
- (void)savePendingEdits:(id)arg1;
- (void)scrollToStoredPosition;
- (void)searchAction;
- (long long)searchCategory;
@property(copy) NSString *searchString; // @synthesize searchString=_searchString;
- (void)selectAnyPreselection;
- (unsigned long long)selectedCategoryIndex;
@property(copy) NSString *selectedConfiguration; // @synthesize selectedConfiguration=_selectedConfiguration;
- (id)selectedConfigurationFile;
- (id)selectedConfigurationList;
- (id)selectedConfigurationName;
- (id)selectedConfigurationNames;
- (id)selectedConfigurations;
- (void)setPropertyInfoContext:(id)arg1;
- (void)setSearchCategoryFrom:(id)arg1;
- (void)setSelectedCategoryIndex:(unsigned long long)arg1;
- (void)setSelectedConfigurationFile:(id)arg1;
- (void)setSelectedConfigurationName:(id)arg1;
- (void)setSelectedConfigurationNames:(id)arg1;
@property BOOL showDefinitions; // @synthesize showDefinitions=_showDefinitions;
@property BOOL showInternalNames; // @synthesize showInternalNames=_showInternalNames;
- (void)setShowPropertyAssignments:(BOOL)arg1;
- (void)setShowRawPropertyNames:(BOOL)arg1;
- (BOOL)showPropertyAssignments;
- (void)showPropertyAssignmentsMenuItemSelected;
- (void)showPropertyAssignmentsMenuItemSelected:(id)arg1;
- (id)showPropertyAssignmentsMenuItemTitle;
- (BOOL)showRawPropertyNames;
- (void)showRawPropertyNamesMenuItemSelected;
- (void)showRawPropertyNamesMenuItemSelected:(id)arg1;
- (id)showRawPropertyNamesMenuItemTitle;
- (void)sortRoots:(id)arg1;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 shouldCollapseSubview:(id)arg2 forDoubleClickOnDividerAtIndex:(long long)arg3;
- (void)storeScrollPosition;
- (void)takeInspectedConfigurationNameFrom:(id)arg1;
- (id)targets;
- (id)userDefinedNames;
- (void)userTriggeredRebuild;
- (BOOL)validateSelectedCategoryIndex:(id *)arg1 error:(id *)arg2;
- (BOOL)viewCanBeRemoved;
- (void)viewDidLoad;
- (void)windowDidUpdate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
