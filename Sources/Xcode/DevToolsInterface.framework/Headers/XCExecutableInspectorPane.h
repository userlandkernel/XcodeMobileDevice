//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXInspectorPaneModule.h>

@class NSButton, NSMatrix, NSPopUpButton, NSTextField, XCExtendedArrayController;

@interface XCExecutableInspectorPane : PBXInspectorPaneModule
{
    NSTextField *_editableNameTextField;
    NSTextField *_editablePathTextField;
    NSTextField *_nonEditableNameTextField;
    NSTextField *_nonEditablePathTextField;
    NSTextField *_absolutePathTextField;
    NSPopUpButton *_referenceTypePopUpButton;
    NSButton *_chooseExecutablePathButton;
    NSPopUpButton *_frameworkSuffixPopUpButton;
    NSTextField *_runtimeSystemTextField;
    NSTextField *_filetypeTextField;
    NSPopUpButton *_standardIOPopUpButton;
    NSMatrix *_workingDirectoryLocationMatrix;
    NSTextField *_workingDirectoryPathTextField;
    NSButton *_chooseWorkingDirectoryButton;
    NSButton *_helpButton;
    XCExtendedArrayController *_selectedItemsController;
    XCExtendedArrayController *_runLaunchConfigController;
}

+ (id)alternateLabel;
+ (void)initialize;
+ (id)inspectableClasses;
+ (id)keyPathsForValuesAffectingActiveDebugLaunchConfigIndex;
+ (id)keyPathsForValuesAffectingActiveDebugLaunchConfiguration;
+ (id)keyPathsForValuesAffectingDebugLaunchConfigurations;
+ (id)keyPathsForValuesAffectingDebugRemotelyUsingSSH;
+ (id)keyPathsForValuesAffectingRunLaunchConfiguration;
+ (id)label;
+ (unsigned long long)panelPosition;
- (void)_chooseExecutableSheetDidEndWithReturnCode:(long long)arg1 fileSystemLocations:(id)arg2 contextInfo:(void *)arg3;
- (void)_chooseWorkingDirectorySheetDidEndWithReturnCode:(long long)arg1 fileSystemLocations:(id)arg2 contextInfo:(void *)arg3;
- (void)_refreshNonBoundUI;
- (void)_startListeningForProjectChanges;
- (void)_stopListeningForProjectChanges;
- (void)changeReferenceType:(id)arg1;
- (void)chooseExecutablePath:(id)arg1;
- (void)chooseWorkingDirectoryPath:(id)arg1;
- (void)contentDidChangeForArrayController:(id)arg1;
- (void)currentInspectedItemsChanged:(id)arg1;
- (void)dealloc;
- (id)executable;
- (void)executableWasRemoved:(id)arg1;
- (BOOL)loadView;
- (void)takeNameFrom:(id)arg1;
- (void)takePathFrom:(id)arg1;
- (void)viewDidLoad;

@end

