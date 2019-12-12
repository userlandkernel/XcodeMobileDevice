//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/IDESourceControlBranchChooserItemDelegate-Protocol.h>
#import <IDEKit/IDESourceControlWindowController-Protocol.h>

@class IDESourceControlBranchChooserItem, IDESourceControlOperationInfo, IDESourceControlWorkspaceUIHandler, IDEWorkspace, NSButton, NSPopUpButton, NSString, NSTextField, NSView, NSWindow;
@protocol DVTInvalidation, IDESourceControlBranchingOperationInfoProtocol;

@interface IDESourceControlBranchChooserWindowController : NSWindowController <IDESourceControlWindowController, IDESourceControlBranchChooserItemDelegate>
{
    NSPopUpButton *_popupButton;
    NSButton *_chooseButton;
    NSTextField *_messageTextField;
    NSView *_newBranchArea;
    NSView *_newBranchSetupView;
    NSTextField *_newBranchNameTextField;
    IDEWorkspace *_workspace;
    IDESourceControlOperationInfo<IDESourceControlBranchingOperationInfoProtocol> *_operationInfo;
    CDUnknownBlockType _continuationBlock;
    NSWindow *_parentWindow;
    id <DVTInvalidation> _token;
    BOOL _inProgress;
    NSString *_userNewBranchName;
    BOOL _shouldCreateNewBranch;
    IDESourceControlBranchChooserItem *_chooserItem;
    IDESourceControlWorkspaceUIHandler *_workspaceUIHandler;
}

+ (id)keyPathsForValuesAffectingCanContinue;
- (void).cxx_destruct;
- (void)beginSheetForWindow:(id)arg1;
- (void)branchChooserSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
@property(readonly) BOOL canContinue;
- (void)cancel:(id)arg1;
- (void)cancelSheet;
- (void)choose:(id)arg1;
@property(retain) IDESourceControlBranchChooserItem *chooserItem; // @synthesize chooserItem=_chooserItem;
@property(copy) CDUnknownBlockType continuationBlock; // @synthesize continuationBlock=_continuationBlock;
- (void)displayError:(id)arg1;
- (void)endSheet;
- (void)fetchBranches;
- (void)hideNewBranchChooser:(id)arg1;
@property BOOL inProgress; // @synthesize inProgress=_inProgress;
@property(retain) IDESourceControlOperationInfo<IDESourceControlBranchingOperationInfoProtocol> *operationInfo; // @synthesize operationInfo=_operationInfo;
- (void)selectBranch:(id)arg1;
@property BOOL shouldCreateNewBranch; // @synthesize shouldCreateNewBranch=_shouldCreateNewBranch;
@property(retain) NSString *userNewBranchName; // @synthesize userNewBranchName=_userNewBranchName;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property __weak IDESourceControlWorkspaceUIHandler *workspaceUIHandler; // @synthesize workspaceUIHandler=_workspaceUIHandler;
- (void)showNewBranchChooser:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)windowNibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

