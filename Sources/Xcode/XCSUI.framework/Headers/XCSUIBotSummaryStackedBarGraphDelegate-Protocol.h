//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSColor, NSEvent, XCSUIBotSummaryStackedBarGraph, XCSUIBotSummaryStackedBarGraphColumn;

@protocol XCSUIBotSummaryStackedBarGraphDelegate
- (NSColor *)emptyColumnColor;
- (void)mouseClickedOnGraph:(XCSUIBotSummaryStackedBarGraph *)arg1 column:(XCSUIBotSummaryStackedBarGraphColumn *)arg2 event:(NSEvent *)arg3;
- (void)mouseExitedGraph:(XCSUIBotSummaryStackedBarGraph *)arg1 event:(NSEvent *)arg2;
- (void)mouseMovedOverGraph:(XCSUIBotSummaryStackedBarGraph *)arg1 column:(XCSUIBotSummaryStackedBarGraphColumn *)arg2 event:(NSEvent *)arg3;
@end

