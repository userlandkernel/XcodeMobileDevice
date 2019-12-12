//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/NSObject-Protocol.h>

@class NSNotification, NSPopover, NSWindow;

@protocol NSPopoverDelegate <NSObject>

@optional
- (NSWindow *)detachableWindowForPopover:(NSPopover *)arg1;
- (void)popoverDidClose:(NSNotification *)arg1;
- (void)popoverDidDetach:(NSPopover *)arg1;
- (void)popoverDidShow:(NSNotification *)arg1;
- (BOOL)popoverShouldClose:(NSPopover *)arg1;
- (BOOL)popoverShouldDetach:(NSPopover *)arg1;
- (void)popoverWillClose:(NSNotification *)arg1;
- (void)popoverWillShow:(NSNotification *)arg1;
@end

