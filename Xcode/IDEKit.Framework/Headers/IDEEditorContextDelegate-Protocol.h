//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class DVTStateRepository, IDEEditorContext, IDENavigableItem, IDENavigableItemArchivableRepresentation, IDEWorkspace, NSArray, NSMenu;

@protocol IDEEditorContextDelegate <NSObject>

@optional
- (void)_editorContext:(IDEEditorContext *)arg1 openingEmptyEditorInsteadOfNavigableItem:(IDENavigableItem *)arg2;
- (void)addSplitForEditorContext:(IDEEditorContext *)arg1;
- (BOOL)canCloseDocumentForEditorContext:(IDEEditorContext *)arg1;
- (void)editorContext:(IDEEditorContext *)arg1 didSetNavigableItem:(IDENavigableItem *)arg2;
- (void)editorContext:(IDEEditorContext *)arg1 didUpdateMenu:(NSMenu *)arg2;
- (void)editorContext:(IDEEditorContext *)arg1 editorStateRepositoryDidChange:(DVTStateRepository *)arg2;
- (BOOL)editorContext:(IDEEditorContext *)arg1 emptyEditorRootNavigableItem:(id *)arg2 selectedNavigableItem:(id *)arg3;
- (IDENavigableItem *)editorContext:(IDEEditorContext *)arg1 navigableItemForEditingFromArchivedRepresentation:(IDENavigableItemArchivableRepresentation *)arg2 error:(id *)arg3;
- (NSArray *)editorContext:(IDEEditorContext *)arg1 relatedMenuItemsForNavItem:(IDENavigableItem *)arg2;
- (void)editorContextDidBecomeLastActiveEditor:(IDEEditorContext *)arg1;
- (IDEEditorContext *)primaryEditorContext;
- (BOOL)provideWorkspaceStructureForEmptyEditorContext:(IDEEditorContext *)arg1;
- (void)removeSplitForEditorContext:(IDEEditorContext *)arg1;
- (IDEWorkspace *)workspaceForEditorContext:(IDEEditorContext *)arg1;
@end
