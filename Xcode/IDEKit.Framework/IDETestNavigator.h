//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEOutlineBasedNavigator.h>

#import <IDEKit/DVTOutlineViewDelegate-Protocol.h>
#import <IDEKit/DVTTableRowViewMouseInsideDelegate-Protocol.h>
#import <IDEKit/IDERefactoringExpressionSource-Protocol.h>
#import <IDEKit/IDETestingSelection-Protocol.h>
#import <IDEKit/NSMenuDelegate-Protocol.h>
#import <IDEKit/NSOutlineViewDelegate-Protocol.h>

@class IDENavigatorOutlineView, IDESelection, IDEWorkspaceTabController, NSDictionary, NSMutableArray, NSMutableSet, NSSet, NSString;

@interface IDETestNavigator : IDEOutlineBasedNavigator <DVTTableRowViewMouseInsideDelegate, NSOutlineViewDelegate, NSMenuDelegate, IDETestingSelection, IDERefactoringExpressionSource, DVTOutlineViewDelegate>
{
    NSDictionary *_previouslyRestoredStateDictionary;
    BOOL _restoringState;
    NSMutableSet *_expandedItems;
    NSDictionary *_expandedItemNamesBeforeFiltering;
    NSMutableSet *_collapsedItems;
    NSDictionary *_collapsedItemNamesBeforeFiltering;
    NSMutableArray *_stateChangeObservingTokens;
    NSString *_testNamePatternString;
    BOOL _mouseIsWithinStatusRect;
    long long _rowForWhichRunWasPressed;
    BOOL _showFailingTestsOnly;
    BOOL _showSchemeTestablesOnly;
    BOOL _isRunningTests;
    long long _loadingProgress;
}

+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)_configureStandardTableViewCell:(id)arg1 toNavItemsRepresentedObject:(id)arg2;
- (id)_contextForTestingHelper;
- (int)_countOfTestsFor:(id)arg1 excluded:(int *)arg2 failed:(int *)arg3 inSchemeAction:(id)arg4;
- (void)_expandAllEnabledTestables;
- (void)_handleRunTestButtonPressed:(id)arg1;
- (unsigned long long)_itemDepth:(id)arg1;
- (BOOL)_itemHasSubTests:(id)arg1;
- (id)_itemsBeforeFilteringAsNameTreeIn:(id)arg1;
- (id)_localizedString:(id)arg1;
- (BOOL)_restoreExpandedAndCollapsedItemsIfStateExists;
- (id)_selectedItemsAsNameTree;
- (void)_setCollapsedItems:(id)arg1;
- (void)_setExpandedItems:(id)arg1;
- (void)_setSelectedItemsFromNameTree:(id)arg1;
- (id)_summaryOfTestable:(id)arg1;
- (id)_tableCellViewForTestNavItem:(id)arg1;
- (id)_tableCellViewForTestableNavItem:(id)arg1;
- (void)_updateEmptyContentPlaceholders;
- (void)_updateEnablednessForTableCellView:(id)arg1;
- (void)_updateFilter;
- (void)_updateFilterButtonMenu:(id)arg1;
- (void)_updateSchemeFilter;
- (void)_updateStatusViewForTableCellView:(id)arg1;
- (void)_updateTableCellViewsUIState:(id)arg1;
- (void)_updateTableCellViewsUIStateForNavItem:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)configureStateSavingObservers;
- (id)domainIdentifier;
- (id)filterButtonAccessibilityDescription;
- (id)filterButtonMenu;
- (id)filterButtonToolTip;
- (id)filterDefinitionIdentifier;
- (void)focusedEditorDidSelectItem:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isLoadingComplete;
@property BOOL isRunningTests; // @synthesize isRunningTests=_isRunningTests;
- (void)loadView;
@property(readonly) long long loadingProgress; // @synthesize loadingProgress=_loadingProgress;
- (void)menuNeedsUpdate:(id)arg1;
- (id)openSpecifierForNavigableItem:(id)arg1 error:(id *)arg2;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (void)primitiveInvalidate;
- (id)refactoringExpressionUsingContextMenu:(BOOL)arg1;
- (void)revealTestsAndTestables:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (id)selectedTestable;
- (id)selectedTestsAndTestables;
- (void)setFilter:(id)arg1;
@property(nonatomic) BOOL showFailingTestsOnly; // @synthesize showFailingTestsOnly=_showFailingTestsOnly;
@property(nonatomic) BOOL showSchemeTestablesOnly; // @synthesize showSchemeTestablesOnly=_showSchemeTestablesOnly;
@property(retain, nonatomic) NSString *testNamePatternString; // @synthesize testNamePatternString=_testNamePatternString;
- (void)setVisibleRectString:(id)arg1;
- (void)tableRowView:(id)arg1 mouseInside:(BOOL)arg2;
- (id)testingExpressionUsingContextMenu:(BOOL)arg1;
- (void)viewDidInstall;
- (void)viewWillUninstall;
- (id)visibleRectString;

// Remaining properties
@property(copy) NSSet *collapsedItems; // @dynamic collapsedItems;
@property(readonly, copy) IDESelection *contextMenuSelection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy) NSSet *expandedItems; // @dynamic expandedItems;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSMutableSet *mutableCollapsedItems; // @dynamic mutableCollapsedItems;
@property(readonly, copy) NSMutableSet *mutableExpandedItems; // @dynamic mutableExpandedItems;
@property(retain) IDENavigatorOutlineView *outlineView; // @dynamic outlineView;
@property(readonly, copy) IDESelection *outputSelection;
@property(readonly) Class superclass;
@property(readonly, nonatomic) IDEWorkspaceTabController *workspaceTabController;

@end

