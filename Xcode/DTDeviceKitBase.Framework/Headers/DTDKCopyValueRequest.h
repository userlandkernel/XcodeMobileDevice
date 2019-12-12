//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DTDeviceKitBase/DVTCancellable-Protocol.h>

@class NSMutableSet, NSString;

@interface DTDKCopyValueRequest : NSObject <DVTCancellable>
{
    NSMutableSet *_promises;
    BOOL _cancelled;
    NSString *_domain;
    NSString *_key;
}

+ (id)requestWithDomain:(id)arg1 key:(id)arg2;
- (void).cxx_destruct;
- (void)addPromise:(id)arg1;
- (void)cancel;
- (BOOL)cancelled;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *domain; // @synthesize domain=_domain;
- (void)finishWithResult:(id)arg1 andError:(int)arg2;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *key; // @synthesize key=_key;

// Remaining properties
@property(readonly, getter=isCancelled) BOOL cancelled; // @dynamic cancelled;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

