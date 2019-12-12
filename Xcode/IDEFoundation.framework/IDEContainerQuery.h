//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, NSMutableSet, NSSet, NSString;
@protocol DVTModelObject><DVTInvalidation;

@interface IDEContainerQuery : NSObject <DVTInvalidation>
{
    id <DVTModelObject><DVTInvalidation> _containerGraphObject;
    DVTObservingToken *_containerGraphObjectValidObservationToken;
    CDUnknownBlockType _skipSubgraphBlock;
    CDUnknownBlockType _predicateBlock;
    CDUnknownBlockType _visitorBlock;
    NSMutableSet *_matches;
    NSMutableSet *_visitedContainerGraphObjects;
    BOOL _isCancelled;
    BOOL _isLiveQuery;
    BOOL _inObjectsDidChangeNotification;
    BOOL _skipInvalidObjects;
}

+ (id)_invalidContainerObjectsRootedInContainerGraphObject:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversOfMatches;
+ (id)containerQueryWithContainerGraphObject:(id)arg1 predicateBlock:(CDUnknownBlockType)arg2;
+ (void)initialize;
+ (void)traverseContainerGraphRootedInContainerGraphObject:(id)arg1 skipInvalidObjects:(BOOL)arg2 skipSubgraphBlock:(CDUnknownBlockType)arg3 visitorBlock:(CDUnknownBlockType)arg4;
+ (void)traverseContainerGraphRootedInContainerGraphObject:(id)arg1 skipSubgraphBlock:(CDUnknownBlockType)arg2 visitorBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)_addContainerGraphObject:(id)arg1 insertedMatches:(id)arg2;
- (void)_cancelQueryIfNeeded;
- (id)_initWithContainerGraphObject:(id)arg1 skipSubgraphBlock:(CDUnknownBlockType)arg2 predicateBlock:(CDUnknownBlockType)arg3 visitorBlock:(CDUnknownBlockType)arg4 skipInvalidObjects:(BOOL)arg5;
- (BOOL)_isInterestedInContainerGraphObject:(id)arg1 forDeletion:(BOOL)arg2;
- (BOOL)_isTrackingContainer:(id)arg1 checkedContainers:(id)arg2;
- (BOOL)_isTrackingContainerItem:(id)arg1 checkedContainers:(id)arg2;
- (void)_objectsDidChange:(id)arg1;
- (void)_processContainerGraphObject:(id)arg1 insertedMatches:(id)arg2 deletedMatches:(id)arg3;
- (void)_removeContainerGraphObject:(id)arg1 deletedMatches:(id)arg2;
- (void)_traverseContainerGraphObject:(id)arg1 forDeletion:(BOOL)arg2 checkedContainers:(id)arg3 insertedMatches:(id)arg4 deletedMatches:(id)arg5;
- (void)_traverseContainerGraphObjects:(id)arg1 forDeletion:(BOOL)arg2 insertedMatches:(id)arg3 deletedMatches:(id)arg4;
- (void)_updateWithInsertedMatches:(id)arg1 deletedMatches:(id)arg2;
- (BOOL)_workspaceVerified_isTrackingContainer:(id)arg1 checkedContainers:(id)arg2;
- (BOOL)_workspaceVerified_isTrackingContainerItem:(id)arg1 checkedContainers:(id)arg2;
- (id)init;
@property(readonly) NSSet *matches;
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

