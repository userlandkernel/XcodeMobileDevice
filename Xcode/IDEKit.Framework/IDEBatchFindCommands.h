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

@interface IDEBatchFindCommands : NSObject <IDECommandHandlerVendor, IDECommandHandler>
{
    id <IDESelectionSource> _selectionSource;
}

+ (void)_findText:(id)arg1 inWorkspaceTabController:(id)arg2 findType:(int)arg3;
+ (BOOL)_isValidForAction:(SEL)arg1 withSelectionSource:(id)arg2;
+ (id)_selectedItemInWorkspaceTabController:(id)arg1 validateSymbol:(BOOL)arg2;
+ (id)handlerForAction:(SEL)arg1 withSelectionSource:(id)arg2;
+ (id)selectedItemsInSelectionSource:(id)arg1;
- (void).cxx_destruct;
- (void)_findSelectionInWorkspaceByType:(int)arg1 validatingSymbol:(BOOL)arg2;
- (id)_initWithSelectionSource:(id)arg1;
- (void)_navigateToFindResult:(id)arg1 andUpdateIndex:(long long)arg2;
- (void)callHierarchy:(id)arg1;
- (void)contextMenu_searchInSelection:(id)arg1;
- (void)findAndReplaceInWorkspace:(id)arg1;
- (void)findCallHierarchyForSymbol:(id)arg1;
- (void)findInWorkspace:(id)arg1;
- (void)findSelectedSymbolInWorkspace:(id)arg1;
- (void)findSelectedTextInWorkspace:(id)arg1;
- (void)navigateToNextFindResult:(id)arg1;
- (void)navigateToPreviousFindResult:(id)arg1;
- (void)revealCallHierarchySymbolInSymbolNavigator:(id)arg1;
@property(readonly) id <IDESelectionSource> selectionSource; // @synthesize selectionSource=_selectionSource;
- (BOOL)validateUserInterfaceItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

