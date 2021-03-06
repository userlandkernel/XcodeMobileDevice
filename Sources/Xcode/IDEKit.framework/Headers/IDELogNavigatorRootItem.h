//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, IDELogManager, IDELogNavigatorItem, IDENavigableItemCoordinator, IDEWorkspace, NSArray, NSImage, NSMutableArray, NSString;

@interface IDELogNavigatorRootItem : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    IDEWorkspace *_workspace;
    BOOL _groupByTime;
    NSString *_identifier;
    BOOL _filterBotsToWorkspace;
    IDELogManager *_localGroup;
    NSArray *_logGroups;
    NSArray *_observationTokens;
    NSMutableArray *_localCachedGroups;
    IDELogNavigatorItem *_workspaceItem;
    IDENavigableItemCoordinator *_navigableItemCoordinator;
}

+ (id)logRootItemForWorkspace:(id)arg1;
- (void).cxx_destruct;
- (id)_getDateForObject:(id)arg1;
- (id)_groupByGroupArray;
- (id)_groupByTimeArray;
- (void)_highlightNewlyCreatedBotInService:(id)arg1;
- (void)dealloc;
@property(nonatomic) BOOL filterBotsToWorkspace; // @synthesize filterBotsToWorkspace=_filterBotsToWorkspace;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithLogManager:(id)arg1;
- (id)initWithLogManager:(id)arg1 groupedByTime:(BOOL)arg2;
@property(retain, nonatomic) NSMutableArray *localCachedGroups; // @synthesize localCachedGroups=_localCachedGroups;
@property(retain, nonatomic) IDELogManager *localGroup; // @synthesize localGroup=_localGroup;
@property(copy, nonatomic) NSArray *logGroups; // @synthesize logGroups=_logGroups;
@property(retain, nonatomic) IDENavigableItemCoordinator *navigableItemCoordinator; // @synthesize navigableItemCoordinator=_navigableItemCoordinator;
@property(readonly) NSString *navigableItem_name;
@property(retain, nonatomic) NSArray *observationTokens; // @synthesize observationTokens=_observationTokens;
@property(retain, nonatomic) IDELogNavigatorItem *workspaceItem; // @synthesize workspaceItem=_workspaceItem;
- (void)updateLogGroups;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *navigableItem_accessibleImageDescription;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly) BOOL navigableItem_referencedContentExists;
@property(readonly) NSString *navigableItem_subtitle;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

