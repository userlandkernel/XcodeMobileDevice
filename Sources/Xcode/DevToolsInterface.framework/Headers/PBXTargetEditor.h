//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXFileEditor.h>

@class NSBox, NSMapTable, NSMenu, NSPopUpButton, NSString, PBXStringTree, PBXTOCModule, PBXTarget, PBXTitleBannerView;

@interface PBXTargetEditor : PBXFileEditor
{
    NSBox *_tocViewContainer;
    PBXTitleBannerView *_titleBannerView;
    NSMenu *_viewContextualMenu;
    NSMenu *_itemContextualMenu;
    NSMenu *_itemContextualMenuWithBuildRules;
    NSPopUpButton *_configsPopup;
    PBXTOCModule *_tocModule;
    PBXTarget *_target;
    NSString *_selectedConfigName;
    NSMapTable *_itemToIdentifierMap;
    NSMapTable *_identifierToItemMap;
    struct {
        unsigned int observingProjectItemChanges:1;
        unsigned int observingWindowKeyStatusResignation:1;
        unsigned int RESERVED:30;
    } _teFlags;
    PBXStringTree *_cachedTargetUIAspectClasses;
}

+ (BOOL)canReuseEditorInstances;
- (void)_addBuildPhaseToMapTables:(id)arg1;
- (void)_addBuildRuleToMapTables:(id)arg1;
- (void)_addBuildSettingsPaneToMapTables:(id)arg1;
- (id)_addNewBuildPhaseUsingClass:(Class)arg1;
- (void)_addObjectToMapTables:(id)arg1 withIdentifier:(id)arg2 parent:(id)arg3;
- (void)_confirmBuildPhaseDeletionSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_deleteItems:(id)arg1;
- (void)_discardProxyCachesAndMapTables;
- (void)_rebuildProxyCachesAndMapTables;
- (void)_startObservingTargetIfNeeded;
- (void)_stopObservingTargetIfNeeded;
- (id)_tocModuleTopLevelItemsRefreshed:(BOOL)arg1;
- (void)_windowDidResignMain:(id)arg1;
- (id)availableBuildConfigurationNames;
- (id)bookmarkForSelection;
- (id)buildSettingForKeyPath:(id)arg1;
- (id)buildSettings;
- (void)dealloc;
- (void)delete:(id)arg1;
- (void)finalize;
- (id)initWithFileDocument:(id)arg1;
- (id)label;
- (id)localModuleActions;
- (void)moduleViewWasInstalled:(id)arg1;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleWindowWillClose:(id)arg1;
- (void)newAppleScriptBuildPhase:(id)arg1;
- (void)newBuildRule:(id)arg1;
- (void)newCopyFilesBuildPhase:(id)arg1;
- (void)newFrameworksBuildPhase:(id)arg1;
- (void)newHeadersBuildPhase:(id)arg1;
- (void)newJavaArchiveBuildPhase:(id)arg1;
- (void)newResourcesBuildPhase:(id)arg1;
- (void)newRezBuildPhase:(id)arg1;
- (void)newShellScriptBuildPhase:(id)arg1;
- (void)newSourcesBuildPhase:(id)arg1;
- (void)noteNeedsUpdate:(id)arg1;
- (id)selectedConfigurationName;
- (id)selectedProjectItems;
- (void)setBuildSetting:(id)arg1 forKeyPath:(id)arg2;
- (void)setSelectedConfigurationName:(id)arg1;
- (void)setSelectedProjectItems:(id)arg1;
- (void)setSelectionFromBookmark:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;
- (BOOL)tocModule:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (BOOL)tocModule:(id)arg1 allowsMovementOfItems:(id)arg2;
- (id)tocModule:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)tocModule:(id)arg1 completeMovementOfItems:(id)arg2 toChildIndex:(long long)arg3 ofItem:(id)arg4;
- (void)tocModule:(id)arg1 deleteItems:(id)arg2;
- (id)tocModule:(id)arg1 iconImageForItem:(id)arg2;
- (id)tocModule:(id)arg1 identifierForItem:(id)arg2;
- (BOOL)tocModule:(id)arg1 isItemExpandable:(id)arg2;
- (id)tocModule:(id)arg1 itemForIdentifier:(id)arg2;
- (id)tocModule:(id)arg1 itemHierarchyForIdentifier:(id)arg2;
- (id)tocModule:(id)arg1 labelForItem:(id)arg2;
- (id)tocModule:(id)arg1 moduleForItem:(id)arg2;
- (unsigned long long)tocModule:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (unsigned long long)tocModule:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)tocModule:(id)arg1 validateProposedDropOfMovedItems:(id)arg2 proposedDestinationItem:(id)arg3 proposedChildIndexPtr:(long long *)arg4;
- (void)update;
- (BOOL)validateLocalMenuItem:(id)arg1;
- (void)viewDidLoad;

@end

