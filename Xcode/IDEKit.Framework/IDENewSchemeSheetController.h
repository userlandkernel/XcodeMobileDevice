//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class IDEWorkspace, NSButton, NSPopUpButton, NSString, NSTextField, NSWindow;
@protocol IDEClientTrackingToken;

@interface IDENewSchemeSheetController : IDEViewController
{
    NSWindow *_sheetWindow;
    NSPopUpButton *_blueprintPopUp;
    NSTextField *_nameField;
    NSButton *_okButton;
    NSWindow *_hostWindow;
    NSWindow *_workspaceWindow;
    IDEWorkspace *_workspace;
    BOOL _didSheetEnd;
    BOOL _userHasEditedName;
    NSString *_name;
    id <IDEClientTrackingToken> _clientTrackingToken;
}

+ (BOOL)automaticallyNotifiesObserversForName;
+ (void)runSheetForWindow:(id)arg1 workspaceWindow:(id)arg2;
- (void).cxx_destruct;
- (void)_beginSheetForWindow:(id)arg1 workspaceWindow:(id)arg2;
- (id)_menuImageForImage:(id)arg1;
- (void)_newSchemeSheetDidEndWithReturnCode:(long long)arg1;
- (void)_populateBlueprintPopUp;
- (void)_setName:(id)arg1;
- (id)_titleAttributedStringWithImage:(id)arg1 andTitle:(id)arg2;
- (void)_updateOKButtonEnabledState;
- (void)blueprintPopUpAction:(id)arg1;
- (void)cancelAction:(id)arg1;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)okAction:(id)arg1;
- (void)primitiveInvalidate;
@property(retain) IDEWorkspace *workspace;
- (void)windowDidResize:(id)arg1;

@end

