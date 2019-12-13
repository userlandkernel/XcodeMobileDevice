//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXFileBuildPhaseModule.h>

@class NSButton, NSPopUpButton, NSTextField, PBXCompletionManager;

@interface PBXCopyFilesBuildPhaseModule : PBXFileBuildPhaseModule
{
    NSPopUpButton *_dstSubfolderPopup;
    NSTextField *_pathLabel;
    NSTextField *_dstPathField;
    NSButton *_onlyWhenInstallingSwitch;
    PBXCompletionManager *completionManager;
}

- (void)_takeDestinationPathFromUIControls;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)dealloc;
- (void)takeDestinationPathFrom:(id)arg1;
- (void)takeDestinationSubfolderFrom:(id)arg1;
- (void)takeOnlyWhenInstallingFlagFrom:(id)arg1;
- (void)update;
- (void)viewDidLoad;

@end
