//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDENavigator.h>

#import <IDEKit/DVTFindPatternManager-Protocol.h>
#import <IDEKit/IDEBatchFindNameTreeResolver-Protocol.h>
#import <IDEKit/IDEProgressSearchFieldCommandDelegate-Protocol.h>
#import <IDEKit/IDEProgressSearchFieldDelegate-Protocol.h>
#import <IDEKit/NSAnimationDelegate-Protocol.h>
#import <IDEKit/NSPopoverDelegate-Protocol.h>
#import <IDEKit/NSTextFieldDelegate-Protocol.h>

@class DVTBorderedView, DVTFindPatternTextField, DVTLayoutView_ML, DVTSplitViewItem, DVTStackView_ML, IDEBatchFindLocationPickerView, IDEBatchFindQuery, IDEBatchFindReplaceButtonLayoutView, IDEBatchFindReplaceableSheetController, IDEBatchFindResultsOutlineController, IDEBatchFindStrategiesController, IDEBatchFindTwoButtonLayout, IDECallHierarchyViewController, IDENavigableItem, IDENavigableItemCoordinator, IDEPathControl, IDEProgressSearchField, NSArray, NSAttributedString, NSButton, NSMenu, NSMutableArray, NSPopUpButton, NSPopUpButtonCell, NSString, NSTextField, NSView;

@interface IDEBatchFindNavigator : IDENavigator <NSTextFieldDelegate, NSPopoverDelegate, NSAnimationDelegate, IDEProgressSearchFieldCommandDelegate, IDEProgressSearchFieldDelegate, DVTFindPatternManager, IDEBatchFindNameTreeResolver>
{
    DVTStackView_ML *searchContentView;
    DVTBorderedView *topBorderView;
    DVTBorderedView *bottomBorderView;
    DVTStackView_ML *bottomStackView;
    NSView *replaceView;
    IDEBatchFindReplaceButtonLayoutView *replaceButtonView;
    DVTBorderedView *statusView;
    DVTBorderedView *statusBorderedView;
    NSTextField *resultsField;
    IDEPathControl *_pathControl;
    NSPopUpButton *_findModeButton;
    IDEProgressSearchField *_findStringField;
    DVTFindPatternTextField *_replaceStringField;
    NSButton *_scopeButton;
    DVTSplitViewItem *_contentViewSplitViewItem;
    DVTSplitViewItem *_locationPickerSplitViewItem;
    NSMutableArray *_observerTokens;
    int _findMode;
    NSAttributedString *_findAttributedString;
    NSAttributedString *_replaceAttributedString;
    NSString *_statusString;
    NSString *_statusTitle;
    double _lastStatusUpdate;
    double _lastStatusUpdateDrawTime;
    double _batchFindStartTime;
    double _totalBatchFindTime;
    double _minBatchSearchTime;
    double _maxBatchSearchTime;
    long long _totalBatchFindCount;
    long long _totalResultsCount;
    double _minResultperSec;
    double _maxResultperSec;
    NSArray *_selectedResultNavigables;
    NSArray *_selectedObjects;
    IDEBatchFindReplaceableSheetController *_replacePreviewSheet;
    BOOL _configurationControllerInited;
    IDEBatchFindStrategiesController *_configurationController;
    IDEBatchFindQuery *_activeQuery;
    NSArray *_rootNavigables;
    IDENavigableItem *_selectedNavigable;
    IDENavigableItemCoordinator *_findMenuNavigableItemCoordinator;
    int _firstLevelIndex;
    int _secondLevelIndex;
    int _thirdLevelIndex;
    NSArray *_strategiesControllerObjects;
    NSArray *_criteriaEditorObjects;
    BOOL _startSearchAfterHidingLocationPicker;
    IDECallHierarchyViewController *_callHierarchyViewController;
    BOOL _findStringValid;
    BOOL _showingLocationPicker;
    IDEBatchFindLocationPickerView *_locationPicker;
    NSPopUpButton *_matchCaseButton;
    DVTLayoutView_ML *_contentView;
    IDEBatchFindTwoButtonLayout *_twoButtonLayout;
    NSString *_findResultFilterString;
    NSString *_lastFindString;
    IDEBatchFindResultsOutlineController *_resultsOutlineController;
    NSPopUpButtonCell *_matchCasePopUpButtonCell;
    NSMenu *_matchCasePopUpMenu;
}

+ (id)_keyPathsForValuesAffectingCanReplaceAllAndCanShowReplacePreview;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)defaultViewNibName;
+ (id)keyPathsForValuesAffectingCanReplace;
+ (id)keyPathsForValuesAffectingCanReplaceAll;
+ (id)keyPathsForValuesAffectingCanShowReplacePreview;
+ (id)keyPathsForValuesAffectingFindString;
+ (id)keyPathsForValuesAffectingReplaceString;
- (void).cxx_destruct;
- (void)_addHistoryItemForCallHierarchy:(id)arg1;
- (void)_cancelCallHierarchyOperations;
- (void)_cancelFindOperation;
- (id)_currentScopeDescription;
- (void)_doReplaceOnResults:(id)arg1;
- (id)_findField;
- (BOOL)_hasFindPattern;
- (BOOL)_hasValidFindPattern;
- (void)_insertFindPattern:(id)arg1;
- (id)_localizedNumberDescription:(long long)arg1;
- (void)_prepareReplaceOnResults:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)_recentsMenu;
- (id)_replaceField;
- (void)_replaceResults:(id)arg1 withString:(id)arg2;
- (void)_restoreFindHistory:(id)arg1;
- (BOOL)_searchShouldIncludeRegularExpressionSearchForString:(id)arg1;
- (void)_setRootSymbolsForCallHierarchy:(id)arg1;
- (void)_setSelectedNavigable:(id)arg1;
- (void)_setupBindings;
- (void)_setupObservers;
- (void)_setupSearchField;
- (void)_showCallHierarchyForFindString:(id)arg1;
- (void)_sizeToFit;
- (void)_startFindOperation;
- (id)_statusAttributes;
- (void)_statusNeedsUpdating:(BOOL)arg1;
- (void)_uninstallBindings;
- (void)_updateContentView;
- (void)_updateMatchCaseButton;
- (void)_updateOutputSelection;
- (void)_updatePlaceholder;
- (void)_updateSearchLocations:(id)arg1;
- (void)_updateStatus;
@property(retain) IDEBatchFindQuery *activeQuery; // @synthesize activeQuery=_activeQuery;
- (void)animateLocationPicker:(id)arg1;
- (void)animationDidEnd:(id)arg1;
@property(readonly) BOOL canReplace;
@property(readonly) BOOL canReplaceAll;
@property(readonly) BOOL canShowReplacePreview;
- (void)clearSearchHistory;
- (void)commitStateToDictionary:(id)arg1;
@property(retain, nonatomic) IDEBatchFindStrategiesController *configurationController; // @synthesize configurationController=_configurationController;
- (id)containerForNameTree:(id)arg1;
@property(retain) DVTLayoutView_ML *contentView; // @synthesize contentView=_contentView;
- (id)control:(id)arg1 textView:(id)arg2 completions:(id)arg3 forPartialWordRange:(struct _NSRange)arg4 indexOfSelectedItem:(long long *)arg5;
- (void)controlTextDidChange:(id)arg1;
- (void)createScopeItemFromGroupSelection:(id)arg1;
- (BOOL)delegateFirstResponder;
- (id)domainIdentifier;
- (id)filterControlBar;
- (id)filterDefinitionIdentifier;
@property(copy, nonatomic) NSAttributedString *findAttributedString; // @synthesize findAttributedString=_findAttributedString;
- (id)findFieldForField:(id)arg1;
@property(retain) IDENavigableItemCoordinator *findMenuNavigableItemCoordinator; // @synthesize findMenuNavigableItemCoordinator=_findMenuNavigableItemCoordinator;
@property(nonatomic) int findMode; // @synthesize findMode=_findMode;
- (void)findPatternField:(id)arg1 findPatternDoubleClicked:(id)arg2;
@property(copy, nonatomic) NSString *findResultFilterString; // @synthesize findResultFilterString=_findResultFilterString;
@property(copy, nonatomic) NSString *findString;
- (void)findStringFieldAction:(id)arg1;
@property(nonatomic) BOOL findStringValid; // @synthesize findStringValid=_findStringValid;
- (void)findSymbolInWorkspace:(id)arg1;
@property(nonatomic) int findType;
- (id)getScopeString;
- (void)hideLocationPicker:(id)arg1;
@property(copy, nonatomic) NSString *lastFindString; // @synthesize lastFindString=_lastFindString;
- (void)loadView;
@property(retain) IDEBatchFindLocationPickerView *locationPicker; // @synthesize locationPicker=_locationPicker;
- (void)locationPickerDeleteAction:(id)arg1;
- (void)locationPickerDoubleClickAction:(id)arg1;
- (void)locationPickerEditAction:(id)arg1;
- (void)locationPickerSelectionUpdated;
- (BOOL)makePrimaryFilterControlKey;
@property(retain) NSPopUpButton *matchCaseButton; // @synthesize matchCaseButton=_matchCaseButton;
- (void)matchCaseButtonAction:(id)arg1;
@property(retain) NSPopUpButtonCell *matchCasePopUpButtonCell; // @synthesize matchCasePopUpButtonCell=_matchCasePopUpButtonCell;
@property(retain) NSMenu *matchCasePopUpMenu; // @synthesize matchCasePopUpMenu=_matchCasePopUpMenu;
- (BOOL)pathControlIsEnabled;
- (void)performReplaceFromPreview:(id)arg1;
- (void)primitiveInvalidate;
- (void)replaceAllAction:(id)arg1;
@property(copy, nonatomic) NSAttributedString *replaceAttributedString; // @synthesize replaceAttributedString=_replaceAttributedString;
- (id)replaceFieldForField:(id)arg1;
- (void)replaceSelectedAction:(id)arg1;
@property(copy) NSString *replaceString;
- (void)replaceStringFieldAction:(id)arg1;
@property(retain, nonatomic) IDEBatchFindResultsOutlineController *resultsOutlineController; // @synthesize resultsOutlineController=_resultsOutlineController;
- (void)revertStateWithDictionary:(id)arg1;
@property(readonly) NSArray *rootNavigables; // @synthesize rootNavigables=_rootNavigables;
- (void)sanitizeStrings;
- (void)searchField:(id)arg1 receivedCommandSelector:(SEL)arg2;
- (void)searchFieldCancelled:(id)arg1;
- (void)searchInProjectNavigatorSelection:(id)arg1;
- (void)selectFindField:(id)arg1;
- (void)selectFindResult:(id)arg1 inResultGroup:(id)arg2;
@property(retain) IDENavigableItem *selectedNavigable;
@property(nonatomic) BOOL showingLocationPicker; // @synthesize showingLocationPicker=_showingLocationPicker;
@property(copy) NSString *statusString; // @synthesize statusString=_statusString;
@property(copy) NSString *statusTitle; // @synthesize statusTitle=_statusTitle;
@property(retain) IDEBatchFindTwoButtonLayout *twoButtonLayout; // @synthesize twoButtonLayout=_twoButtonLayout;
- (void)setupLocationPicker;
- (void)showCallHierarchyForFindString:(id)arg1;
- (void)showCallHierarchyForSymbol:(id)arg1;
- (void)showLocationPicker:(id)arg1;
- (void)showReplacePreview:(id)arg1;
- (BOOL)supportsPatterns;
- (void)updateMenuState:(id)arg1 forLevel:(int)arg2;
- (void)updatePathbar;
- (void)updateScopeItems:(id)arg1;
- (void)updateScopeString;
- (void)viewDidInstall;
- (void)viewWillUninstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

