//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDevice, NSCountedSet, NSMutableOrderedSet, NSNumber;

@interface IDEGaugeDataQueryCoordinator : NSObject
{
    BOOL _useProxiedDevice;
    DVTDevice *_device;
    NSNumber *_pid;
    NSMutableOrderedSet *_queries;
    NSMutableOrderedSet *_services;
    NSCountedSet *_attributes;
}

+ (id)sharedQueryCoordinatorWithPID:(id)arg1 onDevice:(id)arg2 useProxiedDevice:(BOOL)arg3;
- (void).cxx_destruct;
- (id)_noteAttributesDidChange;
- (void)addQuery:(id)arg1;
@property(retain, nonatomic) NSCountedSet *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) DVTDevice *device; // @synthesize device=_device;
- (void)handleResultDict:(id)arg1;
- (id)initForProcessWithPID:(id)arg1 onDevice:(id)arg2 useProxiedDevice:(BOOL)arg3;
@property(retain, nonatomic) NSNumber *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSMutableOrderedSet *queries; // @synthesize queries=_queries;
- (void)query:(id)arg1 didAddObservedAttributes:(id)arg2 andRemoveObservedAttributes:(id)arg3;
- (void)removeQuery:(id)arg1;
@property(retain, nonatomic) NSMutableOrderedSet *services; // @synthesize services=_services;
@property(readonly) BOOL useProxiedDevice; // @synthesize useProxiedDevice=_useProxiedDevice;

@end

