//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDESourceControlInfoConflictDetector : NSObject
{
}

+ (void)_cleanupDocument:(id)arg1 withOptions:(int)arg2;
+ (void)_cleanupOriginalDocumentWithDataSource:(id)arg1;
+ (id)_documentForLocation:(id)arg1 withTemplate:(id)arg2 options:(int *)arg3 isPrimary:(BOOL)arg4 error:(id *)arg5;
+ (id)_exportAncestorDocumentUsingDataSource:(id)arg1 filePath:(id)arg2 ancestorRevision:(id)arg3 documentOptions:(int *)arg4 error:(id *)arg5;
+ (id)_exportAncestorDocumentUsingDataSource:(id)arg1 treeItem:(id)arg2 ancestorRevisionIdentifier:(id)arg3 documentOptions:(int *)arg4 error:(id *)arg5;
+ (id)_exportOrOpenLocalDocumentUsingDataSource:(id)arg1 filePath:(id)arg2 localRevision:(id)arg3 documentOptions:(int *)arg4 error:(id *)arg5;
+ (id)_exportOrOpenLocalDocumentUsingDataSource:(id)arg1 treeItem:(id)arg2 localRevisionIdentifier:(id)arg3 documentOptions:(int *)arg4 error:(id *)arg5;
+ (id)_exportOtherDocumentUsingDataSource:(id)arg1 filePath:(id)arg2 branch:(id)arg3 revision:(id)arg4 documentOptions:(int *)arg5 error:(id *)arg6;
+ (id)_exportRemoteDocumentUsingDataSource:(id)arg1 treeItem:(id)arg2 remoteBranch:(id)arg3 remoteRevisionIdentifier:(id)arg4 documentOptions:(int *)arg5 error:(id *)arg6;
+ (id)_originalDocumentForFileURL:(id)arg1 error:(id *)arg2;
+ (id)_temporaryQueue;
+ (id)allowedTypesForNonBinaryConflictResolution;
+ (id)detectConflictForDocumentLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)detectConflictForTreeItem:(id)arg1 localRevisionIdentifier:(id)arg2 remoteBranch:(id)arg3 remoteRevisionIdentifier:(id)arg4 ancestorRevisionIdentifier:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
+ (id)detectConflictForWorkingCopy:(id)arg1 path:(id)arg2 localRevision:(id)arg3 otherBranch:(id)arg4 otherRevision:(id)arg5 ancestorRevision:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
+ (id)logAspect;

@end

