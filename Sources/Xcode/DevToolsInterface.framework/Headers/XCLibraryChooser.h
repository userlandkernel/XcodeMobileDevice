//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSArray, NSButton, NSPopUpButton, NSTreeController, PBXExtendedOutlineView, PBXGroup, PBXTarget;

@interface XCLibraryChooser : NSWindowController
{
    PBXExtendedOutlineView *_outlineView;
    NSButton *_cancelButton;
    NSButton *_addButton;
    NSButton *_addOtherButton;
    NSPopUpButton *_libraryTypePopUp;
    NSTreeController *_libraryTreeController;
    unsigned long long _selectedLibraryTypeIndex;
    NSArray *_libraryList;
    id _sender;
    PBXTarget *_target;
    PBXGroup *_group;
    SEL _selector;
}

- (void)_addFilesOpenPanelDidEndWithReturnCode:(long long)arg1 fileSystemLocations:(id)arg2 contextInfo:(void *)arg3;
- (void)_addLibrariesSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_buildSettingsDictionaryDidChange:(id)arg1;
- (void)addLibraries:(id)arg1;
- (void)addOther:(id)arg1;
- (void)awakeFromNib;
- (void)cancelChooser:(id)arg1;
- (void)chooseLibrariesWithSheetForObject:(id)arg1 target:(id)arg2 group:(id)arg3 didEndSelector:(SEL)arg4;
- (void)clearLibraryList;
- (void)clearSelectionInOutlineView:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)libraryList;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (id)outlineView:(id)arg1 itemForPersistentObject:(id)arg2;
- (id)outlineView:(id)arg1 persistentObjectForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (id)sdkPackages:(id)arg1;
- (unsigned long long)selectedLibraryTypeIndex;
- (void)setLibraryList:(id)arg1;
- (void)setSelectedLibraryTypeIndex:(unsigned long long)arg1;
- (id)windowNibName;

@end

