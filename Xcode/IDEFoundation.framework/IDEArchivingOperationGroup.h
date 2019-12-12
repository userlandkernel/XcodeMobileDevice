//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTOperationGroup.h>

@class IDEArchivingOperation, IDEBuildOperationGroup;

@interface IDEArchivingOperationGroup : DVTOperationGroup
{
    IDEArchivingOperation *_archivingOperation;
    IDEBuildOperationGroup *_buildForArchiveOperation;
}

+ (id)operationGroupWithArchivingOperation:(id)arg1 otherOperations:(id)arg2;
+ (id)operationGroupWithSuboperations:(id)arg1;
- (void).cxx_destruct;
@property(readonly) IDEArchivingOperation *archivingOperation; // @synthesize archivingOperation=_archivingOperation;
@property(retain) IDEBuildOperationGroup *buildForArchiveOperation; // @synthesize buildForArchiveOperation=_buildForArchiveOperation;

@end
