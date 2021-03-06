//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTGraphKit/NSObject-Protocol.h>

@class NSArray;
@protocol DTObjectGridGraphDataSource, DTObjectGridGraphDelegate, DTObjectGridNode, DTObjectGridReference;

@protocol DTObjectGridGraph <NSObject>
@property(nonatomic) struct CGPoint cameraPosition;
@property(nonatomic) __weak id <DTObjectGridGraphDataSource> dataSource;
@property(nonatomic) __weak id <DTObjectGridGraphDelegate> delegate;
- (void)deselectAll;
- (struct CGRect)frameForNode:(id <DTObjectGridNode>)arg1;
@property(nonatomic) struct CGSize gridCellSize;
@property(copy, nonatomic) NSArray *onScreenNodeIdentifiers;
@property(readonly, nonatomic) unsigned int pivotNodeIdentifier;
- (void)selectNodeWithIdentifier:(unsigned int)arg1;
- (void)selectReferenceWithIdentifier:(unsigned int)arg1;
@property(readonly, nonatomic) id <DTObjectGridNode> selectedNode;
@property(readonly, nonatomic) id <DTObjectGridReference> selectedReference;
- (void)setPivotNodeIdentifier:(unsigned int)arg1 maintainingCoordinates:(id <DTObjectGridNode>)arg2;
- (void)setPivotNodeIdentifier:(unsigned int)arg1 maintainingCoordinates:(id <DTObjectGridNode>)arg2 initialGenerations:(BOOL)arg3;
@end

