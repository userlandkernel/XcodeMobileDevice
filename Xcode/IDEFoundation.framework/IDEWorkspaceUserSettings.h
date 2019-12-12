//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEWorkspaceSettings.h>

@class NSString;

@interface IDEWorkspaceUserSettings : IDEWorkspaceSettings
{
}

+ (BOOL)automaticallyNotifiesObserversForBuildLocationStyle;
+ (BOOL)automaticallyNotifiesObserversForCustomBuildIntermediatesPath;
+ (BOOL)automaticallyNotifiesObserversForCustomBuildLocationType;
+ (BOOL)automaticallyNotifiesObserversForCustomBuildProductsPath;
+ (BOOL)automaticallyNotifiesObserversForDerivedDataCustomLocation;
+ (BOOL)automaticallyNotifiesObserversForDerivedDataLocationStyle;
+ (BOOL)automaticallyNotifiesObserversForHasAskedToTakeAutomaticSnapshotBeforeSignificantChanges;
+ (BOOL)automaticallyNotifiesObserversForIssueFilterStyle;
+ (BOOL)automaticallyNotifiesObserversForLiveSourceIssuesEnabled;
+ (BOOL)automaticallyNotifiesObserversForSharedBuildFolderName;
+ (BOOL)automaticallyNotifiesObserversForSnapshotCustomLocation;
+ (BOOL)automaticallyNotifiesObserversForSnapshotLocationStyle;
+ (BOOL)automaticallyNotifiesObserversForTakeSnapshotsBeforeSignificantChanges;
@property int buildLocationStyle;
@property(retain) NSString *customBuildIntermediatesPath;
@property int customBuildLocationType;
@property(retain) NSString *customBuildProductsPath;
@property(retain) NSString *derivedDataCustomLocation;
@property int derivedDataLocationStyle;
@property BOOL hasAskedToTakeAutomaticSnapshotBeforeSignificantChanges;
@property int issueFilterStyle;
@property BOOL liveSourceIssuesEnabled;
- (void)loadSettings;
- (void)saveSettings;
@property(retain) NSString *sharedBuildFolderName;
@property(retain) NSString *snapshotCustomLocation;
@property int snapshotLocationStyle;
@property BOOL takeSnapshotsBeforeSignificantChanges;
- (id)settingsOwnership;

@end

