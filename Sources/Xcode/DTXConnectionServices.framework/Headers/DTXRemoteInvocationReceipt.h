//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface DTXRemoteInvocationReceipt : NSObject
{
    NSObject<OS_dispatch_queue> *_guard;
    CDUnknownBlockType _completionHandler;
    id _returnValue;
    unsigned int _returnType;
}

- (void)_checkedAssign:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)handleCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)invokeCompletionWithReturnValue:(id)arg1 error:(id)arg2;

@end
