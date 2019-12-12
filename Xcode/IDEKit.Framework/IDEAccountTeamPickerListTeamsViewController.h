//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTPagingSheetViewController-Protocol.h>

@class IDEAccountTeamPickerWindowController, NSArray, NSString, NSTableView, NSTextField;

@interface IDEAccountTeamPickerListTeamsViewController : IDEViewController <DVTPagingSheetViewController>
{
    BOOL _wantsMultipleSelection;
    BOOL _rowsSelected;
    IDEAccountTeamPickerWindowController *_pagingSheetWindowController;
    NSTextField *_positioningLabel;
    NSArray *_rows;
    NSTableView *_tableView;
}

- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (id)dataSourceRowsFromAccountWrappers:(id)arg1;
- (long long)numberOfRowsInTableView:(id)arg1;
@property(retain, nonatomic) IDEAccountTeamPickerWindowController *pagingSheetWindowController; // @synthesize pagingSheetWindowController=_pagingSheetWindowController;
@property(retain, nonatomic) NSTextField *positioningLabel; // @synthesize positioningLabel=_positioningLabel;
- (void)primitiveInvalidate;
@property(copy, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(nonatomic) BOOL rowsSelected; // @synthesize rowsSelected=_rowsSelected;
- (void)select:(id)arg1;
@property(retain, nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) BOOL wantsMultipleSelection; // @synthesize wantsMultipleSelection=_wantsMultipleSelection;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableViewClicked:(id)arg1;
- (void)tableViewDoubleClicked:(id)arg1;
- (void)viewAccounts:(id)arg1;
- (void)viewDidInstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

