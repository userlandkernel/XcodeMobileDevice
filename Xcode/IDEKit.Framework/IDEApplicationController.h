//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/NSApplicationDelegate-Protocol.h>
#import <IDEKit/NSMenuDelegate-Protocol.h>

@class DVTDelayedInvocation, DVTNotificationToken, DVTObservingToken, IDESourceControlUIHandler, NSArray, NSDictionary, NSMenuItem, NSMutableDictionary, NSString;
@protocol NSMenuDelegate;

@interface IDEApplicationController : NSObject <NSApplicationDelegate, NSMenuDelegate>
{
    BOOL _haveScannedForPlugins;
    NSDictionary *_extensionIdToMenuDict;
    BOOL _closeKeyEquivalentClosesTab;
    NSString *_extensionIdForCurrentEditorAndNavigateMenus;
    NSString *_currentEditorMenuExtensionId;
    id <NSMenuDelegate> _editorMenuDelegate;
    NSString *_currentNavigateMenuExtensionId;
    long long _originalNavigateMenuItemCount;
    NSArray *_currentDebuggingAdditonUIExtensions;
    NSMenuItem *_shiftedCloseMenuItem;
    NSMenuItem *_shiftedCloseAllMenuItem;
    IDESourceControlUIHandler *_sourceControlUIHandler;
    DVTDelayedInvocation *_tabStateContextDelayedSaveInvocation;
    NSMutableDictionary *_tabStateContextForTabNameMap;
    DVTObservingToken *_lastActiveEditorToken;
    DVTNotificationToken *_lastActiveEditorContextNotificationToken;
    id _keyBindingSetWillActivateObserver;
    id _keyBindingSetDidActivateObserver;
    BOOL _isSafeToLoadMobileDevice;
    BOOL _hasScheduledMobileDeviceLoadBlock;
    BOOL _applicationIsTerminatingDuringLaunch;
    BOOL _applicationShouldTerminateRecursionGuard;
    BOOL _currentEditorAndNavigatorMenusAreBackstop;
    BOOL _forceUpdateOfEditorAndNavigateMenus;
}

+ (void)initialize;
+ (id)sharedAppController;
- (void).cxx_destruct;
- (id)_cachedMenuDefinitionExtensionIdentifiers;
- (id)_cachedMenuForDefinitionExtensionIdentifier:(id)arg1;
- (id)_closeCurrentTabMenuItem;
- (id)_closeMenuItem;
- (id)_debugMenu;
- (id)_editMenu;
- (id)_editorForMenuContent;
- (id)_editorMenu;
- (id)_editorMenuProviderExtension;
- (id)_fileMenu;
- (void)_handleGetURLEvent:(id)arg1 withReplyEvent:(id)arg2;
- (void)_incrementCountForKey:(id)arg1 in:(id)arg2;
- (void)_modifyMenu:(id)arg1 withItemsFromMenu:(id)arg2 replace:(BOOL)arg3;
- (id)_navigateMenu;
- (void)_pruneEditorMenu;
- (void)_pruneNavigateMenu;
- (BOOL)_saveTabStateContextForTabNameMapToFilePath:(id)arg1;
- (void)_setKeyEquivalentForMenuItem:(id)arg1 toIncludeShiftKey:(BOOL)arg2;
- (void)_setTabStateContext:(id)arg1 forTabNamed:(id)arg2;
- (void)_setUpGetURLAppleEventHandler;
- (void)_setUpMainMenu;
- (void)_setUpOpenDocumentAppleEventHandler;
- (unsigned long long)_shouldTerminateClosingDocuments;
- (id)_tabStateContextForTabNameMapByInstantiatingIfNeeded;
- (id)_tabStateContextForTabNameMapFromFilePath:(id)arg1;
- (id)_tabStateContextForTabNamed:(id)arg1;
- (void)_terminateDueToFailureDuringLaunch:(id)arg1;
- (void)_updateCloseKeyEquivalents;
- (void)_updateCloseKeyEquivalentsIfNeeded;
- (void)_updateEditMenuIfNeeded;
- (void)_updateEditorAndNavigateMenusIfNeeded;
- (void)_updateMenuKeyBindingSet;
- (void)_updateUtilitiesMenuIfNeeded;
- (BOOL)_useOrganizerForMenuContent;
- (id)_utilitiesMenu;
- (BOOL)application:(id)arg1 openFile:(id)arg2;
- (void)application:(id)arg1 openFiles:(id)arg2;
- (void)applicationDidFinishLaunching:(id)arg1;
- (id)applicationDockMenu:(id)arg1;
- (void)applicationIsTerminating:(id)arg1;
@property BOOL applicationIsTerminatingDuringLaunch; // @synthesize applicationIsTerminatingDuringLaunch=_applicationIsTerminatingDuringLaunch;
- (BOOL)applicationOpenUntitledFile:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)batchFind:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (void)editorMenuWillOpen:(id)arg1;
@property BOOL forceUpdateOfEditorAndNavigateMenus; // @synthesize forceUpdateOfEditorAndNavigateMenus=_forceUpdateOfEditorAndNavigateMenus;
@property(readonly) NSString *formattedApplicationVersion;
@property BOOL haveScannedForPlugins; // @synthesize haveScannedForPlugins=_haveScannedForPlugins;
- (unsigned long long)ide_applicationShouldTerminate:(id)arg1;
- (id)init;
- (id)licenseAgreementFilePathForFileType:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)openQuickly:(id)arg1 userData:(id)arg2 error:(id *)arg3;
- (void)openURLs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateDebugMenuIfNeeded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

