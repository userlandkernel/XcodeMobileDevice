//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/DVTInvalidation-Protocol.h>
#import <IDEKit/IDEComparisonEditorDataSource-Protocol.h>
#import <IDEKit/IDERefactoringSessionDelegate-Protocol.h>
#import <IDEKit/IDEReviewFilesDataSource-Protocol.h>
#import <IDEKit/NSAnimationDelegate-Protocol.h>

@class DVTBorderedView, DVTObservingToken, DVTStackBacktrace, IDEIndexSymbol, IDENavigableItemAsyncFilteringCoordinator, IDENavigatorDataCell, IDERefactoringActionViewController, IDERefactoringRevealingView, IDERefactoringSession, IDERefactoringTransformationViewController, IDEReviewFilesViewController, IDEWorkspaceDocument, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSOperationQueue, NSString, NSTextField, NSView, NSWindow;
@protocol OS_dispatch_semaphore;

@interface IDERefactoringWindowController : NSWindowController <IDERefactoringSessionDelegate, IDEReviewFilesDataSource, IDEComparisonEditorDataSource, NSAnimationDelegate, DVTInvalidation>
{
    NSView *_contentContainerView;
    NSView *_reviewFilesContainerView;
    NSTextField *_transformationSummaryTextField;
    IDERefactoringRevealingView *_revealingView;
    DVTBorderedView *_reviewFilesBorderedView;
    NSView *_reviewFilesMarginView;
    NSWindow *_hostWindow;
    IDERefactoringTransformationViewController *_transformationViewController;
    IDERefactoringActionViewController *_actionViewController;
    IDEReviewFilesViewController *_reviewFilesViewController;
    IDERefactoringSession *_session;
    IDEIndexSymbol *_selectedSymbol;
    IDEWorkspaceDocument *_workspaceDocument;
    DVTObservingToken *_comparisonEditorObservingToken;
    NSMutableDictionary *_filesToResults;
    NSMutableDictionary *_filesToTempDocuments;
    NSMutableDictionary *_filesToSourceDocuments;
    NSMutableDictionary *_filesToOriginalDocuments;
    NSMutableArray *_sortedNewFiles;
    NSMutableDictionary *_pathsToRenamedFiles;
    id _groupForNewFiles;
    NSMutableSet *_documentsToRelease;
    NSMutableSet *_documentsToClose;
    NSMutableSet *_readOnlyDocuments;
    NSArray *_workspaceNavigableItems;
    NSArray *_flatNavigableItems;
    NSArray *_issueNavigableItems;
    IDENavigatorDataCell *_containerFileReferenceDataCell;
    IDENavigatorDataCell *_fileReferenceDataCell;
    IDENavigatorDataCell *_fileReferenceWithSubtitleDataCell;
    IDENavigatorDataCell *_issueDataCell;
    IDENavigatorDataCell *_groupDataCell;
    IDENavigableItemAsyncFilteringCoordinator *_workspaceNavItemCoordinator;
    IDENavigableItemAsyncFilteringCoordinator *_flatFileNavItemCoordinator;
    IDENavigableItemAsyncFilteringCoordinator *_issueNavItemCoordinator;
    NSOperationQueue *_queue;
    BOOL _hasFatalError;
    NSObject<OS_dispatch_semaphore> *_errorResponseWaiter;
    NSObject<OS_dispatch_semaphore> *_animationWaiter;
    NSObject<OS_dispatch_semaphore> *_saveWaiter;
    NSMutableSet *_bindingTokens;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_addNewFilesToWorkspace;
- (void)_beginReviewFilesTransition;
- (void)_cleanupAndEndSheet;
- (id)_containerFileReferenceCell;
- (void)_copyChangesFromTempFiles;
- (void)_createIssueNavigableItems:(id)arg1;
- (id)_documentForLocation:(id)arg1 useTemp:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)_fileReferenceCell;
- (id)_fileReferenceWithSubtitleCell;
- (id)_groupCell;
- (unsigned long long)_insertionIndexNearFile:(id)arg1 inFileList:(id)arg2;
- (id)_issueCell;
- (void)_presentError:(id)arg1;
- (void)_reIndentLocations:(id)arg1;
- (void)_setInitialSelectionForNavigatorOutlineView:(id)arg1 preserveNavigatorSelection:(BOOL)arg2;
- (id)_snapshotContainerItem:(id)arg1 customizationBlock:(CDUnknownBlockType)arg2;
- (id)_traverseNavigableItems:(id)arg1 forResults:(id)arg2 referencedFiles:(id)arg3;
- (id)_workspaceNavItemsForFilePaths:(id)arg1;
@property(retain) IDERefactoringActionViewController *actionViewController; // @synthesize actionViewController=_actionViewController;
- (void)animationDidEnd:(id)arg1;
- (void)apply;
- (void)beginSheetForWindow:(id)arg1;
- (void)cancel;
- (id)contentStringForSecondaryEmptyEditorWithDocumentLocation:(id)arg1;
- (void)document:(id)arg1 didSave:(BOOL)arg2 contextInfo:(void *)arg3;
- (id)documentForPrimaryDocumentLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)documentForSecondaryDocumentLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)fileSystemNavigableItems;
@property(retain) NSArray *flatNavigableItems; // @synthesize flatNavigableItems=_flatNavigableItems;
- (id)initWithWindowNibName:(id)arg1 symbol:(id)arg2;
@property(retain) NSArray *issueNavigableItems; // @synthesize issueNavigableItems=_issueNavigableItems;
- (void)preview;
- (BOOL)primaryEditorShowsDocumentPreview;
- (void)primitiveInvalidate;
- (void)refactoringSession:(id)arg1 didCalculateResults:(id)arg2 issues:(id)arg3 locationsToReIndent:(id)arg4;
- (void)refactoringSession:(id)arg1 didProduceError:(id)arg2;
- (void)refactoringSession:(id)arg1 didProduceInitialData:(id)arg2;
- (void)refactoringSession:(id)arg1 willAnalyzeFile:(id)arg2 progress:(double)arg3;
- (id)reviewFilesNavigator:(id)arg1 documentLocationForNavigableItem:(id)arg2;
- (id)reviewFilesNavigator:(id)arg1 outlineView:(id)arg2 dataCellForNavigableItem:(id)arg3;
- (double)reviewFilesNavigator:(id)arg1 outlineView:(id)arg2 rowHeightForNavigableItem:(id)arg3;
@property(retain, nonatomic) IDERefactoringSession *session; // @synthesize session=_session;
- (void)setActivityString:(id)arg1;
- (void)setError:(id)arg1;
@property(retain) IDERefactoringTransformationViewController *transformationViewController; // @synthesize transformationViewController=_transformationViewController;
@property(retain) IDEWorkspaceDocument *workspaceDocument; // @synthesize workspaceDocument=_workspaceDocument;
@property(retain) NSArray *workspaceNavigableItems; // @synthesize workspaceNavigableItems=_workspaceNavigableItems;
- (BOOL)shouldSelectFirstDiff;
- (BOOL)shouldShowEmptyEditorForSecondaryDocumentLocation:(id)arg1 submodeType:(int)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

