//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEPlaygroundCommonSharedContext.h>

@class DVTFilePath, IDEPlaygroundSharedContext;

@interface IDEPlaygroundPageSharedContext : IDEPlaygroundCommonSharedContext
{
    IDEPlaygroundSharedContext *_playgroundContext;
}

+ (id)UTI;
+ (Class)contextDeserializerClass;
+ (Class)contextSerializerClass;
+ (id)filePathExtension;
+ (id)keyPathsForValuesAffectingImplicit;
+ (id)keyPathsForValuesAffectingSwiftContentsFilePath;
- (void).cxx_destruct;
- (id)_platformForFrameworkSearchPaths;
- (id)_sdkForAuxiliarySource;
- (id)_targetTripleForAuxiliarySource;
- (void)dealloc;
- (id)description;
- (id)frameworkSearchPaths;
- (id)name;
@property(readonly, nonatomic) __weak IDEPlaygroundSharedContext *playgroundContext; // @synthesize playgroundContext=_playgroundContext;
- (BOOL)registerReferencingContainer:(id)arg1;
- (id)resourcesDirectoryPath;
- (id)sourcesDirectoryPath;
@property(readonly, nonatomic) DVTFilePath *swiftContentsFilePath;
- (BOOL)unregisterReferencingContainer:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) DVTFilePath *timelineFilePath; // @dynamic timelineFilePath;

@end

