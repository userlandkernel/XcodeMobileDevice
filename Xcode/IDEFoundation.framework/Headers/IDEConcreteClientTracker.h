//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEClientTracking-Protocol.h>

@class NSMutableSet, NSString;

@interface IDEConcreteClientTracker : NSObject <IDEClientTracking>
{
    NSMutableSet *_clientTrackingTokensRequiringCancellation;
    NSMutableSet *_clientTrackingTokensRequiringCancellationPrompt;
    NSMutableSet *_clientTrackingTokensNotSupportingCancellation;
    BOOL _isCancelling;
}

- (void).cxx_destruct;
- (void)_clientCancellationTimeout;
- (void)_waitForTokensToCancel:(id)arg1;
- (void)cancelTrackedClients;
- (id)clientsNotSupportingCancellation;
- (id)clientsRequiringCancellationPrompt;
@property(readonly) BOOL isCancelling; // @synthesize isCancelling=_isCancelling;
- (id)registerClientWithName:(id)arg1 promptForCancellation:(BOOL)arg2 cancellationBlock:(CDUnknownBlockType)arg3;
- (id)registerUncancellableClientWithName:(id)arg1;
- (void)unregisterClient:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
