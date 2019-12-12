//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSCell, NSControl;

@interface IDEDebugCellHostingTableCellView : NSTableCellView
{
    NSCell *_hostedCell;
    NSControl *_cellHostingControl;
}

+ (void)registerNibWithOutlineView:(id)arg1 forIdentifier:(id)arg2;
- (void).cxx_destruct;
- (void)_ideDebugCellHostingTableCellViewCommonInit;
- (BOOL)allowsVibrancy;
@property(retain) NSControl *cellHostingControl; // @synthesize cellHostingControl=_cellHostingControl;
@property(retain, nonatomic) NSCell *hostedCell; // @synthesize hostedCell=_hostedCell;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
