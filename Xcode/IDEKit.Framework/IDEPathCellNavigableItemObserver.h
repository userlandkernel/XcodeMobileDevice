//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEPathCell, NSHashTable, NSSet, NSString;

@interface IDEPathCellNavigableItemObserver : NSObject <DVTInvalidation>
{
    IDEPathCell *_owner;
    NSHashTable *_observedItems;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_setupObservingForItems:(id)arg1;
- (void)_tearDownObservingForItems:(id)arg1;
- (id)initWithOwner:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly) NSSet *observedItems;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

