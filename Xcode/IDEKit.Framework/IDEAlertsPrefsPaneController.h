//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTGradientImageButton, IDEAlertsView, IDEControlGroup, NSArray, NSCell, NSMutableArray, NSPointerArray, NSScrollView, NSTableView;

@interface IDEAlertsPrefsPaneController : IDEViewController
{
    DVTBorderedView *_borderView;
    NSScrollView *_alertsScrollView;
    IDEAlertsView *_alertsView;
    NSTableView *_tableView;
    DVTBorderedView *_controlGroupContainer;
    IDEControlGroup *_controlGroup;
    DVTGradientImageButton *_addButton;
    DVTGradientImageButton *_removeButton;
    NSPointerArray *_alertEvents;
    NSCell *_dividerCell;
    NSMutableArray *_observationTokens;
    NSMutableArray *_customObservationTokens;
    BOOL _ignoreNextEdit;
    NSArray *_customAlertEvents;
}

- (void).cxx_destruct;
- (void)addCustomAlertEvent:(id)arg1;
- (void)awakeFromNib;
- (void)beginEditingFromClick:(id)arg1;
@property(copy, nonatomic) NSArray *customAlertEvents; // @synthesize customAlertEvents=_customAlertEvents;
- (void)loadView;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)primitiveInvalidate;
- (void)refreshKeyBindings;
- (void)reloadTableData;
- (void)removeCustomAlertEvent:(id)arg1;
- (void)restoreSelection:(id)arg1;
- (BOOL)tableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 setKeyboardShortcut:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)view;
- (void)viewWillUninstall;

@end

