//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTOutlineView.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTDelayedInvocation, DVTNotificationToken, DVTStackBacktrace, DVTTimeSlicedMainThreadWorkQueue, IDENavigableItemFilter, NSArray, NSHashTable, NSMapTable, NSMutableArray, NSPredicate, NSSet, NSString, _IDENavigatorOutlineViewDataSource;

@interface IDENavigatorOutlineView : DVTOutlineView <DVTInvalidation>
{
    long long _batchRowUpdateCount;
    NSHashTable *_unfilteredRootItems;
    DVTDelayedInvocation *_delayedInvocation;
    SEL _keyAction;
    NSMapTable *_cachedRowItemsToHeights;
    _IDENavigatorOutlineViewDataSource *_interposedDelegate;
    _IDENavigatorOutlineViewDataSource *_interposedDataSource;
    BOOL _isLiveScrolling;
    BOOL _suspendPushingOutlineViewSelectionToBoundObjects;
    NSMutableArray *_entriesToRestoreToVisibleRect;
    DVTNotificationToken *_variableRowHeightLiveScrollStartObserver;
    DVTNotificationToken *_variableRowHeightLiveScrollEndObserver;
    DVTDelayedInvocation *_variableRowHeightVisibleRowsHeightCalculatorInvocation;
    struct {
        unsigned int _needsToPushRowSelection:1;
        unsigned int _needsToRefreshBoundExpandedItems:1;
        unsigned int _suspendRowHeightInvalidation:1;
        unsigned int _doingBatchExpand:1;
        unsigned int _filteringEnabled:1;
        unsigned int _scrollSelectionToVisibleAfterRefreshingSelection:1;
        unsigned int _resettingRootItems:1;
        unsigned int _reloadingItems:1;
        unsigned int _didRecieveKeyDownEvent:1;
        unsigned int _didPublishSelectedObjects:1;
        unsigned int _supportsTrackingAreasForCells:1;
        unsigned int _inSameRunloopForTrackingSelectionVisibleRect:1;
        unsigned int _invalidating:1;
    } _idenovFlags;
    BOOL _filteringActive;
    BOOL _supportsVariableHeightCells;
    BOOL _tracksSelectionVisibleRect;
    IDENavigableItemFilter *_filter;
    NSPredicate *_filterPredicate;
    NSSet *_editorSelectedNavigableItems;
    DVTTimeSlicedMainThreadWorkQueue *_expandingItemsWorkQueue;
    long long _filterProgress;
}

+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingEmptyContentString;
+ (id)keyPathsForValuesAffectingFilteringActive;
- (void).cxx_destruct;
- (void)_beginBatchRowUpdates;
- (id)_cachedHeightOfItemOrNil:(id)arg1;
- (double)_cachedOrEstimatedOrDefaultHeightOfItem:(id)arg1;
- (void)_concludeBatchRowUpdates;
- (void)_expandAncestorsForNavigableItem:(id)arg1;
- (void)_ide_commonInit;
- (double)_indentationForRow:(long long)arg1 withLevel:(long long)arg2 isSourceListGroupRow:(BOOL)arg3;
- (BOOL)_isVariableRowHeightViewBasedOutlineView;
- (unsigned long long)_outlineTableColumnIndex;
- (void)_pushOutlineViewSelectionToBoundObjects;
- (void)_recalculateAndCacheHeightForRowView:(id)arg1 row:(long long)arg2;
- (void)_refreshBoundExpandedAndSelectedItems:(id)arg1;
- (void)_refreshDisplayForItem:(id)arg1;
- (void)_rememberEntriesToRestoreToVisibleRect;
- (void)_restoreEntriesToVisibleRect;
- (void)_setSecondaryHighlight:(BOOL)arg1 forNavigableItem:(id)arg2;
- (id)_suspendEditing:(long long *)arg1;
- (void)_updateBoundContentArrayOrSet;
- (void)_updateCachedRowHeightsForVisibleRows;
- (void)_updateRootItems:(id)arg1 sortDescriptors:(id)arg2;
- (void)_updateSecondaryHighlightForViewBasedOutlineView:(id)arg1 newItems:(id)arg2;
- (void)accessibilitySetSelectedRowsAttribute:(id)arg1;
- (void)collapseItem:(id)arg1;
- (void)collapseItem:(id)arg1 collapseChildren:(BOOL)arg2;
- (void)didAddRowView:(id)arg1 forRow:(long long)arg2;
- (void)didRemoveRowView:(id)arg1 forRow:(long long)arg2;
- (id)dvtExtraBindings;
@property(retain, nonatomic) NSSet *editorSelectedNavigableItems; // @synthesize editorSelectedNavigableItems=_editorSelectedNavigableItems;
- (id)emptyContentString;
- (void)expandAncestorsForItem:(id)arg1;
- (void)expandItem:(id)arg1;
- (void)expandItem:(id)arg1 expandChildren:(BOOL)arg2;
- (void)expandItemIncludingAncestors:(id)arg1 expandChildren:(BOOL)arg2;
@property(retain) DVTTimeSlicedMainThreadWorkQueue *expandingItemsWorkQueue; // @synthesize expandingItemsWorkQueue=_expandingItemsWorkQueue;
@property(retain, nonatomic) IDENavigableItemFilter *filter; // @synthesize filter=_filter;
@property(copy, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(readonly) long long filterProgress; // @synthesize filterProgress=_filterProgress;
- (BOOL)filteringActive;
- (BOOL)filteringEnabled;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct _NSRange)initialSelectionRangeForCell:(id)arg1 proposedRange:(struct _NSRange)arg2;
@property(readonly, getter=isFilteringActive) BOOL filteringActive; // @synthesize filteringActive=_filteringActive;
@property(readonly, getter=isReloadingItems) BOOL reloadingItems;
- (BOOL)isRootItem:(id)arg1;
@property(nonatomic) SEL keyAction; // @synthesize keyAction=_keyAction;
- (void)keyDown:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)noteAllRowHeightsMayHaveChanged;
- (void)noteHeightOfRowsWithIndexesChanged:(id)arg1;
- (void)primitiveInvalidate;
- (void)processPendingChanges;
- (void)quickLookWithEvent:(id)arg1;
@property(readonly) id realDataSource;
- (id)realDelegate;
- (void)refreshBoundExpandedItems;
- (void)refreshBoundSelectedObjects;
- (void)reloadData;
- (void)reloadItem:(id)arg1 reloadChildren:(BOOL)arg2;
@property(copy) NSArray *rootItems;
- (BOOL)scrollRectToVisible:(struct CGRect)arg1;
- (void)scrollSelectionToVisible;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFilteringEnabled:(BOOL)arg1;
- (void)setShouldSuspendRowHeightInvalidation:(BOOL)arg1;
- (void)setSortDescriptors:(id)arg1;
@property(nonatomic) BOOL supportsVariableHeightCells; // @synthesize supportsVariableHeightCells=_supportsVariableHeightCells;
@property BOOL tracksSelectionVisibleRect; // @synthesize tracksSelectionVisibleRect=_tracksSelectionVisibleRect;
- (BOOL)shouldSuspendRowHeightInvalidation;
- (void)suspendEditingWhilePerformingBlock:(CDUnknownBlockType)arg1;
- (void)updateBoundContentArray;
- (void)updateBoundContentSet;
- (void)updateBoundExpandedItems;
- (void)updateBoundSelectedObjects;
- (void)viewDidEndLiveResize;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

