//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DTKPCPUCounterAllocatorRecord : NSObject
{
    BOOL _isPMI;
    NSString *_eventName;
    NSString *_eventOrAliasName;
    NSString *_counterName;
    struct kpep_event *_kpepEvent;
    DTKPCPUCounterAllocatorRecord *_parent;
    DTKPCPUCounterAllocatorRecord *_child;
}

- (void).cxx_destruct;
@property(nonatomic) __weak DTKPCPUCounterAllocatorRecord *child; // @synthesize child=_child;
@property(retain, nonatomic) NSString *counterName; // @synthesize counterName=_counterName;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(retain, nonatomic) NSString *eventOrAliasName; // @synthesize eventOrAliasName=_eventOrAliasName;
- (id)initWithName:(id)arg1 nameOrAlias:(id)arg2 counterName:(id)arg3 kpepEvent:(struct kpep_event *)arg4 isPMI:(BOOL)arg5;
@property(nonatomic) BOOL isPMI; // @synthesize isPMI=_isPMI;
@property(nonatomic) struct kpep_event *kpepEvent; // @synthesize kpepEvent=_kpepEvent;
@property(nonatomic) __weak DTKPCPUCounterAllocatorRecord *parent; // @synthesize parent=_parent;

@end
