//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDENavigableItemAsyncFilteringCoordinator.h>

@class NSMapTable;

@interface IDENavigableItemUniquingAsyncFilteringCoordinator : IDENavigableItemAsyncFilteringCoordinator
{
    NSMapTable *_weakRepresentedObjectsToNavigableItems;
}

- (void).cxx_destruct;
- (void)_forgetItems:(id)arg1;
- (void)_performFilterEvaluationOf:(id)arg1;
- (id)init;
- (void)primitiveInvalidate;

@end

