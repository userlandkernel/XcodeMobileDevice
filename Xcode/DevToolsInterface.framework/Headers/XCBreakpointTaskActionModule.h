//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCBreakpointActionModule.h>

@class NSButton, NSTextField;

@interface XCBreakpointTaskActionModule : XCBreakpointActionModule
{
    NSTextField *_command;
    NSTextField *_arguments;
    NSButton *_wait;
    NSTextField *_instructions;
}

- (void)_chooseAction:(id)arg1;
- (void)prepareFocus;
- (void)setupBreakpointAction:(id)arg1;
- (void)updateBreakpointAction:(id)arg1;

@end
