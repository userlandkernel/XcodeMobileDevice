//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSHashTable, PBXModule;

@interface PBXWindowController : NSWindowController
{
    NSHashTable *_modulesNeedingUpdate;
    PBXModule *_rootModule;
    id _lastFirstResponder;
    BOOL _shouldCloseRootModule;
}

- (void)_clearRootModule;
- (void)_installModuleView;
- (void)_removeModuleView;
- (void)_setRootModule:(id)arg1;
- (void)_windowDidUpdate:(id)arg1;
- (void)_windowWillClose:(id)arg1;
- (id)activeModule;
- (void)clearRootModule;
- (void)dealloc;
- (id)description;
- (void)doCommandBySelector:(SEL)arg1;
- (void)finalize;
- (id)init;
- (id)initWithRootModule:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (id)initWithWindowNibName:(id)arg1;
- (id)initWithWindowNibName:(id)arg1 owner:(id)arg2;
- (id)initWithWindowNibPath:(id)arg1 owner:(id)arg2;
- (void)moduleUpdateStatusDidChange:(id)arg1;
- (void)orderWindow:(long long)arg1 relativeTo:(long long)arg2;
- (id)rootModule;
- (void)setShouldCloseRootModule:(BOOL)arg1;
- (void)showWindow:(id)arg1;
- (void)synchronizeWindowTitleWithDocumentName;
- (BOOL)tryToPerform:(SEL)arg1 with:(id)arg2;
- (void)updateFirstResponder;
- (void)updateModulesIfNeeded;

@end

