//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <XCSUI/NSTableViewDataSource-Protocol.h>
#import <XCSUI/NSTableViewDelegate-Protocol.h>

@class DVTObservingToken, NSArray, NSArrayController, NSButton, NSError, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSPopUpButton, NSStackView, NSString, NSTextField, NSView, XCSUIBotDefinitionContext;

@interface XCSUIBotDefinition_BuildConfigurationEditor : IDEViewController <NSTableViewDataSource, NSTableViewDelegate>
{
    DVTObservingToken *_runContextsObservingToken;
    BOOL _hasUserManuallyTriggeredInstallableProductSetting;
    BOOL _userInitiatedCreateInstallableProductState;
    BOOL _viewIsInstalled;
    NSError *_schemeError;
    XCSUIBotDefinitionContext *_botDefinitionContext;
    NSMutableDictionary *_environmentVariables;
    NSMutableArray *_environmentVariableKeys;
    NSPopUpButton *_schemesPopup;
    NSView *_schemeChooserView;
    NSButton *_fixSchemeProblemCheckbox;
    NSView *_schemeProblemView;
    NSArrayController *_schemesController;
    NSStackView *_viewsHostView;
    NSView *_cleaning;
    NSView *_viewsContainer;
    NSArray *_availableOverrideToolchains;
    NSButton *_analyzeActionCheckbox;
    NSButton *_testActionCheckbox;
    NSTextField *_codeCoverageLabel;
    NSPopUpButton *_codeCoveragePreferencePopUp;
    NSButton *_archiveActionCheckbox;
    NSButton *_exportsProductFromArchiveCheckbox;
    NSPopUpButton *_createThinnedAppsPopUp;
    NSPopUpButton *_cleaningPopUp;
    NSPopUpButton *_buildConfigurationPopUp;
    NSTextField *_overrideToolchainLabel;
    NSPopUpButton *_overrideToolchainPopUp;
    NSLayoutConstraint *_cleaningToSchemeProblem;
}

- (void).cxx_destruct;
- (void)_fixupStackView;
- (void)_selectAssistantContextSchemeInPopUp;
@property __weak NSButton *analyzeActionCheckbox; // @synthesize analyzeActionCheckbox=_analyzeActionCheckbox;
@property __weak NSButton *archiveActionCheckbox; // @synthesize archiveActionCheckbox=_archiveActionCheckbox;
@property(retain) NSArray *availableOverrideToolchains; // @synthesize availableOverrideToolchains=_availableOverrideToolchains;
@property(retain, nonatomic) XCSUIBotDefinitionContext *botDefinitionContext; // @synthesize botDefinitionContext=_botDefinitionContext;
- (void)buildConfigurationAction:(id)arg1;
@property __weak NSPopUpButton *buildConfigurationPopUp; // @synthesize buildConfigurationPopUp=_buildConfigurationPopUp;
- (BOOL)canGoForward;
- (void)cleanPreferenceAction:(id)arg1;
@property __weak NSView *cleaning; // @synthesize cleaning=_cleaning;
@property __weak NSPopUpButton *cleaningPopUp; // @synthesize cleaningPopUp=_cleaningPopUp;
@property(retain) NSLayoutConstraint *cleaningToSchemeProblem; // @synthesize cleaningToSchemeProblem=_cleaningToSchemeProblem;
@property __weak NSTextField *codeCoverageLabel; // @synthesize codeCoverageLabel=_codeCoverageLabel;
- (void)codeCoveragePreferenceAction:(id)arg1;
@property __weak NSPopUpButton *codeCoveragePreferencePopUp; // @synthesize codeCoveragePreferencePopUp=_codeCoveragePreferencePopUp;
- (void)createThinnedAppsAction:(id)arg1;
@property __weak NSPopUpButton *createThinnedAppsPopUp; // @synthesize createThinnedAppsPopUp=_createThinnedAppsPopUp;
@property(retain, nonatomic) NSMutableArray *environmentVariableKeys; // @synthesize environmentVariableKeys=_environmentVariableKeys;
@property(retain, nonatomic) NSMutableDictionary *environmentVariables; // @synthesize environmentVariables=_environmentVariables;
- (void)exportsProductFromArchiveAction:(id)arg1;
@property __weak NSButton *exportsProductFromArchiveCheckbox; // @synthesize exportsProductFromArchiveCheckbox=_exportsProductFromArchiveCheckbox;
- (void)fixSchemeButton:(id)arg1;
@property(retain) NSButton *fixSchemeProblemCheckbox; // @synthesize fixSchemeProblemCheckbox=_fixSchemeProblemCheckbox;
- (void)listenForToolchainChanges;
- (void)loadToolchains;
- (void)overrideToolchainAction:(id)arg1;
@property __weak NSTextField *overrideToolchainLabel; // @synthesize overrideToolchainLabel=_overrideToolchainLabel;
@property __weak NSPopUpButton *overrideToolchainPopUp; // @synthesize overrideToolchainPopUp=_overrideToolchainPopUp;
- (void)performsAnalyzeActionAction:(id)arg1;
- (void)performsArchiveActionAction:(id)arg1;
- (void)performsTestActionAction:(id)arg1;
@property(retain) NSView *schemeChooserView; // @synthesize schemeChooserView=_schemeChooserView;
@property(retain, nonatomic) NSError *schemeError; // @synthesize schemeError=_schemeError;
- (void)schemePopUpAction:(id)arg1;
@property(retain) NSView *schemeProblemView; // @synthesize schemeProblemView=_schemeProblemView;
@property(retain, nonatomic) NSArrayController *schemesController; // @synthesize schemesController=_schemesController;
@property(retain) NSPopUpButton *schemesPopup; // @synthesize schemesPopup=_schemesPopup;
- (id)service;
@property __weak NSButton *testActionCheckbox; // @synthesize testActionCheckbox=_testActionCheckbox;
@property(nonatomic) BOOL viewIsInstalled; // @synthesize viewIsInstalled=_viewIsInstalled;
@property __weak NSView *viewsContainer; // @synthesize viewsContainer=_viewsContainer;
@property __weak NSStackView *viewsHostView; // @synthesize viewsHostView=_viewsHostView;
- (void)setupLayers;
- (void)updateToolchainsPopup;
- (void)verifyIfSCMIsTrackingCurrentSelectedScheme;
- (void)viewDidInstall;
- (void)viewWillUninstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

