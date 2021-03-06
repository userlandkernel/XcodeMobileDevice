//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/IDESourceControlCredentialViewDelegate-Protocol.h>

@class DVTReplacementView, DVTSourceControlAuthenticationStrategy, NSButton, NSLayoutConstraint, NSString, NSURL, NSWindow;

@interface IDESourceControlCredentialWindowController : NSWindowController <IDESourceControlCredentialViewDelegate>
{
    NSString *_sshKeyComment;
    DVTSourceControlAuthenticationStrategy *_authenticationStrategy;
    NSURL *_URL;
    unsigned long long _otherSimilarRepos;
    NSURL *_sshKeyFolderURL;
    NSWindow *_sheetOwner;
    DVTReplacementView *_replacementView;
    NSButton *_okButton;
    NSButton *_applyToAllButton;
    NSLayoutConstraint *_okButtonConstraint;
}

- (void).cxx_destruct;
@property(retain) NSURL *URL; // @synthesize URL=_URL;
@property __weak NSButton *applyToAllButton; // @synthesize applyToAllButton=_applyToAllButton;
@property(readonly) BOOL applyToOthers;
@property(retain) DVTSourceControlAuthenticationStrategy *authenticationStrategy; // @synthesize authenticationStrategy=_authenticationStrategy;
- (void)cancelCredentialSheet:(id)arg1;
- (void)clearWarningAndProgressText;
- (void)commitCredentialSheet:(id)arg1;
- (id)credentialViewController;
- (id)initWithURL:(id)arg1 othersToOffer:(unsigned long long)arg2 sshKeyComment:(id)arg3 sshKeyFolderURL:(id)arg4 owningWindow:(id)arg5;
- (id)initWithURL:(id)arg1 othersToOffer:(unsigned long long)arg2 sshKeyFolderURL:(id)arg3 owningWindow:(id)arg4;
@property __weak NSButton *okButton; // @synthesize okButton=_okButton;
@property __weak NSLayoutConstraint *okButtonConstraint; // @synthesize okButtonConstraint=_okButtonConstraint;
@property unsigned long long otherSimilarRepos; // @synthesize otherSimilarRepos=_otherSimilarRepos;
@property __weak DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property(retain) NSWindow *sheetOwner; // @synthesize sheetOwner=_sheetOwner;
@property(retain) NSURL *sshKeyFolderURL; // @synthesize sshKeyFolderURL=_sshKeyFolderURL;
- (void)showProgressText:(id)arg1;
- (void)showWarningText:(id)arg1;
- (void)viewNeedsHeight:(double)arg1;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

