//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDECommandHandler-Protocol.h>
#import <IDEKit/IDECommandHandlerVendor-Protocol.h>

@class NSString;
@protocol IDESelectionSource;

@interface IDEApplicationCommands : NSObject <IDECommandHandler, IDECommandHandlerVendor>
{
    id <IDESelectionSource> _selectionSource;
}

+ (id)_activeWorkspaceTabController:(id)arg1;
+ (id)_applicationURLForDocumentURL:(id)arg1;
+ (id)_fileURLsInSelectionSource:(id)arg1 useContextualMenuSelection:(BOOL)arg2;
+ (BOOL)_isValidForAction:(SEL)arg1 withSelectionSource:(id)arg2;
+ (BOOL)_isValidForRevealInDebugNavigator:(id)arg1;
+ (BOOL)_validateOrCloseOtherWindows:(BOOL)arg1;
+ (id)handlerForAction:(SEL)arg1 withSelectionSource:(id)arg2;
+ (void)newWorkspaceDocument:(id)arg1 didSave:(BOOL)arg2 contextInfo:(void *)arg3;
+ (BOOL)workspaceContainsBlueprintProvider:(id)arg1;
- (void).cxx_destruct;
- (id)_initWithSelectionSource:(id)arg1;
- (void)_revealArchivedItemsInNavigator:(id)arg1;
- (void)addTarget:(id)arg1;
- (void)closeOtherWindows:(id)arg1;
- (void)contextMenu_openWithExternalEditor:(id)arg1;
- (void)contextMenu_revealInProjectNavigator:(id)arg1;
- (void)contextMenu_showInFinder:(id)arg1;
- (void)finishLoggingPowerConsumption:(id)arg1;
- (void)logPowerConsumption:(id)arg1;
- (void)makeWindowFirstResponder:(id)arg1;
- (void)newDocument:(id)arg1;
- (void)newPlayground:(id)arg1;
- (void)newProject:(id)arg1;
- (void)newTarget:(id)arg1;
- (void)newWindow:(id)arg1;
- (void)newWorkspace:(id)arg1;
- (void)openQuickly:(id)arg1;
- (void)openWithExternalEditor:(id)arg1;
- (void)openWithExternalEditorUsingContextualMenuSelection:(BOOL)arg1;
- (void)orderFrontAboutPanel:(id)arg1;
- (void)orderFrontPreferencesPanel:(id)arg1;
- (void)revealInDebugNavigator:(id)arg1;
- (void)revealInProjectNavigator:(id)arg1;
- (void)scmDownload:(id)arg1;
@property(readonly) id <IDESelectionSource> selectionSource; // @synthesize selectionSource=_selectionSource;
- (void)showAllBezels:(id)arg1;
- (void)showDevicesWindow:(id)arg1;
- (void)showInFinder:(id)arg1;
- (void)showInFinderUsingContextualMenuSelection:(BOOL)arg1;
- (void)showOrganizer:(id)arg1;
- (void)showSuddenTerminationCount:(id)arg1;
- (void)showTemplateChooserForTemplateKind:(id)arg1;
- (void)showTemplateChooserForTemplateKind:(id)arg1 inWorkspaceTabController:(id)arg2 createdDocument:(id)arg3;
- (void)showTutorialWindow:(id)arg1;
- (void)showWelcomeToXcode:(id)arg1;
- (void)triggerCollectionChecking:(id)arg1;
- (void)triggerFailedAssertion:(id)arg1;
- (void)updateSuddenTerminationCount:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

