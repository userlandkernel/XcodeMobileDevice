//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class DVTDynamicTableView, NSNotification, NSString, NSTableRowView, NSView;

@protocol DVTDynamicTableViewDelegate <NSObject>
- (double)dynamicTableView:(DVTDynamicTableView *)arg1 heightForRow:(long long)arg2 inSection:(long long)arg3;
- (NSView *)dynamicTableView:(DVTDynamicTableView *)arg1 viewForRow:(long long)arg2 inSection:(long long)arg3;

@optional
- (void)dynamicTableView:(DVTDynamicTableView *)arg1 didAddRowView:(NSTableRowView *)arg2 forRow:(long long)arg3 inSection:(long long)arg4;
- (void)dynamicTableView:(DVTDynamicTableView *)arg1 didRemoveRowView:(NSTableRowView *)arg2 forRow:(long long)arg3 inSection:(long long)arg4;
- (double)dynamicTableView:(DVTDynamicTableView *)arg1 heightForHeaderInSection:(long long)arg2;
- (id)dynamicTableView:(DVTDynamicTableView *)arg1 objectValueForHeaderInSection:(long long)arg2;
- (id)dynamicTableView:(DVTDynamicTableView *)arg1 objectValueForRow:(long long)arg2 inSection:(long long)arg3;
- (NSString *)dynamicTableView:(DVTDynamicTableView *)arg1 toolTipForRow:(long long)arg2 inSection:(long long)arg3;
- (NSView *)dynamicTableView:(DVTDynamicTableView *)arg1 viewForHeaderInSection:(long long)arg2;
- (void)dynamicTableViewSelectionDidChange:(NSNotification *)arg1;
@end
