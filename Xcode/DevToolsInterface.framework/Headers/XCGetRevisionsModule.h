//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXModule.h>

#import <DevToolsInterface/NSTableViewDelegate-Protocol.h>

@class NSButton, NSObjectController, NSProgressIndicator, NSString, NSTextField, NSTextView, PBXExtendedTableView, PBXFileReference, XCExtendedArrayController;

@interface XCGetRevisionsModule : PBXModule <NSTableViewDelegate>
{
    NSTextField *_stateField;
    NSTextField *_tagField;
    NSTextField *_localRevField;
    NSTextField *_repositoryRevField;
    PBXExtendedTableView *_revisionsTableView;
    NSButton *_defaultButton;
    NSButton *_cancelButton;
    NSTextView *_logTextView;
    NSProgressIndicator *_progressIndicator;
    NSButton *_helpButton;
    NSObjectController *_scmInfoController;
    NSObjectController *_scmLogInfoController;
    XCExtendedArrayController *_scmRevisionsController;
    PBXFileReference *_fileReference;
    SEL _didEndSelector;
}

- (void)_scmRequestHadProgress:(id)arg1;
- (id)_sourceControlManager;
- (void)cancelDefaultAction;
- (void)dealloc;
- (id)fileReference;
- (id)getRevisionsModule;
- (id)initWithModuleNibName:(id)arg1;
- (id)loadModuleWindow;
- (Class)moduleWindowClass;
- (id)moduleWindowFrameAutosaveName;
- (unsigned long long)moduleWindowStyleMask;
- (void)performDefaultAction;
- (void)performDefaultActionOnSelection:(id)arg1;
- (void)refresh;
- (id)revision;
- (void)runSheetModalForWindow:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 withRef:(id)arg4 contextInfo:(void *)arg5;
- (void)scmLogDidChange:(id)arg1;
- (void)scmStateDidChange:(id)arg1;
- (void)setDefaultButtonTitle:(id)arg1;
- (void)setFileReference:(id)arg1;
- (void)setUpSCMNotifications;
- (void)viewDidLoad;
- (struct CGSize)viewMinSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
