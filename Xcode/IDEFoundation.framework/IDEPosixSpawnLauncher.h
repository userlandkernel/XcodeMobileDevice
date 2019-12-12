//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDERunOperationPathWorker.h>

@class DVTDispatchLock;

@interface IDEPosixSpawnLauncher : IDERunOperationPathWorker
{
    void *_file_actions;
    BOOL _startSuspended;
    BOOL _terminateCalled;
    BOOL _targetReallyDead;
    BOOL _responsibleForTermination;
    DVTDispatchLock *_atomizingLock;
}

- (void).cxx_destruct;
- (BOOL)_convertCmdArgs:(id)arg1 intoPtrArray:(const char ***)arg2 andEnvVars:(id)arg3 intoPtrArray:(const char ***)arg4 andReturnStandardizedPath:(const char **)arg5 error:(id *)arg6;
- (void)_forceQuit:(id)arg1;
- (void)_setPIDOnMainThread:(int)arg1;
- (void *)_setupPosixSpawnAttributesAndPTY:(id *)arg1;
- (void)_waitForChildExit;
- (BOOL)_willUseExistingProcess:(id)arg1;
- (void)dealloc;
- (id)initWithExtensionIdentifier:(id)arg1 launchSession:(id)arg2;
@property BOOL startSuspended; // @synthesize startSuspended=_startSuspended;
- (void)start;
- (void)terminate;

@end

