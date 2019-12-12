//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEWorkspace, NSSet, NSString;

@interface IDESchemeOrderedWorkspaceNotificationManager : NSObject <DVTInvalidation>
{
    IDEWorkspace *_workspace;
}

+ (void)initialize;
+ (id)orderedWorkspaceNotificationManagerForWorkspace:(id)arg1;
- (void).cxx_destruct;
- (id)initWithWorkspace:(id)arg1;
- (void)primitiveInvalidate;
@property(readonly) NSSet *referencedContainersNotifyingSchemeBuildableReferences;
@property(readonly) NSSet *referencedContainersNotifyingSchemes;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

