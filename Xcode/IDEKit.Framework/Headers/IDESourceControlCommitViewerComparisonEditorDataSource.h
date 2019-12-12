//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEComparisonEditorOriginalDocumentDataSource-Protocol.h>

@class DVTSourceControlRevision, DVTSourceControlWorkingCopy, IDEEditorDocument, NSArray, NSDictionary, NSString;
@protocol DVTSourceControlCancellable;

@interface IDESourceControlCommitViewerComparisonEditorDataSource : NSObject <IDEComparisonEditorOriginalDocumentDataSource>
{
    NSDictionary *_pathsWithStatus;
    DVTSourceControlRevision *_revision;
    id <DVTSourceControlCancellable> _token;
    NSString *_lastExportedSecondaryRevision;
    NSString *_lastExportedPrimaryRevision;
    NSArray *_secondaryDocumentRevisions;
    NSArray *_primaryDocumentRevisions;
    DVTSourceControlWorkingCopy *_workingCopy;
    IDEEditorDocument *_originalDocument;
}

+ (id)dataSourceLogAspect;
- (void).cxx_destruct;
- (void)_cachedDocumentForDocumentLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_documentLocationForNavigableItem:(id)arg1;
- (id)_documentLocationForWorkingCopy:(id)arg1 revisionName:(id)arg2 relativeFilePath:(id)arg3 currentFilePath:(id)arg4;
- (id)_emptyContentString:(id)arg1;
- (void)_exportDocument:(id)arg1 withLastRevision:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (BOOL)_shouldEmptyEditorForDocumentLocation:(id)arg1 isPrimary:(BOOL)arg2;
- (unsigned long long)_statusForDocumentLocation:(id)arg1;
- (id)contentStringForPrimaryEmptyEditorWithDocumentLocation:(id)arg1;
- (id)contentStringForSecondaryEmptyEditorWithDocumentLocation:(id)arg1;
- (id)documentForAncestorDocumentLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)documentForPrimaryDocumentLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)documentForSecondaryDocumentLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)loadPaths:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)loadRevisions:(id)arg1 path:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)navigableItemsForPrimaryDocumentLocation:(id)arg1 usingNavigableItemCoordinator:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)navigableItemsForSecondaryDocumentLocation:(id)arg1 usingNavigableItemCoordinator:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(retain) IDEEditorDocument *originalDocument; // @synthesize originalDocument=_originalDocument;
- (id)primaryDocumentLocationForNavigableItem:(id)arg1;
@property(retain) NSArray *primaryDocumentRevisions; // @synthesize primaryDocumentRevisions=_primaryDocumentRevisions;
- (id)secondaryDocumentLocationForNavigableItem:(id)arg1;
@property(retain) NSArray *secondaryDocumentRevisions; // @synthesize secondaryDocumentRevisions=_secondaryDocumentRevisions;
@property(retain) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy=_workingCopy;
- (BOOL)shouldShowEmptyEditorForPrimaryDocumentLocation:(id)arg1 submodeType:(int)arg2;
- (BOOL)shouldShowEmptyEditorForSecondaryDocumentLocation:(id)arg1 submodeType:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
