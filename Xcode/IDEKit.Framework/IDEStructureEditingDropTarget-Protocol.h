//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class DVTFilePath, IDENavigableItem, IDEStructureEditingAssistantContext;

@protocol IDEStructureEditingDropTarget <NSObject>
- (long long)actualChildIndex;
- (IDENavigableItem *)actualNavigableItem;
- (IDEStructureEditingAssistantContext *)insertSubitemsAssistantContext;
- (BOOL)structureEditingAcceptInsertionOfSubitemsForContext:(IDEStructureEditingAssistantContext *)arg1;
- (BOOL)structureEditingValidateInsertionOfSubitemsForContext:(IDEStructureEditingAssistantContext *)arg1;

@optional
- (DVTFilePath *)structureEditingNaturalFilePathForDropTarget;
@end

