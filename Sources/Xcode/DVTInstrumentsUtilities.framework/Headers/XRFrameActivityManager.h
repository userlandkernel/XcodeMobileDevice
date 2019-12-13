//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsUtilities/XRFrameActivityManager-Protocol.h>

@class NSString, XRFrameActivity;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, XRFrameCommutator;

@interface XRFrameActivityManager : NSObject <XRFrameActivityManager>
{
    const char *_shouldYield;
    id <XRFrameCommutator> _commutator;
    BOOL _yieldFlag;
    BOOL _establishesAffinity;
    BOOL _activitiesCanRunInParallel;
    BOOL _debugCanCallSuspend;
    BOOL _debugCanCallResume;
    unsigned char _suspendCount;
    unsigned int _activityQoS;
    struct XRSerializedAccess<ActivityInfo> _activityInfo;
    NSObject<OS_dispatch_semaphore> *_actionRequired;
    NSObject<OS_dispatch_queue> *_serialActivityQueue;
    struct _opaque_pthread_rwlock_t _insideFrameLock;
    struct _opaque_pthread_rwlock_t _outsideFrameLock;
    XRFrameActivity *_syncActivity;
    int _kdebugCodeBase;
}

+ (unsigned int)_activityQoS;
+ (BOOL)_enableConcurrentActivities;
+ (BOOL)_establishesAffinity;
+ (int)_identifierForSignposting;
+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_activityFinished:(id)arg1;
- (void)_activityYielded:(id)arg1;
- (void)_dispatchScheduledActivitiesUntil:(unsigned long long)arg1;
- (void)_finalShutdown;
- (int)_handleMinorFrameWithDeadline:(unsigned long long)arg1;
- (BOOL)_hasRunnableActivities;
- (void)_markAsReady;
- (void)_performDuringMinorFrame:(CDUnknownBlockType)arg1;
- (void)_performOutsideMinorFrame:(CDUnknownBlockType)arg1;
- (void)_resumeActivities;
- (void)_scheduleActivityInGroup:(id)arg1 qualityOfService:(unsigned int)arg2 block:(CDUnknownBlockType)arg3;
- (id)_scheduleActivityWithBlock:(CDUnknownBlockType)arg1;
- (const char *)_shouldYieldFlag;
- (void)_suspendActivitiesWithDeadline:(unsigned long long)arg1;
- (void)beginMinorFrameWithDeadline:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic, getter=isReady) BOOL ready;
- (void)setCommutator:(id)arg1;
- (void)shutdown;
- (void)underrunWarning;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
