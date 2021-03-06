//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTSourceControl/DVTSourceControlIdentifiable-Protocol.h>

@class DVTSourceControlWorkingCopy, NSMapTable, NSMutableOrderedSet, NSOperationQueue, NSOrderedSet, NSString, NSURL;

@interface DVTSourceControlWorkspace : NSObject <DVTSourceControlIdentifiable>
{
    NSMutableOrderedSet *_workingCopies;
    NSOperationQueue *_workspaceOperationQueue;
    NSString *__id;
    DVTSourceControlWorkingCopy *_primaryWorkingCopy;
    NSString *_relativePathToProject;
}

- (void).cxx_destruct;
- (id)__id;
@property(copy) NSString *_id; // @synthesize _id=__id;
- (BOOL)_isValid;
- (id)_revisionTableWithRevison:(id)arg1;
@property(readonly) NSMapTable *baseRevisionsMapTable;
- (id)blueprintWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)blueprintWithRemoteRepositories:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)compareToBlueprint:(id)arg1;
- (id)filesAndStatusWithRemoteStatus:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)forceUpdateWorkingCopiesFromBlueprint:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)forceUpdateWorkingCopiesFromRepositories:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(readonly) NSMapTable *headRevisionsMapTable;
- (id)historyFromRevisions:(id)arg1 toRevisions:(id)arg2 inclusionType:(unsigned long long)arg3 maximumLogItems:(long long)arg4 searchString:(id)arg5 searchType:(unsigned long long)arg6 includeFilePaths:(BOOL)arg7 showMergeCommits:(BOOL)arg8 incrementalLogBlock:(CDUnknownBlockType)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (id)historySinceRevisionedBlueprint:(id)arg1 maximumLogItems:(long long)arg2 includeFilePaths:(BOOL)arg3 showMergeCommits:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)init;
- (id)initWithPrimaryWorkingCopy:(id)arg1 relativePathToProject:(id)arg2 workingCopies:(id)arg3;
- (id)initWithWorkingCopies:(id)arg1;
@property(readonly) NSMapTable *initialRevisionsMapTable;
@property(retain) DVTSourceControlWorkingCopy *primaryWorkingCopy; // @synthesize primaryWorkingCopy=_primaryWorkingCopy;
@property(copy) NSString *relativePathToProject; // @synthesize relativePathToProject=_relativePathToProject;
- (BOOL)representsBlueprint:(id)arg1;
- (void)sortWorkingCopies;
@property(readonly) NSOrderedSet *workingCopies;
- (id)workingCopiesMissingFromBlueprint:(id)arg1;
- (id)workingCopyForRemoteRepository:(id)arg1 inBlueprint:(id)arg2;
- (id)workingCopyForRepositoryID:(id)arg1;
- (id)workingCopyForURL:(id)arg1;
@property(readonly) NSURL *workspaceRootFolder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

