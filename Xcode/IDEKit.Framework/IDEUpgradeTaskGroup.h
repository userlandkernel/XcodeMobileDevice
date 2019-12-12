//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSArray, NSImage, NSString;

@interface IDEUpgradeTaskGroup : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSArray *_upgradeTaskObservationTokens;
    BOOL _ignoreSelectionChanges;
    NSString *_name;
    long long _selected;
    NSArray *_upgradeTasks;
}

- (void).cxx_destruct;
- (void)_updateSelected;
- (void)dealloc;
- (id)initWithName:(id)arg1;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSString *navigableItem_name;
@property(nonatomic) long long selected; // @synthesize selected=_selected;
@property(copy, nonatomic) NSArray *upgradeTasks; // @synthesize upgradeTasks=_upgradeTasks;

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

