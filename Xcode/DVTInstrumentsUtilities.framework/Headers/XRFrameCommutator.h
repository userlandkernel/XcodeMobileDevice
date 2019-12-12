//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsUtilities/XRFrameCommutator-Protocol.h>

@class NSString, NSThread, XRFrameRing;

@interface XRFrameCommutator : NSObject <XRFrameCommutator>
{
    unsigned char _state;
    XRFrameRing *_ring;
    NSThread *_thread;
    struct _opaque_pthread_cond_t {
        long long __sig;
        char __opaque[40];
    } _cond;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _mutex;
}

- (void).cxx_destruct;
- (void)_thread:(id)arg1;
- (void)_transitionToStopped;
- (void)dealloc;
- (id)init;
@property(nonatomic) long long qualityOfServiceClass;
- (void)setRing:(id)arg1;
- (void)start;
- (void)stop;
- (void)wakeUp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
