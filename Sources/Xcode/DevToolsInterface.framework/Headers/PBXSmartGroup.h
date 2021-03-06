//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXFosterParent.h>

#import <DevToolsInterface/PBXNodeEditingProtocol-Protocol.h>
#import <DevToolsInterface/PBXUIDeletionAssistant-Protocol.h>

@class NSArray, PBXProjectModule, PBXSmartGroupBinding, PBXSmartGroupDataSource;

@interface PBXSmartGroup : PBXFosterParent <PBXNodeEditingProtocol, PBXUIDeletionAssistant>
{
    BOOL _autoexpand;
    PBXSmartGroupDataSource *_datasource;
    PBXProjectModule *_owningModule;
    PBXSmartGroupBinding *_binding;
    BOOL _checkIdentity;
    int _scope;
    NSArray *_fixedChildren;
    BOOL _canSave;
}

+ (id)createSmartGroupWithID:(id)arg1 withProjectDocument:(id)arg2;
- (BOOL)acceptsItem:(id)arg1;
- (BOOL)allowsEditingOfChildren;
- (BOOL)allowsSubgroups;
- (BOOL)autoexpand;
- (id)binding;
- (BOOL)canAddToGroup;
- (BOOL)canDelete;
- (BOOL)canGroup;
- (BOOL)canRename;
- (BOOL)canSave;
- (BOOL)canUngroup;
- (BOOL)checkUniqueness;
- (id)children;
- (id)datasource;
- (Class)datasourceClass;
- (void)dealloc;
- (void)deleteApplicableElements:(id)arg1 fromModule:(id)arg2;
- (void)deleteApplicableElements:(id)arg1 fromOutlineView:(id)arg2;
- (id)displayName;
- (BOOL)fileExists;
- (id)globalID;
- (id)initWithBinding:(id)arg1;
- (id)initWithChildren:(id)arg1 datasource:(id)arg2;
- (BOOL)isUserSmartGroup;
- (BOOL)listenForTargetChanges;
- (id)owningModule;
- (id)project;
- (id)projectDocument;
- (void)save;
- (int)scope;
- (void)setAutoexpand:(BOOL)arg1;
- (void)setCanSave:(BOOL)arg1;
- (void)setIconImageName:(id)arg1;
- (void)setName:(id)arg1;
- (BOOL)setName:(id)arg1 syncDisk:(BOOL)arg2;
- (void)setOwningModule:(id)arg1;
- (void)setScope:(int)arg1;
- (void)targetBuildFileAdded:(id)arg1;
- (void)targetBuildFileRemoved:(id)arg1;
- (void)targetChangedNotification:(id)arg1;
- (void)targetWasAdded:(id)arg1;
- (void)targetWillBeRemoved:(id)arg1;
- (void)uiParentWillChange;
- (void)updateBinding;
- (BOOL)willGenerateNotifications;
- (id)workspace;

@end

