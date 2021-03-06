//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXModule.h>

#import <DevToolsInterface/NSTableViewDataSource-Protocol.h>
#import <DevToolsInterface/NSTableViewDelegate-Protocol.h>

@class NSButton, NSMatrix, NSPopUpButton, NSString, NSTableColumn, PBXExtendedTableView, PBXFindOptionsSet;

@interface PBXProjectFindOptionsModule : PBXModule <NSTableViewDataSource, NSTableViewDelegate>
{
    NSPopUpButton *findOptionSetsPopUp;
    NSButton *addFindOptionsSetButton;
    NSButton *deleteFindOptionsSetButton;
    NSButton *searchOpenFilesCheckbox;
    NSButton *searchOpenProjectsCheckbox;
    NSButton *searchIncludedFilesCheckbox;
    NSButton *searchFilesAndFoldersCheckbox;
    NSMatrix *whichProjectFilesRadios;
    NSMatrix *frameworkOrProjectRadios;
    NSMatrix *useNamePatternsRadios;
    PBXExtendedTableView *patternsTableView;
    NSTableColumn *_enabledTableColumn;
    NSTableColumn *_includeOrExcludeTableColumn;
    NSTableColumn *_patternTableColumn;
    NSButton *tempCheckbox;
    NSButton *addRegexButton;
    NSButton *deleteRegexButton;
    NSButton *addFileButton;
    NSButton *deleteFileButton;
    PBXExtendedTableView *filesTableView;
    PBXFindOptionsSet *_currentFindOptionsSet;
}

+ (id)sharedProjectFindOptionsModule;
- (void)_addFilesSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_addOptionsSetSheetDidEndWithReturnCode:(long long)arg1 string:(id)arg2 contextInfo:(void *)arg3;
- (void)_setCurrentFindOptionsSet:(id)arg1 sendChangeNotification:(BOOL)arg2;
- (void)addFileAction:(id)arg1;
- (void)addFindOptionsSetAction:(id)arg1;
- (void)addRegexAction:(id)arg1;
- (void)checkboxAndRadioAction:(id)arg1;
- (id)currentFindOptionsSet;
- (void)dealloc;
- (void)deleteFileAction:(id)arg1;
- (void)deleteFindOptionsSetAction:(id)arg1;
- (void)deleteRegexAction:(id)arg1;
- (void)findOptionSetsPopUpAction:(id)arg1;
- (id)initWithModuleNibName:(id)arg1;
- (void)loadFindOptionsPopUpWithNewSelectedSet:(id)arg1;
- (void)loadFindOptionsSettings;
- (void)loadNamePatterns;
- (Class)moduleWindowClass;
- (id)moduleWindowFrameAutosaveName;
- (unsigned long long)moduleWindowStyleMask;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)setCurrentFindOptionsSet:(id)arg1;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (void)tableView:(id)arg1 deleteRows:(id)arg2;
- (void)tableView:(id)arg1 handleReturnKey:(id)arg2 changeFocus:(BOOL)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)updateEnabledState;
- (void)viewDidLoad;
- (struct CGSize)viewMinSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

