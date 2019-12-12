//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTDynamicTableViewDataSource-Protocol.h>
#import <IDEKit/DVTDynamicTableViewDelegate-Protocol.h>
#import <IDEKit/NSCacheDelegate-Protocol.h>
#import <IDEKit/NSSplitViewDelegate-Protocol.h>

@class DVTBorderedView, DVTDynamicTableView, DVTObservingToken, DVTPerformanceMetric, DVTReplacementView, IDEBatchFindNavigator, IDEBatchFindResultSet, IDEBatchFindResultsOutlineController, NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface IDEBatchFindReplacePreviewController : IDEViewController <DVTDynamicTableViewDataSource, DVTDynamicTableViewDelegate, NSSplitViewDelegate, NSCacheDelegate>
{
    DVTReplacementView *_resultsReplacementView;
    NSArray *_orderedGroupNavigables;
    NSMapTable *_previewProviderByGroupNavigable;
    NSMutableArray *_rowViewObserverTokens;
    NSMutableArray *_bindingTokens;
    NSMutableDictionary *_rowViewCache;
    NSMutableArray *_rowViews;
    NSString *_replaceString;
    DVTDynamicTableView *_dynamicTableView;
    DVTBorderedView *_bottomBorder;
    NSMapTable *_disclosedTokenMapTable;
    DVTObservingToken *_resultSetWatcher;
    DVTObservingToken *_selectionWatcher;
    BOOL _hasSelectedItems;
    BOOL _hasCheckedItems;
    BOOL _executingCheckedResultNavigablesObserver;
    BOOL _isViewReadyToPopulateTable;
    IDEBatchFindNavigator *_findNavigator;
    DVTPerformanceMetric *_rebuildSectionsPerfMetric;
    IDEBatchFindResultSet *_resultSetToInstallWhenViewIsReady;
}

+ (id)_allPreviewExtensions;
+ (id)_orderedPreviewExtensionsSupportingType:(id)arg1;
+ (Class)_previewClassForType:(id)arg1;
+ (void)initialize;
+ (id)logAspect;
- (void).cxx_destruct;
- (id)_dynamicTableView:(id)arg1 viewForRow:(long long)arg2 inSection:(long long)arg3 createIfNeeded:(BOOL)arg4;
- (void)_rebuildSections;
- (void)_scrollNavigableVisible:(id)arg1;
- (void)_udpateHasCheckedItems;
- (void)_updatePreviewSelection:(id)arg1;
- (void)_updatePreviewsSelection;
- (void)_updateRowSelectionForProvider:(id)arg1 forSectionIndex:(long long)arg2;
@property(retain) DVTBorderedView *bottomBorder; // @synthesize bottomBorder=_bottomBorder;
@property(retain) NSMapTable *disclosedTokenMapTable; // @synthesize disclosedTokenMapTable=_disclosedTokenMapTable;
- (id)dvtExtraBindings;
@property(retain) DVTDynamicTableView *dynamicTableView; // @synthesize dynamicTableView=_dynamicTableView;
- (double)dynamicTableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)dynamicTableView:(id)arg1 heightForRow:(long long)arg2 inSection:(long long)arg3;
- (long long)dynamicTableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)dynamicTableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)dynamicTableView:(id)arg1 viewForRow:(long long)arg2 inSection:(long long)arg3;
@property(retain) IDEBatchFindNavigator *findNavigator; // @synthesize findNavigator=_findNavigator;
@property BOOL hasCheckedItems; // @synthesize hasCheckedItems=_hasCheckedItems;
@property BOOL hasSelectedItems; // @synthesize hasSelectedItems=_hasSelectedItems;
@property(getter=isViewReadyToPopulateTable) BOOL viewIsReadyToPopulateTable;
- (void)loadView;
- (long long)numberOfSectionsInDynamicTableView:(id)arg1;
- (void)primitiveInvalidate;
@property(retain) NSString *replaceString; // @synthesize replaceString=_replaceString;
@property(readonly, copy) NSSet *resultNavigablesToReplace;
@property(retain) IDEBatchFindResultSet *resultSet;
@property(retain) IDEBatchFindResultSet *resultSetToInstallWhenViewIsReady; // @synthesize resultSetToInstallWhenViewIsReady=_resultSetToInstallWhenViewIsReady;
@property(readonly) IDEBatchFindResultsOutlineController *resultsOutlineController;
@property(retain) DVTReplacementView *resultsReplacementView; // @synthesize resultsReplacementView=_resultsReplacementView;
- (void)updateBoundReplaceString;
- (void)viewDidInstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

