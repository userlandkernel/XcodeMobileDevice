//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEContainerFileReferenceNavigableItem.h>

#import <IDEKit/IDENavigableItemDebugAreaDelegate-Protocol.h>
#import <IDEKit/IDENavigableItemDebugBarDelegate-Protocol.h>

@class NSString;

@interface IDEPlaygroundNavigableItem : IDEContainerFileReferenceNavigableItem <IDENavigableItemDebugBarDelegate, IDENavigableItemDebugAreaDelegate>
{
}

- (id)_navigableItemForNavigation;
- (id)debugAreaDelegate;
@property(readonly, nonatomic) NSString *debugAreaExtensionID;
@property(readonly, nonatomic) NSString *debugBarContentProviderCategory;
- (id)debugBarDelegate;

@end

