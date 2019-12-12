//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEAssistant.h>

#import <IDEKit/IDESourceControlCredentialViewDelegate-Protocol.h>

@class DVTReplacementView, NSImageView, NSPopUpButton, NSString, NSTextField, NSURL;

@interface IDESourceControlCredentialsAssistant : IDEAssistant <IDESourceControlCredentialViewDelegate>
{
    NSString *_alreadyTrustedFingerprint;
    NSURL *_oldURL;
    BOOL canGoForward;
    NSTextField *_addressField;
    NSPopUpButton *_typeButton;
    DVTReplacementView *_replacementView;
    NSImageView *_errorImage;
    NSTextField *_errorField;
}

- (void).cxx_destruct;
@property __weak NSTextField *addressField; // @synthesize addressField=_addressField;
- (BOOL)canCancel;
- (BOOL)canGoBack;
@property BOOL canGoForward; // @synthesize canGoForward;
- (void)clearWarningAndProgressText;
- (void)controlTextDidChange:(id)arg1;
- (id)credentialViewController;
- (id)downloadAssistantContext;
@property __weak NSTextField *errorField; // @synthesize errorField=_errorField;
@property __weak NSImageView *errorImage; // @synthesize errorImage=_errorImage;
- (id)nextAssistantIdentifier;
- (id)previousAssistantIdentifier;
- (void)primitiveInvalidate;
@property __weak DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property __weak NSPopUpButton *typeButton; // @synthesize typeButton=_typeButton;
- (void)showProgressText:(id)arg1;
- (void)showWarningText:(id)arg1;
- (void)viewDidLoad;
- (void)willGoNextOrFinish;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
