//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDEPlaygroundUpgrader : NSObject
{
}

- (void)_bumpPlaygroundSharedContextVersion:(id)arg1;
- (BOOL)_migratePlaygroundWithContext:(id)arg1 fromVersion1ToVersion2WithError:(id *)arg2;
- (BOOL)_migratePlaygroundWithContext:(id)arg1 fromVersion2ToVersion3WithError:(id *)arg2;
- (BOOL)_migratePlaygroundWithContext:(id)arg1 fromVersion3ToVersion4WithError:(id *)arg2;
- (BOOL)_migratePlaygroundWithContext:(id)arg1 fromVersion4ToVersion5WithError:(id *)arg2;
- (BOOL)_migratePlaygroundWithContext:(id)arg1 fromVersion5ToVersion6WithError:(id *)arg2;
- (BOOL)upgradePlaygroundWithContext:(id)arg1 toVersion:(id)arg2 error:(id *)arg3;
- (BOOL)upgradePlaygroundWithSharedContext:(id)arg1 error:(id *)arg2;

@end

