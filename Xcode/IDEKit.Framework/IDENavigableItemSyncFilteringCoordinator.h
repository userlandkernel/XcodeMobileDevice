//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDENavigableItemFilteringCoordinator.h>

@class DVTDelayedInvocation;

@interface IDENavigableItemSyncFilteringCoordinator : IDENavigableItemFilteringCoordinator
{
    DVTDelayedInvocation *_scheduledFilteringRestart;
}

- (void).cxx_destruct;
- (id)_arrangeItems:(id)arg1 ofItem:(id)arg2;
- (void)_filterDidChange;
- (void)_handleItemsPropertiesDidChange:(id)arg1;
- (void)_handleObjectGraphDidChange:(id)arg1;
- (void)_invalidateArrangedChildrenOfItems:(id)arg1;
- (id)init;
- (void)primitiveInvalidate;
@property(readonly) DVTDelayedInvocation *scheduledFilteringRestart; // @synthesize scheduledFilteringRestart=_scheduledFilteringRestart;

@end

