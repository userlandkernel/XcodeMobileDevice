//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTDKRemoteDeviceToken, DVTDispatchLock, NSString;
@protocol DTDKRemoteDeviceConsoleControllerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface DTDKRemoteDeviceConsoleController : NSObject
{
    struct _AMDServiceConnection *_serviceRef;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_socketQueue;
    NSObject<OS_dispatch_source> *_consoleSource;
    _Bool _isInvalidating;
    struct DTDKCircularBuffer *_circularBuffer;
    DVTDispatchLock *_bufferLock;
    id <DTDKRemoteDeviceConsoleControllerDelegate> _delegate;
    DTDKRemoteDeviceToken *_token;
}

+ (id)consoleStringWithData:(id)arg1 startingAtOffset:(unsigned long long)arg2;
+ (id)controllerForDevice:(id)arg1;
- (void).cxx_destruct;
- (void)clear;
@property(readonly, copy) NSString *consoleString;
- (void)dealloc;
@property(retain) id <DTDKRemoteDeviceConsoleControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)invalidate;
- (void)reload;
@property __weak DTDKRemoteDeviceToken *token; // @synthesize token=_token;

@end

