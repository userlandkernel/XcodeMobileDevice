//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTKit/DVTCancellable-Protocol.h>

@class DVTStackBacktrace, NSString;

@interface DVTBindingToken : NSObject <DVTCancellable>
{
    CDUnknownBlockType _cancellationBlock;
    DVTStackBacktrace *_creationBacktrace;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id)initWithCancellationBlock:(CDUnknownBlockType)arg1;
@property(readonly, getter=isCancelled) BOOL cancelled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
