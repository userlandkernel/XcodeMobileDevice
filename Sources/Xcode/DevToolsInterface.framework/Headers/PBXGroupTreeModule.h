//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXProjectModule.h>

#import <DevToolsInterface/NSOutlineViewDataSource-Protocol.h>
#import <DevToolsInterface/NSOutlineViewDelegate-Protocol.h>

@class NSArray, NSMenu, NSNumber, NSString, NSTableColumn, PBXExtendedOutlineView, PBXOutlineDataSourceSplitter;

@interface PBXGroupTreeModule : PBXProjectModule <NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    PBXExtendedOutlineView *_groupTreeOutlineView;
    NSMenu *_itemContextualMenu;
    NSMenu *_scmContextualMenu;
    NSMenu *_viewContextualMenu;
    NSMenu *_openAsSubmenu;
    BOOL _editingAllowed;
    BOOL _editingOfChildrenAllowed;
    struct {
        unsigned int canRename:1;
        unsigned int canDelete:1;
        unsigned int canAddToGroup:1;
        unsigned int canGroup:1;
        unsigned int canUngroup:1;
        unsigned int isSameGroup:1;
        unsigned int isGroup:1;
        unsigned int canGetStatus:1;
        unsigned int canUpdate:1;
        unsigned int canRevert:1;
        unsigned int canCompare:1;
        unsigned int canAddForSCM:1;
        unsigned int canMakeEditable:1;
        unsigned int canRemove:1;
        unsigned int canCommit:1;
        unsigned int needsToExpandRootGroup:1;
        unsigned int needsToAddSCMColumn:1;
        unsigned int oneLeafItemSelected:1;
        unsigned int isFinderElement:1;
        unsigned int RESERVED:13;
    } _gtmFlags;
    PBXOutlineDataSourceSplitter *_dataSourceSplitter;
    NSTableColumn *_SCMStatusColumn;
    NSArray *_columnConfiguration;
    id _editedItem;
    NSNumber *_lastProjectStatusRequestID;
    NSTableColumn *_targetMembershipTableColumn;
    NSTableColumn *_itemTableColumn;
    NSTableColumn *_fileTypeTableColumn;
    NSTableColumn *_fileBuiltTableColumn;
    NSTableColumn *_objectSizeTableColumn;
    NSTableColumn *_warningsTableColumn;
    NSTableColumn *_errorsTableColumn;
    NSTableColumn *_buildTimeTableColumn;
}

+ (id)groupTreeModule;
+ (void)initialize;
+ (long long)reloadItemLimit;
+ (BOOL)showBrokenRefsInRed;
- (void)_addFilesOpenPanelDidEndWithReturnCode:(long long)arg1 fileSystemLocations:(id)arg2 contextInfo:(void *)arg3;
- (void)_addFrameworksOpenPanelDidEndWithReturnCode:(long long)arg1 fileSystemLocations:(id)arg2 contextInfo:(void *)arg3;
- (long long)_askAboutDiskRemoval;
- (void)_askAboutProjectReferenceDeletion:(id)arg1;
- (double)_codeColumnWidthInFont:(id)arg1;
- (void)_containersChanged:(id)arg1;
- (void)_deleteItems:(id)arg1;
- (void)_deleteItemsAfterAskingAboutSpecialItems:(id)arg1;
- (void)_documentDidChangeDirtyState:(id)arg1;
- (void)_documentDidSave:(id)arg1;
- (id)_getSCMstatusForItems:(id)arg1;
- (void)_itemsChangedInProject:(id)arg1;
- (void)_makeSelectedFilesGlobalSheetDidDismiss:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_makeSelectedFilesGlobalSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_makeSelectedFilesLocalizableSheetDidDismiss:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_makeSelectedFilesLocalizableSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_markFileSCMModified:(id)arg1;
- (void)_openAsAction:(id)arg1;
- (void)_projectDidSave:(id)arg1;
- (void)_projectReferenceDeletionSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (long long)_rowForItemAfterTryingToExpose:(id)arg1;
- (long long)_rowForItemUsingParent:(id)arg1;
- (void)_saveEditedDocumentsIfNeeded;
- (BOOL)_scmAnyItemHasAddOrRemove:(id)arg1;
- (void)_scmUpdateIcon;
- (void)_scmWasConfigured:(id)arg1;
- (void)_scmWasEnabledOrDisabled:(id)arg1;
- (void)_setColumnConfiguration:(id)arg1;
- (id)_undeletableItems:(id)arg1;
- (void)_undeletableItemsSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)addBuildTimeColumn;
- (void)addErrorsColumn;
- (void)addFileBuiltColumn;
- (void)addFilesTask;
- (void)addFilesToSelectedGroup:(id)arg1 mayCopy:(BOOL)arg2;
- (void)addFrameworksTask;
- (void)addObjectSizeColumn;
- (void)addSCMColumn;
- (void)addTargetColumn;
- (void)addToBookmarks:(id)arg1;
- (void)addWarningsColumn;
- (void)becomeActive;
- (id)bookmarksForCurrentSelection;
- (id)buildFileForReference:(id)arg1;
- (long long)childIndexInDestinationGroupForNewFiles:(id)arg1;
- (void)compileSelectedReferences:(id)arg1;
- (id)createStatusColumnWithIdentifier:(id)arg1 owner:(id)arg2;
- (void)dealloc;
- (void)delete:(id)arg1;
- (id)destinationGroupForNewFiles;
- (void)disassembleSelectedReferences:(id)arg1;
- (void)doubleClickAction:(id)arg1;
- (void)fixAndContinueSelectedReferences:(id)arg1;
- (id)geometryConfigurationDictionary;
- (void)groupItems:(id)arg1;
- (id)initWithModuleNibName:(id)arg1;
- (id)itemMenu;
- (id)localModuleActions;
- (void)makeGlobal:(id)arg1;
- (void)makeLocalized:(id)arg1;
- (BOOL)moduleEnforcesViewMinSize;
- (void)newGroup:(id)arg1;
- (BOOL)openInSeparateEditorOrWithFinder;
- (void)openWithFinder:(id)arg1;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)outlineView:(id)arg1 deleteItems:(id)arg2;
- (void)outlineView:(id)arg1 handleReturnKey:(id)arg2 changeFocus:(BOOL)arg3;
- (void)outlineView:(id)arg1 hasChangedActiveState:(BOOL)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 willReturnMenu:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)panel:(id)arg1 shouldShowFilename:(id)arg2;
- (void)preprocessSelectedReferences:(id)arg1;
- (void)projectDocumentWillChange:(id)arg1;
- (void)reloadData;
- (void)reloadItem:(id)arg1;
- (void)removeBuildTimeColumn;
- (void)removeErrorsColumn;
- (void)removeFileBuiltColumn;
- (void)removeObjectSizeColumn;
- (void)removeSCMColumn;
- (void)removeStatusColumnWithIdentifier:(id)arg1;
- (void)removeTargetColumn;
- (void)removeWarningsColumn;
- (void)renameItem:(id)arg1;
- (void)requestDeletionOfItemsInContext:(id)arg1 forProjectDocument:(id)arg2;
- (void)revealInFinder:(id)arg1;
- (id)scmController;
- (id)scmInfoForReference:(id)arg1;
- (id)scmMenu;
- (void)selectReference:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)selectReference:(id)arg1 byExtendingSelection:(BOOL)arg2 expandAncestorsIfNeeded:(BOOL)arg3;
- (id)selectedProjectItemPaths;
- (id)selectedProjectItems;
- (void)setSelectedProjectItems:(id)arg1;
- (void)setSelectedProjectItems:(id)arg1 scrollRowToVisible:(BOOL)arg2;
- (void)setupDefaultColumns;
- (void)singleClickAction:(id)arg1;
- (id)slideOutTabIconImage;
- (void)sortItems:(id)arg1;
- (id)sourceControlManager;
- (void)startFileRefBuildOperationForSelectedFileRefsUsingAction:(id)arg1;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)takeGeometryConfigurationFromDictionary:(id)arg1;
- (void)ungroupItems:(id)arg1;
- (void)update;
- (BOOL)validateLocalMenuItem:(id)arg1;
- (void)viewDidLoad;
- (id)viewMenu;
- (struct CGSize)viewMinSize;
- (BOOL)wantsSCM;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
