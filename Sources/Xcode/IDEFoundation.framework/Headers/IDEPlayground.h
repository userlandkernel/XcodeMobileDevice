//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEPlaygroundCommon.h>

#import <IDEFoundation/IDECustomDataStoring-Protocol.h>

@class DVTNotificationToken, IDEDirectoryBasedCustomDataStore, IDEPlaygroundSharedContext, NSString;

@interface IDEPlayground : IDEPlaygroundCommon <IDECustomDataStoring>
{
    DVTNotificationToken *_customDataStoreWillCloseNotificationToken;
    IDEPlaygroundSharedContext *_playgroundContext;
    IDEDirectoryBasedCustomDataStore *_customDataStore;
}

+ (id)containerFileDataType;
+ (id)containerTypeDisplayName;
+ (BOOL)isSourcesDirectorySubPath:(id)arg1;
- (void).cxx_destruct;
- (void)_addPlaygroundDirectoriesObservation;
- (void)_customDataStoreContainerClosing:(id)arg1;
- (void)_didChangeContainerFilePath:(id)arg1 inContext:(id)arg2;
- (void)_removePlaygroundDirectoriesObservation;
- (void)_willChangeContainerFilePath:(id)arg1 inContext:(id)arg2;
- (void)addSpecifier:(id)arg1 inWorkspace:(id)arg2 toSCMWithCompletionBlock:(CDUnknownBlockType)arg3;
- (id)computedChildItemSubpathsEditable;
- (id)computedChildItemSubpathsFixed;
- (id)context;
- (id)createRootGroup;
- (id)customDataOwnershipsForGrouping:(id)arg1;
- (id)customDataSpecifiersForGrouping:(id)arg1 ownership:(id)arg2;
@property(retain, nonatomic) IDEDirectoryBasedCustomDataStore *customDataStore; // @synthesize customDataStore=_customDataStore;
- (id)initWithFilePath:(id)arg1 extension:(id)arg2 workspace:(id)arg3 options:(id)arg4 error:(id *)arg5;
- (void)moveCustomDataWithSpecifier:(id)arg1 toSpecifier:(id)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) IDEPlaygroundSharedContext *playgroundContext; // @synthesize playgroundContext=_playgroundContext;
- (void)primitiveInvalidate;
- (id)readCustomDataWithSpecifier:(id)arg1 error:(id *)arg2;
- (void)removeCustomDataWithSpecifier:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)scmStatusForSpecifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (BOOL)supportsCustomDataForOwnership:(id)arg1;
- (void)writeCustomData:(id)arg1 withSpecifier:(id)arg2 forceOverwrite:(BOOL)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

