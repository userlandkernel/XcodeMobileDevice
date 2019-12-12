//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/NSWindowRestoration-Protocol.h>

@class DVTFilePath, NSString, NSTextField;

@interface IDEAboutWindowController : NSWindowController <NSWindowRestoration>
{
    NSTextField *_appNameLabel;
    NSTextField *_copyrightMultilineLabel;
    NSTextField *_versionAndBuildLabel;
    NSTextField *_revisionMultilineLabel;
    NSTextField *_toolchainLabel;
    DVTFilePath *_filePathToAcknowledgments;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)sharedAboutWindowController;
- (void).cxx_destruct;
- (id)_copyrightAndTrademarkString;
- (id)_revisionString;
- (id)_toolchainString;
- (id)_versionString;
@property(readonly) DVTFilePath *filePathToAcknowledgments;
@property(readonly) DVTFilePath *filePathToLicenseAgreement;
- (void)openAboutWindow:(id)arg1;
- (void)showAcknowledgments:(id)arg1;
- (void)showLicenseAgreement:(id)arg1;
- (void)windowDidLoad;
- (void)windowWillClose:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

