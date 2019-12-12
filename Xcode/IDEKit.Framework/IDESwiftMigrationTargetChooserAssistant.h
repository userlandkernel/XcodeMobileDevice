//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEAssistant.h>

#import <IDEKit/IDEFilterControlBarTarget-Protocol.h>
#import <IDEKit/NSOutlineViewDataSource-Protocol.h>
#import <IDEKit/NSOutlineViewDelegate-Protocol.h>

@class DVTBorderedView, DVTOutlineViewWithCustomGridDrawing, IDEFilterControlBar, NSArray, NSImageView, NSMutableIndexSet, NSString, NSTextField, NSTreeController;

@interface IDESwiftMigrationTargetChooserAssistant : IDEAssistant <NSOutlineViewDataSource, NSOutlineViewDelegate, IDEFilterControlBarTarget>
{
    NSArray *_targetItems;
    NSString *_searchString;
    NSString *_assistantTitle;
    NSMutableIndexSet *_expandedRowIndexes;
    NSArray *_selectedTargetChooserItems;
    IDEFilterControlBar *_filterControlBar;
    DVTBorderedView *_scopeBarBorderedView;
    DVTOutlineViewWithCustomGridDrawing *_outlineView;
    DVTBorderedView *_borderedView;
    NSImageView *_warningIconImageView;
    NSTextField *_warningTextField;
    NSTreeController *_targetChooserItemsController;
}

+ (BOOL)automaticallyNotifiesObserversOfSearchString;
+ (id)keyPathsForValuesAffectingArrangedTargetItems;
+ (id)keyPathsForValuesAffectingCanFinish;
- (void).cxx_destruct;
- (id)_attributedStringByHighlightingFindResults:(id)arg1;
- (id)_effectiveSelectedRowIndexes;
- (id)_findResultAttributes;
- (unsigned long long)_numberOfCheckedItemsAtIndexes:(id)arg1;
- (void)_restoreSelectedTargetChooserItemsAndExpandedRows;
- (void)_saveSelectedTargetChooserItemsAndExpandedRows;
- (void)_setChecked:(BOOL)arg1 forTargetChooserItemAtIndexes:(id)arg2;
@property(readonly, copy) NSArray *arrangedTargetItems;
- (id)assistantTitle;
- (BOOL)canCheckSelection;
- (BOOL)canGoForward;
- (BOOL)canUncheckSelection;
- (void)checkSelection:(id)arg1;
- (id)filterButtonAccessibilityDescription;
- (id)filterButtonMenu;
- (id)filterButtonToolTip;
- (id)filterControlBar;
- (id)filterDefinitionIdentifier;
- (void)loadUIState;
- (void)loadView;
- (id)nextAssistantIdentifier;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)primitiveInvalidate;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (void)setAssistantContext:(id)arg1;
@property(copy) NSArray *targetItems; // @synthesize targetItems=_targetItems;
- (id)stateRepositoryFilePath;
- (void)uncheckSelection:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)viewDidInstall;
- (void)viewWillUninstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

