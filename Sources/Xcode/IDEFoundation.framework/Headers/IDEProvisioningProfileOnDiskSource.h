//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEProvisioningProfileSource-Protocol.h>

@class DVTStackBacktrace, NSArray, NSMutableSet, NSString;
@protocol IDEProvisioningProfileSourceDelegate, OS_dispatch_queue;

@interface IDEProvisioningProfileOnDiskSource : NSObject <IDEProvisioningProfileSource>
{
    NSObject<OS_dispatch_queue> *_sourceQueue;
    BOOL _cacheWriteScheduledOnSourceQueue;
    id <IDEProvisioningProfileSourceDelegate> _delegate;
    NSArray *_searchPaths;
    NSMutableSet *_profiles;
}

+ (id)defaultOnDiskSource;
+ (id)onDiskSourceForSearchPaths:(id)arg1;
- (void).cxx_destruct;
- (void)_beginObservingSearchPathsForChanges;
- (id)_logAspect;
- (void)_maybeScheduleCacheWrite;
- (void)_reloadProvisioningProfilesInDirectory:(id)arg1;
- (id)allCandidateProvisioningProfileDataInDirectory:(id)arg1;
- (id)allCandidateProvisioningProfilesInDirectory:(id)arg1;
- (id)allProvisioningProfileFilesInDirectory:(id)arg1;
@property(retain, nonatomic) id <IDEProvisioningProfileSourceDelegate> delegate;
- (id)initWithSearchPaths:(id)arg1;
- (void)primitiveInvalidate;
- (id)provisioningProfiles;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
