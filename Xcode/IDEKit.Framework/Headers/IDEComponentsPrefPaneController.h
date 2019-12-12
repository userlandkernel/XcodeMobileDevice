//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTDownloadableManager, DVTReplacementView, DVTTabChooserView, DVTToolchainRegistry, NSArray, NSButton, NSProgressIndicator;

@interface IDEComponentsPrefPaneController : IDEViewController
{
    NSArray *_documentationDownloadables;
    NSArray *_simulatorsDownloadables;
    NSProgressIndicator *_progressIndicator;
    NSButton *_checkAndInstallNowButton;
    DVTDownloadableManager *_downloadableManager;
    DVTToolchainRegistry *_toolchainRegistry;
    DVTBorderedView *_borderedView;
    DVTTabChooserView *_tabChooserView;
    DVTReplacementView *_replacementView;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)showDocumentation;
+ (id)showDownloads;
+ (void)showPrefPane;
+ (id)showSimulators;
+ (id)showTabWithTitle:(id)arg1;
+ (id)showToolchains;
+ (id)showToolchainsAndSwitchToToolchain:(id)arg1;
- (void).cxx_destruct;
- (void)_initTabChooserView:(id)arg1;
- (void)_showUpdateActivityUI;
- (void)_stopUpdateActivityUI;
@property(retain) DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain) NSButton *checkAndInstallNowButton; // @synthesize checkAndInstallNowButton=_checkAndInstallNowButton;
- (void)checkAndInstallUpdates:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
@property(retain) NSArray *documentationDownloadables; // @synthesize documentationDownloadables=_documentationDownloadables;
@property(retain) DVTDownloadableManager *downloadableManager; // @synthesize downloadableManager=_downloadableManager;
- (void)loadView;
- (void)primitiveInvalidate;
@property(retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
- (void)revertStateWithDictionary:(id)arg1;
@property(retain) NSArray *simulatorsDownloadables; // @synthesize simulatorsDownloadables=_simulatorsDownloadables;
@property(retain) DVTTabChooserView *tabChooserView; // @synthesize tabChooserView=_tabChooserView;
@property(retain) DVTToolchainRegistry *toolchainRegistry; // @synthesize toolchainRegistry=_toolchainRegistry;

@end
