//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDESourceControlNewBranchWindowController.h>

#import <IDEKit/IDESourceControlWindowController-Protocol.h>

@class DVTSourceControlRevisionLocation, IDESourceControlSwitchOperationInfo, IDESourceControlWorkspaceUIHandler, IDEWorkspace, NSString, NSWindow;
@protocol DVTInvalidation;

@interface IDESourceControlNewBranchChooserWindowController : IDESourceControlNewBranchWindowController <IDESourceControlWindowController>
{
    IDEWorkspace *_workspace;
    IDESourceControlSwitchOperationInfo *_operationInfo;
    NSWindow *_parentWindow;
    DVTSourceControlRevisionLocation *_currentBranch;
    id <DVTInvalidation> _token;
    BOOL _inProgress;
    IDESourceControlWorkspaceUIHandler *_workspaceUIHandler;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
- (void)beginSheetForWindow:(id)arg1;
- (void)branchChooserSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)cancel:(id)arg1;
- (void)cancelSheet;
- (void)choose:(id)arg1;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)displayError:(id)arg1;
- (void)endSheet;
@property BOOL inProgress; // @synthesize inProgress=_inProgress;
@property(retain) IDESourceControlSwitchOperationInfo *operationInfo; // @synthesize operationInfo=_operationInfo;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property __weak IDESourceControlWorkspaceUIHandler *workspaceUIHandler; // @synthesize workspaceUIHandler=_workspaceUIHandler;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

