//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTiPhoneSimulatorRemoteClient/NSObject-Protocol.h>

@class DVTStackBacktrace;

@protocol DVTInvalidation <NSObject>
- (void)primitiveInvalidate;

@optional
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (BOOL)supportsInvalidationPrevention;
@property(retain) DVTStackBacktrace *creationBacktrace;
- (void)invalidate;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
@end

