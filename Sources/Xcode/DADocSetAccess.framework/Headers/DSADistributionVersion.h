//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@interface DSADistributionVersion : NSManagedObject
{
    CDStruct_6df46f26 _versionValue;
}

+ (id)_knownArchitectureFlags;
+ (id)architectureFlagsForArchitectureNames:(id)arg1;
+ (id)architectureNamesForArchitectureFlags:(id)arg1;
+ (id)assignVersions:(id)arg1 forArchitectures:(id)arg2 maximumVersion:(CDStruct_6df46f26)arg3 inclusive:(BOOL)arg4;
+ (id)knownArchitectureNames;
- (id)architectureFlags;
- (long long)compare:(id)arg1;
- (id)jointVersionKey;
- (void)setJointVersionKey:(id)arg1;
- (CDStruct_6df46f26)versionValue;

@end
