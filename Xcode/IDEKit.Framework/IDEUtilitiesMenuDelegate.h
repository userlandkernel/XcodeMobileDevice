//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEMenuKeyBindingProvider-Protocol.h>

@class NSString;

@interface IDEUtilitiesMenuDelegate : NSObject <IDEMenuKeyBindingProvider>
{
}

+ (void)_addMenuItemsForUtilityArea:(id)arg1 toUtilityMenu:(id)arg2 withKeyBindingSet:(id)arg3;
+ (id)_inspectorCategoryExtensions;
+ (id)_libraryCategoryExtensions;
+ (id)defaultMenuKeyBindingsForGroup:(id)arg1;
+ (void)updateUtilitiesMenu:(id)arg1 withMenuItemsForInspectorArea:(id)arg2 andLibraryArea:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

