//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSMapTable, NSOperationQueue, NSString;

@interface IDEPlaygroundAuxiliarySourceCompilationManager : NSObject <DVTInvalidation>
{
    NSMapTable *__contextToSourceMonitorMap;
    NSMapTable *__monitorToCompilerOperationMap;
    NSMapTable *__monitorToModificationObservingTokenMap;
    NSMapTable *__pageContextToCurrentCompilerFutureMap;
    NSOperationQueue *__compilerOperationQueue;
}

+ (void)initialize;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain) NSOperationQueue *_compilerOperationQueue; // @synthesize _compilerOperationQueue=__compilerOperationQueue;
@property(retain) NSMapTable *_contextToSourceMonitorMap; // @synthesize _contextToSourceMonitorMap=__contextToSourceMonitorMap;
- (id)_createCompilerOperationForMonitor:(id)arg1 dependency:(id)arg2;
- (id)_createMonitorForPlaygroundContext:(id)arg1 dependency:(id)arg2;
- (id)_findOrCreateMonitorsForPlaygroundPageContext:(id)arg1;
@property(retain) NSMapTable *_monitorToCompilerOperationMap; // @synthesize _monitorToCompilerOperationMap=__monitorToCompilerOperationMap;
@property(retain) NSMapTable *_monitorToModificationObservingTokenMap; // @synthesize _monitorToModificationObservingTokenMap=__monitorToModificationObservingTokenMap;
@property(retain) NSMapTable *_pageContextToCurrentCompilerFutureMap; // @synthesize _pageContextToCurrentCompilerFutureMap=__pageContextToCurrentCompilerFutureMap;
- (void)_unregisterMonitor:(id)arg1;
- (id)_updatedCompilerOperationForPlaygroundMonitor:(id)arg1 dependency:(id)arg2;
- (id)buildSettingsForSourceFile:(id)arg1;
- (void)compileAuxiliarySourcesForPageContext:(id)arg1;
- (id)frameworkLocationsForCompilerOperations:(id)arg1;
- (id)frameworkLocationsForPageContext:(id)arg1;
- (id)init;
- (void)primitiveInvalidate;
- (void)registerPlaygroundPageContext:(id)arg1;
- (void)unregisterPlaygroundPageContext:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

