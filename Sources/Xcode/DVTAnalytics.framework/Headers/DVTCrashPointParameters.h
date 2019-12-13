//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet;

@interface DVTCrashPointParameters : NSObject
{
    NSArray *_availableFilters;
    NSSet *_osVersions;
    NSSet *_deviceTypes;
}

- (void).cxx_destruct;
@property(readonly) NSArray *availableFilters; // @synthesize availableFilters=_availableFilters;
- (id)description;
@property(readonly) NSSet *deviceTypes; // @synthesize deviceTypes=_deviceTypes;
- (id)filteredParametersUsingFilter:(id)arg1;
- (unsigned long long)hash;
- (id)initWithOSVersions:(id)arg1 deviceTypes:(id)arg2;
- (BOOL)isEqual:(id)arg1;
@property(readonly) NSSet *osVersions; // @synthesize osVersions=_osVersions;

@end
