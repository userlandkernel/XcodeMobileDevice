//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDESourceControlReviewFilesWindowController.h>

#import <IDEKit/IDENavigableItemCoordinatorDelegate-Protocol.h>

@class DVTBorderedView, DVTObservingToken, DVTTextViewWithPlaceholder, IDEEditorDocument, IDESourceControlPushOperationInfo, IDESourceControlRepositoryChooserItem, IDESourceControlReviewFilesDataSource, IDESourceControlWorkspaceUIHandler, NSArray, NSButton, NSImageView, NSMutableArray, NSMutableDictionary, NSObject, NSOperationQueue, NSPopUpButton, NSSplitView, NSString, NSTextField;
@protocol OS_dispatch_semaphore;

@interface IDESourceControlCommitWindowController : IDESourceControlReviewFilesWindowController <IDENavigableItemCoordinatorDelegate>
{
    NSSplitView *_splitView;
    DVTTextViewWithPlaceholder *_commitMessageTextView;
    NSButton *_commitButton;
    NSButton *_cancelButton;
    DVTBorderedView *_reviewFilesView;
    DVTBorderedView *_contentView;
    DVTBorderedView *_textViewBorderedView;
    NSImageView *_issuesCountImageView;
    NSTextField *_issuesCountTextField;
    NSButton *_enablePushCheckbox;
    NSPopUpButton *_remotesPopUpButton;
    NSString *_commitMessage;
    IDESourceControlReviewFilesDataSource *_workspaceDataSource;
    IDESourceControlReviewFilesDataSource *_fileSystemDataSource;
    IDESourceControlReviewFilesDataSource *_flatDataSource;
    NSObject<OS_dispatch_semaphore> *_multipleFileSaveWaiter;
    NSMutableArray *_distributedWorkingTrees;
    NSArray *_pushOperationInfos;
    NSOperationQueue *_pushOperationQueue;
    NSMutableDictionary *_pushTokenDictionary;
    BOOL _shouldEnablePushButtons;
    DVTObservingToken *_checkedFilePathsToken2;
    NSMutableArray *_localStatusTokens;
    IDEEditorDocument *_currentReadOnlyDocument;
    BOOL _pushToRemoteEnabled;
    IDESourceControlRepositoryChooserItem *_repositoryChooserItem;
    IDESourceControlPushOperationInfo *_singlePushOperationInfo;
    IDESourceControlWorkspaceUIHandler *_workspaceUIHandler;
    NSArray *_forcedPushOperationInfos;
    CDUnknownBlockType _commitWindowCompletionBlock;
    NSString *_statusText;
}

+ (id)sourceControlCommitWindowLogAspect;
- (void).cxx_destruct;
- (BOOL)_checkWorkingTreeItemStatusForDefaultCheckedPath:(id)arg1;
- (BOOL)_checkWorkingTreeItemStatusForDefaultDisabledPath:(id)arg1;
- (void)_commit;
- (id)_performPreCommitOperation:(CDUnknownBlockType)arg1 onFiles:(id)arg2;
- (void)_pushOperationInfos:(id)arg1 forWorkingCopiesCommittedSuccessfully:(id)arg2;
- (void)_registerReadOnlyDocumentLocation:(id)arg1;
- (void)_updateCommitButton;
- (void)beginReviewFiles;
- (void)beginSheetForWindow:(id)arg1;
- (void)beginStatusUpdate;
- (void)cancel:(id)arg1;
- (void)commit:(id)arg1;
- (id)commitButtonTitle;
@property(copy) NSString *commitMessage; // @synthesize commitMessage=_commitMessage;
@property(copy) CDUnknownBlockType commitWindowCompletionBlock; // @synthesize commitWindowCompletionBlock=_commitWindowCompletionBlock;
- (unsigned long long)countOfCheckedItems;
- (unsigned long long)countOfItemsThatCanBeCommitted;
- (id)defaultCheckedFilePaths;
- (id)defaultDisabledFilePaths;
- (void)displayErrorMessages:(id)arg1;
- (BOOL)enableDiffToggles;
- (id)fileSystemDataSource;
- (void)finishInteractiveCommitForFiles:(id)arg1;
- (id)flatDataSource;
@property(retain) NSArray *forcedPushOperationInfos; // @synthesize forcedPushOperationInfos=_forcedPushOperationInfos;
- (void)handleErrors:(id)arg1 singularErrorMessage:(id)arg2 pluralErrorMessage:(id)arg3;
- (id)initWithWindow:(id)arg1;
@property(getter=isPushToRemoteEnabled) BOOL pushToRemoteEnabled; // @synthesize pushToRemoteEnabled=_pushToRemoteEnabled;
- (id)navigableItem:(id)arg1 childRepresentedObjectsForArray:(id)arg2;
- (void)populateCommitAndPush;
@property(retain) IDESourceControlRepositoryChooserItem *repositoryChooserItem; // @synthesize repositoryChooserItem=_repositoryChooserItem;
- (void)reviewFilesViewController:(id)arg1 didInstallComparisonEditor:(id)arg2;
- (void)saveFilesAtFilePaths:(id)arg1;
- (void)selectRepository:(id)arg1;
- (void)setEditorMessages:(id)arg1;
@property(retain) IDESourceControlPushOperationInfo *singlePushOperationInfo; // @synthesize singlePushOperationInfo=_singlePushOperationInfo;
@property(retain) NSString *statusText; // @synthesize statusText=_statusText;
@property(retain) IDESourceControlWorkspaceUIHandler *workspaceUIHandler; // @synthesize workspaceUIHandler=_workspaceUIHandler;
- (void)setupPushWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2;
- (BOOL)shouldEnableCommitButton;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
- (void)startInteractiveCommitForFiles:(id)arg1;
- (void)teardown;
- (void)teardownTemporaryPushOperationInfos;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)toggleAllowCommit:(id)arg1;
- (void)updateCommitAndPush:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)warnToUpdateBeforeCommitting;
- (void)willOpenDocumentLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)windowDidLoad;
- (id)windowNibName;
- (id)workingTreeItemFilterPredicate;
- (id)workingTreeWithLocation:(id)arg1;
- (id)workspaceDataSource;
- (id)workspaceItemFilterPredicate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

