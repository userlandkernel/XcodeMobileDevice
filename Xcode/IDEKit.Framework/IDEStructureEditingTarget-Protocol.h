//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDENavigableItem;
@protocol IDEStructureEditingDraggingSource, IDEStructureEditingDropTarget, IDEStructureEditingGroupingTarget, IDEStructureEditingRemoveSubitemsTarget;

@protocol IDEStructureEditingTarget <NSObject>
- (id <IDEStructureEditingDraggingSource>)structureEditingDraggingSource;
- (id <IDEStructureEditingGroupingTarget>)structureEditingGroupingTargetForProposedNavigableItem:(IDENavigableItem *)arg1 proposedChildIndex:(long long)arg2;
- (id <IDEStructureEditingRemoveSubitemsTarget>)structureEditingRemoveSubitemsTargetForParentNavigableItem:(IDENavigableItem *)arg1;
- (id <IDEStructureEditingDropTarget>)structureEditingTargetForProposedNavigableItem:(IDENavigableItem *)arg1 proposedChildIndex:(long long)arg2;
@end

