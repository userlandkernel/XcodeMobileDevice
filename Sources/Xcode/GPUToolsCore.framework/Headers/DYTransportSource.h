//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYTransport;

__attribute__((visibility("hidden")))
@interface DYTransportSource : NSObject
{
    CDUnknownBlockType _messageHandler;
    CDUnknownBlockType _cancellationHandler;
    CDUnknownBlockType _registrationHandler;
    struct dispatch_queue_s *_queue;
    struct dispatch_queue_s *_mqueue;
    DYTransport *_transport;
    int _state;
}

- (void)_callCancellationHandler;
- (void)_callRegistrationHandler;
- (void)_cancel;
- (void)_dispatch:(id)arg1;
- (id)_initWithQueue:(struct dispatch_queue_s *)arg1 transport:(id)arg2;
- (void)_register;
- (void)cancel;
@property(copy, nonatomic) CDUnknownBlockType cancellationHandler;
@property(readonly, nonatomic) BOOL cancelled;
- (void)dealloc;
- (id)init;
@property(copy, nonatomic) CDUnknownBlockType messageHandler;
@property(copy, nonatomic) CDUnknownBlockType registrationHandler;
- (void)resume;
- (void)suspend;
@property(readonly, retain, nonatomic) DYTransport *transport; // @synthesize transport=_transport;

@end
