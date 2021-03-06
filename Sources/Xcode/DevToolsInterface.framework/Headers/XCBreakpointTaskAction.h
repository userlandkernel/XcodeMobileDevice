//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/XCBreakpointAction.h>

@class NSString;

@interface XCBreakpointTaskAction : XCBreakpointAction
{
    NSString *_command;
    NSString *_arguments;
    BOOL _waitForTermination;
    id _debugSessionModule;
}

+ (id)archivableAttributes;
+ (id)displayName;
- (void)_debugSessionInvalid:(id)arg1;
- (id)_launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2;
- (void)_outputCallback:(id)arg1;
- (id)arguments;
- (id)command;
- (void)dealloc;
- (id)editorClassName;
- (void)performInSession:(id)arg1 onBreakpoint:(id)arg2;
- (void)resetActionState;
- (void)setArguments:(id)arg1;
- (void)setCommand:(id)arg1;
- (void)setWaitForTermination:(BOOL)arg1;
- (BOOL)waitForTermination;

@end

