//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsCore/PBXBuildPhase.h>

@class NSString;

@interface PBXAppleScriptBuildPhase : PBXBuildPhase
{
    BOOL _isSharedContext;
    NSString *_contextName;
}

+ (id)allowedFileTypes;
+ (id)archivableAttributes;
+ (id)defaultName;
+ (id)identifier;
- (id)contextName;
- (void)dealloc;
- (Class)dependencyGraphSnapshotClass;
- (id)init;
- (id)initWithName:(id)arg1;
- (BOOL)isDefaultContext;
- (BOOL)isSharedContext;
- (void)setContextName:(id)arg1;
- (void)setDefaultAttributesForNewBuildFile:(id)arg1;
- (void)setIsDefaultContext:(BOOL)arg1;
- (void)setIsSharedContext:(BOOL)arg1;

@end

