//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSButton, NSString, NSTextField;

@interface IDESourceControlServerRemoteAlreadyExistsWindowController : NSWindowController
{
    NSTextField *_createRemoteNameField;
    NSButton *_createRemoteWithNameOKButton;
    NSString *_remoteAlreadyExistsWindowMessage;
    NSString *_lastName;
}

- (void).cxx_destruct;
- (void)beginSheetForWindow:(id)arg1 withRemoteName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)cancelCreateRemoteWithName:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (id)initWithWindow:(id)arg1;
@property(copy) NSString *lastName; // @synthesize lastName=_lastName;
- (void)okCreateRemoteWithName:(id)arg1;
@property(copy) NSString *remoteAlreadyExistsWindowMessage; // @synthesize remoteAlreadyExistsWindowMessage=_remoteAlreadyExistsWindowMessage;
- (void)windowDidLoad;
- (id)windowNibName;

@end

