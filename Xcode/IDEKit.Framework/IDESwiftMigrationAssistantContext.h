//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEMigrationAssistantContext.h>

@class DVTFilePath, NSArray, NSMutableArray, NSURL;

@interface IDESwiftMigrationAssistantContext : IDEMigrationAssistantContext
{
    NSMutableArray *_targets;
    NSMutableArray *_selectedTargets;
    unsigned long long _currentConversionStage;
    long long _numIncompatibilityErrors;
    BOOL _wasContinueBuildingAfterErrors;
    BOOL _shouldRemoveContinueBuildingAfterErrors;
    DVTFilePath *_migrationBuildFolder;
    NSURL *_savedPlaygroundURL;
}

+ (void)initialize;
+ (Class)migrationContextClass;
- (void).cxx_destruct;
- (void)beginPerformingContextTask;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property unsigned long long currentConversionStage; // @synthesize currentConversionStage=_currentConversionStage;
- (void)endPerformingContextTask;
- (id)init;
@property(readonly) DVTFilePath *migrationBuildFolder; // @synthesize migrationBuildFolder=_migrationBuildFolder;
@property long long numberOfIncompatibilityErrors; // @synthesize numberOfIncompatibilityErrors=_numIncompatibilityErrors;
- (void)reopenPlaygroundIfNecessary;
@property(retain) NSURL *savedPlaygroundURL; // @synthesize savedPlaygroundURL=_savedPlaygroundURL;
- (void)setWorkspaceTabController:(id)arg1;
@property(readonly, copy) NSArray *targets; // @synthesize targets=_targets;

// Remaining properties
@property(readonly, copy) NSMutableArray *mutableSelectedTargets; // @dynamic mutableSelectedTargets;
@property(copy) NSArray *selectedTargets; // @dynamic selectedTargets;

@end

