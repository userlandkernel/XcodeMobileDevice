//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCBreakpointAction.h>

@class NSString;

@interface XCBreakpointCommandAction : XCBreakpointAction
{
    NSString *_command;
    BOOL _logCommand;
}

+ (id)archivableAttributes;
+ (id)displayName;
- (id)command;
- (void)dealloc;
- (id)editorClassName;
- (BOOL)logCommand;
- (void)performInSession:(id)arg1 onBreakpoint:(id)arg2;
- (void)setCommand:(id)arg1;
- (void)setLogCommand:(BOOL)arg1;
- (BOOL)useDebuggerSideImplementation;

@end

