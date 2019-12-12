//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, IDEWorkspace, NSArray, NSImage, NSOperationQueue, NSString;

@interface IDESymbolNavigatorRootGroup : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSArray *_groups;
    IDEWorkspace *_workspace;
    unsigned long long _generation;
    NSOperationQueue *_queue;
}

- (void).cxx_destruct;
- (void)cancelOperations;
- (void)childrenWithNavigator:(id)arg1 identifiersToSelect:(id)arg2 identifiersToExpand:(id)arg3;
- (void)fetchSymbols:(id)arg1 generation:(unsigned long long)arg2 lastOperation:(id)arg3;
- (id)groups;
- (id)initWithWorkspace:(id)arg1;
@property(readonly) NSString *navigableItem_name;
- (id)navigatorSymbolForIndexSymbol:(id)arg1 withNavigator:(id)arg2;
@property(readonly) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void)setSymbolNavigator:(id)arg1 identifiersToSelect:(id)arg2 identifiersToExpand:(id)arg3;

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

