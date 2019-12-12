//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTDelayedInvocation, DVTFilePath, DVTNotificationToken, DVTObservingToken, DVTStackBacktrace, DVTTimeSlicedMainThreadWorkQueue, IDELogStore, IDETestRunSession, IDEWorkspace, NSMapTable, NSMutableDictionary, NSMutableSet, NSSet, NSString;
@protocol DVTCancellable, IDETestManagerUITestingPermissionSheetDelegate;

@interface IDETestManager : NSObject <DVTInvalidation>
{
    IDEWorkspace *_workspace;
    NSSet *_testableProviders;
    NSSet *_testables;
    NSMutableDictionary *_testablesByFileURL;
    NSMapTable *_testableProvidersToObservingTokens;
    NSMapTable *_testablesToObservingTokens;
    NSMutableSet *_searchedTestables;
    NSMutableSet *_testableObservingTokens;
    NSMapTable *_subtestObservingTokenMapTable;
    DVTNotificationToken *_blueprintsChangedObserver;
    DVTNotificationToken *_buildOperationObserver;
    DVTNotificationToken *_cleanBuildFolderObserver;
    DVTNotificationToken *_testableChangedHackNotification;
    DVTObservingToken *_activeSchemeObserver;
    id <DVTCancellable> _delayedNotifyObserversOfChangedTestablesToken;
    DVTTimeSlicedMainThreadWorkQueue *_changedTestableNotificationQueue;
    BOOL _forcingReloadAll;
    NSMutableDictionary *_dataSources;
    NSMutableDictionary *_testRunGenerationCountsByID;
    DVTDelayedInvocation *_forceReloadAllTestablesInvocation;
    BOOL _loadingComplete;
    IDETestRunSession *_testRunSession;
    NSSet *_generateCoverageReportSessions;
    IDELogStore *_logStore;
    NSSet *_testsLastRun;
    NSSet *_testsLastProfiled;
    NSMutableDictionary *_testableStateByTestableName;
    NSMutableDictionary *_fileChangeBrokersByFileURL;
    unsigned long long _testSessionGenerationCounter;
    DVTFilePath *_actionResultsBundleWithBaselineOverridesFilePath;
    id <IDETestManagerUITestingPermissionSheetDelegate> _UITestingPermissionSheetDelegate;
}

+ (void)initialize;
+ (id)testingTypeIdentifier;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IDETestManagerUITestingPermissionSheetDelegate> UITestingPermissionSheetDelegate; // @synthesize UITestingPermissionSheetDelegate=_UITestingPermissionSheetDelegate;
- (id)_bestTestableForFileURL:(id)arg1;
- (void)_blueprintsDidChange:(id)arg1;
- (void)_buildOperationDidStop:(id)arg1;
- (void)_cancelAndRemoveAllTestObservingTokens;
- (void)_checkLoadingComplete;
- (void)_cleanBuildFolder:(id)arg1;
- (void)_delayedForceReloadAllTestables;
- (void)_diffPrevious:(id)arg1 current:(id)arg2 onlyNew:(id *)arg3 onlyOld:(id *)arg4;
- (void)_forceReloadAllTestables;
- (unsigned long long)_lastRunSessionGenerationCountForTest:(id)arg1;
- (unsigned long long)_lastRunSessionGenerationCountForTestable:(id)arg1;
- (unsigned long long)_latestGenerationForAncestorsOfTest:(id)arg1;
- (void)_loadTestsForTestable:(id)arg1;
- (void)_notifyAllTestablesObservers;
- (void)_notifyObserversOfChangedTestable:(id)arg1;
- (void)_notifyUpdatedTestFilesForTestable:(id)arg1 addedFiles:(id)arg2 removedFiles:(id)arg3;
- (void)_purgeInvalidRuntimeDiscoveredTestsForTest:(id)arg1 withSkippedTests:(id)arg2;
- (void)_purgeInvalidRuntimeDiscoveredTestsForTestable:(id)arg1 withSkippedTests:(id)arg2;
- (void)_registerSubtestsObservance:(id)arg1 forTest:(id)arg2 inTestable:(id)arg3;
- (void)_removeCoverageReportOperation:(id)arg1;
- (void)_removeInvalidTestableStateForInvalidTestables:(id)arg1;
- (BOOL)_shouldPurgeRuntimeDiscoveredTestTestResultForTest:(id)arg1;
- (id)_stateForTestable:(id)arg1;
- (void)_unregisterSubtestsObservanceForTest:(id)arg1 inTestable:(id)arg2;
- (void)_updateAllFileChangeBrokerObservers;
- (void)_updateForCurrentTestableProviders:(id)arg1;
- (void)_updateTestsLastRunOrProfiledForRemovedTests:(id)arg1;
- (void)_updateWithTestableProvidersToRemove:(id)arg1 toAdd:(id)arg2;
- (void)_updateWithTestablesToRemove:(id)arg1 toAdd:(id)arg2;
@property(retain) DVTFilePath *actionResultsBundleWithBaselineOverridesFilePath; // @synthesize actionResultsBundleWithBaselineOverridesFilePath=_actionResultsBundleWithBaselineOverridesFilePath;
- (void)addCoverageReportOperation:(id)arg1;
- (void)addObserver:(id)arg1 ofFile:(id)arg2;
- (void)addRunningTest:(id)arg1;
- (void)asyncApplyBaselineRecord:(id)arg1 forBlueprintProviderRelativePath:(id)arg2 blueprintName:(id)arg3 testBundleRunDestinationRecord:(id)arg4 behavior:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)asyncApplyBaselineRecord:(id)arg1 forTestBundleRunDestinationRecord:(id)arg2 behavior:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
@property(readonly, copy) NSString *description;
- (void)displayWorkspaceSheetForUITestingPermissionWithReply:(CDUnknownBlockType)arg1;
@property(readonly) NSMutableDictionary *fileChangeBrokersByFileURL; // @synthesize fileChangeBrokersByFileURL=_fileChangeBrokersByFileURL;
- (id)fileURLForTestIdentifier:(id)arg1;
@property(copy) NSSet *generateCoverageReportSessions; // @synthesize generateCoverageReportSessions=_generateCoverageReportSessions;
- (id)initWithWorkspace:(id)arg1;
- (BOOL)isTestPendingRun:(id)arg1;
- (BOOL)isTestablePendingRun:(id)arg1;
@property BOOL loadingComplete; // @synthesize loadingComplete=_loadingComplete;
@property(retain) IDELogStore *logStore; // @synthesize logStore=_logStore;
- (id)performanceMetricsForTest:(id)arg1;
- (void)primitiveInvalidate;
- (void)processNewTestResult:(id)arg1 forTest:(id)arg2;
- (void)removeObserver:(id)arg1 ofFile:(id)arg2;
- (void)removeRunningTest:(id)arg1;
- (void)setLastRunSessionGenerationCount:(unsigned long long)arg1 forTest:(id)arg2;
@property(retain) IDETestRunSession *testRunSession; // @synthesize testRunSession=_testRunSession;
@property unsigned long long testSessionGenerationCounter; // @synthesize testSessionGenerationCounter=_testSessionGenerationCounter;
- (void)setTestableDataSource:(id)arg1 forTestingSystemWithIdentifier:(id)arg2;
- (void)setTestablesObserved:(id)arg1 byObserver:(id)arg2;
@property(retain) NSSet *testsLastProfiled; // @synthesize testsLastProfiled=_testsLastProfiled;
@property(retain) NSSet *testsLastRun; // @synthesize testsLastRun=_testsLastRun;
- (unsigned long long)stateOfTest:(id)arg1;
- (unsigned long long)stateOfTestable:(id)arg1;
- (id)testForIdentifier:(id)arg1;
- (id)testOperationForTestRunSpecifications:(id)arg1 executionEnvironment:(id)arg2 withBuildOperation:(id)arg3 runDestination:(id)arg4 actionRecord:(id)arg5 schemeIdentifier:(id)arg6 outSchemeActionResultOperation:(id *)arg7 launchParametersBlock:(CDUnknownBlockType)arg8 actionCallbackBlock:(CDUnknownBlockType)arg9 error:(id *)arg10;
- (id)testableDataSourceForTestingSystemWithIdentifier:(id)arg1;
@property(readonly) NSSet *testableProviders;
@property(readonly) NSMutableDictionary *testableStateByTestableName; // @synthesize testableStateByTestableName=_testableStateByTestableName;
@property(readonly) NSSet *testables;
- (id)testablesForFileURL:(id)arg1;
- (id)testsForFileURL:(id)arg1;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

