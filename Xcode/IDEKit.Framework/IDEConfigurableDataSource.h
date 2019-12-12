//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/NSOutlineViewDataSource-Protocol.h>
#import <IDEKit/NSOutlineViewDelegate-Protocol.h>

@class DVTStackBacktrace, NSArray, NSMapTable, NSMutableArray, NSOutlineView, NSString, NSTableColumn;
@protocol XCEDataRootAdapterP;

@interface IDEConfigurableDataSource : NSObject <NSOutlineViewDataSource, NSOutlineViewDelegate, DVTInvalidation>
{
    NSMutableArray *_roots;
    NSMutableArray *_displayedRoots;
    NSArray *_draggedNodes;
    NSTableColumn *_imageColumn;
    id <XCEDataRootAdapterP> _rootAdapter;
    NSArray *_draggedRootNodes;
    NSOutlineView *_outlineView;
    id _context;
    NSMapTable *_nodesForData;
    long long _batchUpdateLevel;
    struct {
        unsigned int _reserved:10;
        _Bool cleared;
        unsigned int _draggedNodesAreDeletable:1;
        unsigned int _draggedOutsideOutlineView:1;
        unsigned int _adapterRespondsTo_addRootPaths:1;
        unsigned int _adapterRespondsTo_moveDataNodes:1;
        unsigned int _adapterRespondsTo_removeRootDataNode:1;
        unsigned int _adapterRespondsTo_doubleClickDataNode:1;
        unsigned int _adapterRespondsTo_selectDataNode:1;
        unsigned int _adapterRespondsTo_textDidEndEditing:1;
        unsigned int _adapterRespondsTo_updateAndSaveRoots:1;
        unsigned int _adapterRespondsTo_askToDeleteRootNodes:1;
        unsigned int _adapterRespondsTo_contextMenuForSelectedNodes:1;
        unsigned int _adapterRespondsTo_pasteboardFilenamesForNodes:1;
        unsigned int _adapterRespondsTo_writeItemsToPasteboard:1;
        unsigned int _adapterRespondsTo_createItemsFromPasteboard:1;
        unsigned int _adapterRespondsTo_acceptDrop:1;
        unsigned int _adapterRespondsTo_canAcceptDroppedItem:1;
        unsigned int _adapterRespondsTo_validateDrop:1;
        unsigned int _adapterRespondsTo_acceptDroppedItems:1;
        unsigned int _adapterRespondsTo_didFailToFormatString:1;
        unsigned int _adapterRespondsTo_sortDescriptorsDidChange:1;
        unsigned int _adapterRespondsTo_filterDisplayedRootNode:1;
    } _flags;
    BOOL _requireOneNodePerData;
}

+ (id)arrayOfSelectedNodesForOutlineView:(id)arg1;
+ (void)configureScrollView:(id)arg1 withOutlineView:(id)arg2;
+ (id)dataSourceWithRootAdapter:(id)arg1;
+ (void)initialize;
+ (id)selectedNodeIfExactlyOneForOutlineView:(id)arg1;
- (void).cxx_destruct;
- (void)_addCachesForNodeAndItsData:(id)arg1;
- (void)_addCachesForNodeAndItsDataRecursively:(id)arg1;
- (void)_addPersistentObjectForNode:(id)arg1 toArray:(id)arg2 ifPassingTest:(CDUnknownBlockType)arg3;
- (id)_childrenOfItem:(id)arg1;
- (void)_disappearanceAnimationEffectDidEnd:(void *)arg1;
- (void)_removeCachesForNodeAndItsData:(id)arg1;
- (void)_setDragSlideBack:(BOOL)arg1;
- (void)_showDisappearanceAnimationEffectForDragAtPoint:(struct CGPoint)arg1;
- (id)addRootForDataObject:(id)arg1 withAdapter:(struct NSObject *)arg2;
- (void)addRootsForDataObjects:(id)arg1 withCommonAdapter:(struct NSObject *)arg2;
- (id)arrayOfCollapsedPersistentObjectsForOutlineView:(id)arg1;
- (id)arrayOfExpandedPersistentObjectsForOutlineView:(id)arg1;
- (id)arrayOfNonDefaultCollapsedPersistentObjects;
- (id)arrayOfNonDefaultExpandedPersistentObjects;
- (id)arrayOfPersistentObjectsFromDataNodesPassingTest:(CDUnknownBlockType)arg1;
- (id)arrayOfSelectedPersistentObjectsForOutlineView:(id)arg1;
- (void)batchUpdateWithBlock:(CDUnknownBlockType)arg1;
- (void)beginBatchUpdates;
- (void)clear;
- (void)collapseArrayOfPersistentObjects:(id)arg1 forOutlineView:(id)arg2;
- (void)configureDragAndDropForOutlineView:(id)arg1;
- (void)configureOutlineView:(id)arg1;
- (void)configureOutlineView:(id)arg1 withColumnTitled:(id)arg2 roots:(id)arg3 rootAdapter:(id)arg4 useImages:(BOOL)arg5 sourceList:(BOOL)arg6;
- (void)consistencyCheck;
@property(retain, nonatomic) id context; // @synthesize context=_context;
- (id)contextMenuForOutlineView:(id)arg1;
- (BOOL)control:(id)arg1 didFailToFormatString:(id)arg2 errorDescription:(id)arg3;
- (void)controlTextDidEndEditing:(id)arg1;
- (id)dataNodeForPersistentObject:(id)arg1 loadIfNecessary:(BOOL)arg2;
- (id)displayedRoots;
- (void)doubleClickAction:(id)arg1;
@property(copy) NSArray *draggedNodes; // @synthesize draggedNodes=_draggedNodes;
- (void)endBatchUpdates;
- (void)enumerateDataNodesForPersistentObjects:(id)arg1 loadIfNecessary:(BOOL)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)exactlyOneNodeForData:(id)arg1 withinNode:(id)arg2;
- (id)exactlyOneSelectedNode;
- (void)expandArrayOfPersistentObjects:(id)arg1 forOutlineView:(id)arg2;
- (void)expandNodesToDefaultState;
- (id)findNodeFor:(id)arg1 recursivelyStartingWith:(id)arg2;
- (id)findNodeFor:(id)arg1 withinParent:(id)arg2;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1 defaultFrame:(struct CGRect)arg2;
- (BOOL)handleMouseDown:(id)arg1 forOutlineView:(id)arg2;
- (BOOL)handleReturnKey:(id)arg1 forOutlineView:(id)arg2 changeFocus:(BOOL)arg3;
@property(retain, nonatomic) NSTableColumn *imageColumn; // @synthesize imageColumn=_imageColumn;
- (id)init;
- (BOOL)isCleared;
- (id)nodeOrNodeSetForData:(id)arg1 withinNode:(id)arg2;
- (BOOL)organizerOutlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)organizerOutlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)organizerOutlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
@property(retain, nonatomic) NSOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)outlineView:(id)arg1 completeDeletionOfSelectedRowsByUser:(BOOL)arg2;
- (BOOL)outlineView:(id)arg1 createItemsFromPasteboard:(id)arg2;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 deleteItems:(id)arg2;
- (void)outlineView:(id)arg1 deleteSelectedRowsByUser:(BOOL)arg2;
- (void)outlineView:(id)arg1 draggedImage:(id)arg2 beganAt:(struct CGPoint)arg3;
- (void)outlineView:(id)arg1 draggedImage:(id)arg2 endedAt:(struct CGPoint)arg3 operation:(unsigned long long)arg4;
- (void)outlineView:(id)arg1 draggedImage:(id)arg2 movedTo:(struct CGPoint)arg3;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 itemForPersistentObject:(id)arg2;
- (id)outlineView:(id)arg1 itemForPersistentObject:(id)arg2 loadIfNecessary:(BOOL)arg3;
- (id)outlineView:(id)arg1 menuForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)outlineView:(id)arg1 persistentObjectForItem:(id)arg2;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (void)outlineView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)primitiveInvalidate;
- (void)reloadDataAndDisplayedNodes;
- (void)removeRoot:(id)arg1;
@property(nonatomic) BOOL requireOneNodePerData; // @synthesize requireOneNodePerData=_requireOneNodePerData;
@property(retain, nonatomic) id <XCEDataRootAdapterP> rootAdapter;
@property(retain, nonatomic) NSMutableArray *roots; // @synthesize roots=_roots;
- (void)selectArrayOfPersistentObjects:(id)arg1 forOutlineView:(id)arg2;
- (id)selectedData;
- (id)selectedNodes;
- (void)setNeedsDisplayForRow:(long long)arg1;
- (void)updateVisibleRowHeightsPlusExtension:(unsigned long long)arg1;
- (struct _NSRange)visibleRowRangePlusExtension:(unsigned long long)arg1;
- (void)voidDisplayedRoots;
- (void)voidWidthDependentCachedRowHeights;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

