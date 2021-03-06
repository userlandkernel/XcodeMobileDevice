//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDEDebugNavigableModel-Protocol.h>

@class DVTStackBacktrace, IDEDebugProcess, IDELaunchSession, IDEThread, NSArray, NSString;

@interface IDEDebugQueue : NSObject <IDEDebugNavigableModel, DVTInvalidation>
{
    NSString *_type;
    BOOL _displayNameComputed;
    NSString *_displayName;
    IDEDebugProcess *_parentProcess;
    NSString *_name;
    NSArray *_threads;
    NSArray *_pendingBlocksThreads;
    IDEThread *_recordedThread;
}

+ (BOOL)_queueNameBelongsToConcurrentQueues:(id)arg1;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingDisplayName;
+ (id)keyPathsForValuesAffectingRecorded;
- (void).cxx_destruct;
@property(readonly, copy) NSString *associatedProcessUUID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)initWithParentProcess:(id)arg1 name:(id)arg2 type:(id)arg3 recordedThread:(id)arg4;
@property(readonly, nonatomic, getter=isRecorded) BOOL recorded;
@property(readonly) IDELaunchSession *launchSession;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (unsigned long long)numberOfPendingBlocks;
@property(readonly, nonatomic) IDEDebugProcess *parentProcess; // @synthesize parentProcess=_parentProcess;
@property(copy, nonatomic) NSArray *pendingBlocksThreads; // @synthesize pendingBlocksThreads=_pendingBlocksThreads;
- (void)primitiveInvalidate;
@property(retain, nonatomic) IDEThread *recordedThread; // @synthesize recordedThread=_recordedThread;
- (void)setPrimitiveThreads:(id)arg1;
@property(copy, nonatomic) NSArray *threads; // @synthesize threads=_threads;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

