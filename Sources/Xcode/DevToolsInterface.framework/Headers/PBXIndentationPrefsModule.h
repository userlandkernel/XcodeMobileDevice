//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXPreferencesPaneModule.h>

@class NSButton, NSPopUpButton, NSTextField;

@interface PBXIndentationPrefsModule : PBXPreferencesPaneModule
{
    NSButton *usesTabsCheckbox;
    NSButton *wrapLinesCheckbox;
    NSButton *indentWrappedLinesCheckbox;
    NSTextField *indentWrappedLinesTextField;
    NSTextField *tabWidthTextField;
    NSTextField *indentWidthTextField;
    NSButton *usesCheckbox;
    NSPopUpButton *tabBehaviorPopUp;
    NSTextField *tabBehaviorLabel;
    NSTextField *soloBraceIndentTextField;
    NSTextField *soloBraceIndentLabel;
    NSButton *autoCloseBraceCheckbox;
    NSButton *autoOpenCurlyCheckbox;
    NSButton *autoCloseCurlyCheckbox;
    NSButton *autoSemicolonCheckbox;
    NSButton *autoColonCheckbox;
    NSButton *autoPoundCheckbox;
    NSButton *autoReturnCheckbox;
    NSTextField *autoIndentLabel;
    NSButton *indentSlashSlashCheckbox;
    NSButton *alignSlashSlashCheckbox;
    NSTextField *slashSlashLabel;
}

- (void)_updateEnabledState;
- (void)checkBoxAction:(id)arg1;
- (void)initializeFromDefaults;
- (struct CGSize)minModuleSize;
- (void)popUpAction:(id)arg1;
- (void)saveChanges;
- (void)textFieldAction:(id)arg1;

@end

