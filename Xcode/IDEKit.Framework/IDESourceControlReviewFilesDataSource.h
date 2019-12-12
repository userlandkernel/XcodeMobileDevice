//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEReviewFilesDataSource-Protocol.h>

@class IDENavigatorDataCell, IDEWorkspace, NSArray, NSMutableSet, NSPredicate, NSString;

@interface IDESourceControlReviewFilesDataSource : NSObject <IDEReviewFilesDataSource>
{
    IDENavigatorDataCell *_containerFileRefCell;
    IDENavigatorDataCell *_aggregateContainerFileRefCell;
    IDENavigatorDataCell *_fileReferenceCell;
    IDENavigatorDataCell *_groupCell;
    IDENavigatorDataCell *_plainObjectCell;
    IDENavigatorDataCell *_workingCopyTreeItemCell;
    IDENavigatorDataCell *_workingCopyTreeGroupCell;
    NSMutableSet *_bindingTokens;
    NSArray *_navigableItems;
    NSArray *_statusCategoryNames;
    NSString *_selectedRevisionIdentifier;
    NSPredicate *_filterPredicate;
    IDEWorkspace *_workspace;
    NSString *_filterString;
}

+ (id)keyPathsForValuesAffectingFileSystemNavigableItems;
+ (id)keyPathsForValuesAffectingFlatNavigableItems;
+ (id)keyPathsForValuesAffectingWorkspaceNavigableItems;
- (void).cxx_destruct;
- (id)aggregateContainerFileRefCell;
- (id)aggregateSourceControlCategoryStatusCellsWithRepresentedObject:(id)arg1;
- (id)containerFileRefCell;
- (void)dealloc;
- (id)fileReferenceCell;
@property(readonly) NSArray *fileSystemNavigableItems;
@property(copy) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(copy) NSString *filterString; // @synthesize filterString=_filterString;
@property(readonly) NSArray *flatNavigableItems;
- (id)groupCell;
- (id)init;
- (id)issueNavigableItems;
@property(copy) NSArray *navigableItems; // @synthesize navigableItems=_navigableItems;
- (id)newBasicContainerFileRefCell;
- (id)plainObjectCell;
- (id)reviewFilesNavigator:(id)arg1 documentLocationForNavigableItem:(id)arg2;
- (id)reviewFilesNavigator:(id)arg1 importantFilePathsForNavigableItem:(id)arg2 excludingDisabledItems:(id)arg3;
- (id)reviewFilesNavigator:(id)arg1 outlineView:(id)arg2 dataCellForNavigableItem:(id)arg3;
- (void)reviewFilesNavigator:(id)arg1 outlineView:(id)arg2 willDisplayCell:(id)arg3 forNavigableItem:(id)arg4;
@property(copy) NSString *selectedRevisionIdentifier; // @synthesize selectedRevisionIdentifier=_selectedRevisionIdentifier;
@property(copy) NSArray *statusCategoryNames; // @synthesize statusCategoryNames=_statusCategoryNames;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (id)sourceControlCategoryStatusCellsWithRepresentedObject:(id)arg1;
- (id)statusCellsForCategoryName:(id)arg1 representedObject:(id)arg2;
- (void)teardown;
- (id)workingCopyTreeGroupCell;
- (id)workingCopyTreeItemCell;
@property(readonly) NSArray *workspaceNavigableItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

