//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTSourceControlAccountManager-Protocol.h>

@class DVTDispatchLock, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSOperationQueue, NSOrderedSet, NSString;
@protocol OS_dispatch_queue;

@interface IDESourceControlManager : NSObject <DVTSourceControlAccountManager>
{
    NSMutableOrderedSet *_accounts;
    NSMutableOrderedSet *_recentWorkspaceBlueprints;
    NSMutableOrderedSet *_knownRepositories;
    NSMutableDictionary *_knownHosts;
    NSMutableArray *_registeredWorkspaces;
    NSObject<OS_dispatch_queue> *_registeredWorkspacesDispatchQueue;
    NSObject<OS_dispatch_queue> *_recentWorkspaceBlueprintDispatchQueue;
    NSObject<OS_dispatch_queue> *_accountsRepositoriesQueue;
    NSMutableArray *_legacyRepositories;
    NSMutableArray *_legacyWorkingTrees;
    NSMutableArray *_extensions;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_holdingQueue;
    DVTDispatchLock *_holdingQueueLock;
    long long _maxConcurrentOperationCount;
    long long _automaticallyScanWorkspaces;
    long long _authenticationRetryAttempts;
    BOOL _enableSourceControl;
    BOOL _localStatusCheckingEnabled;
    BOOL _remoteStatusCheckingEnabled;
    BOOL _automaticallyAddNewFiles;
    BOOL _waitingForAuthentication;
    BOOL _showMergeCommits;
    BOOL _shouldLoadAccounts;
    NSObject<OS_dispatch_queue> *_legacyWorkingTreesDispatchQueue;
    double _minimumLocalStatusRequestDelay;
    NSString *_pathOfWorkspaceJustCheckedOut;
}

+ (id)keyPathsForValuesAffectingRepositories;
+ (id)sharedSourceControlManager;
+ (id)sourceControlAuthenticationLogAspect;
+ (id)sourceControlFileScanningLogAspect;
+ (id)sourceControlLogAspect;
+ (id)sourceControlProfilingLogAspect;
+ (id)sourceControlReachabilityLogAspect;
- (void).cxx_destruct;
- (void)_addAccount:(id)arg1;
- (id)_blacklistedDirectories;
- (id)_directoryIdentifiers;
- (void)_finishLogForRequest:(id)arg1 operation:(id)arg2 withResult:(int)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)_reportCommitNavigatorOperation:(unsigned long long)arg1;
- (void)_reportCommitOperation:(unsigned long long)arg1;
- (void)_reportConfigurationOperation:(unsigned long long)arg1;
- (void)_reportEditorOperation:(unsigned long long)arg1;
- (void)_reportMenuOperation:(unsigned long long)arg1;
- (void)_startLogForRequest:(id)arg1 operation:(id)arg2;
- (id)_svnOriginURLForFilePath:(id)arg1;
- (id)_upgradableSVNWorkingTreeRootForFilePath:(id)arg1;
- (void)accountChanged:(id)arg1 previousUsername:(id)arg2;
@property(readonly) NSOrderedSet *accounts; // @synthesize accounts=_accounts;
- (void)addAccount:(id)arg1;
- (void)addKnownHost:(id)arg1 fingerprint:(id)arg2;
- (void)addLegacyRepository:(id)arg1;
- (void)addLegacyWorkingTree:(id)arg1;
- (void)addRecentWorkspaceBlueprint:(id)arg1;
- (id)arrayOfAccountsDictionaries;
- (id)arrayOfRecentBlueprintDictionaries;
- (void)associateExtension:(id)arg1 withPath:(id)arg2;
@property BOOL automaticallyAddNewFiles;
@property long long automaticallyScanWorkspaces;
- (void)cancelRequest:(id)arg1;
- (id)commonExtensionForPaths:(id)arg1;
- (id)defaultExtension;
- (BOOL)deletePasswordForAccount:(id)arg1 fromKeychain:(void *)arg2;
@property BOOL enableSourceControl;
- (id)existingAccountForRepository:(id)arg1 authenticationStrategy:(id)arg2 createIfNeeded:(BOOL)arg3;
- (id)existingAccountLikeAccount:(id)arg1 addingIfNew:(BOOL)arg2;
- (id)existingFingerprintForHost:(id)arg1;
- (id)existingFingerprintForRepository:(id)arg1;
- (id)extensionForRequest:(id)arg1;
- (id)extensionForURL:(id)arg1;
- (id)extensionMatchingDirectoryIdentifier:(id)arg1;
- (id)extensionMatchingIdentifier:(id)arg1;
- (id)extensionToUseForFilePath:(id)arg1;
@property(readonly) NSArray *extensions; // @synthesize extensions=_extensions;
- (id)extensionsAssociatedWithFilePath:(id)arg1;
- (id)extensionsAtFilePath:(id)arg1;
- (id)extensionsMatchingProtocol:(id)arg1;
- (void)handleError:(id)arg1 forRequest:(id)arg2 operation:(id)arg3 waitUntilFinished:(BOOL)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;
- (id)initWithSavedAccounts:(BOOL)arg1;
- (void)invalidateExtensionsForFilePath:(id)arg1;
- (void)invalidateExtensionsRecursivelyForFilePath:(id)arg1;
@property(readonly) NSDictionary *knownHostFingerprints; // @synthesize knownHostFingerprints=_knownHosts;
@property(readonly) NSOrderedSet *knownRepositories; // @synthesize knownRepositories=_knownRepositories;
- (id)knownRepositoryForURL:(id)arg1 sourceControlSystem:(id)arg2;
@property(readonly) NSArray *legacyRepositories; // @synthesize legacyRepositories=_legacyRepositories;
@property(readonly) NSArray *legacyWorkingTrees; // @synthesize legacyWorkingTrees=_legacyWorkingTrees;
- (void)loadAccounts;
- (id)loadAccountsFromArray:(id)arg1 error:(id *)arg2;
- (id)loadAccountsFromRepositoriesArray:(id)arg1 error:(id *)arg2;
- (void)loadExtensions;
- (void)loadKnownHostsFromDictionary:(id)arg1;
- (void)loadPlugIns;
- (void)loadWorkspacesFromDefaults;
@property BOOL localStatusCheckingEnabled; // @synthesize localStatusCheckingEnabled=_localStatusCheckingEnabled;
@property long long maxConcurrentOperationCount; // @synthesize maxConcurrentOperationCount=_maxConcurrentOperationCount;
@property(readonly) double minimumLocalStatusRequestDelay; // @synthesize minimumLocalStatusRequestDelay=_minimumLocalStatusRequestDelay;
- (id)passwordFromKeychain:(void *)arg1 forDomain:(id)arg2 user:(id)arg3 fullURL:(id)arg4 error:(id *)arg5;
@property(retain) NSString *pathOfWorkspaceJustCheckedOut; // @synthesize pathOfWorkspaceJustCheckedOut=_pathOfWorkspaceJustCheckedOut;
- (void)performRequest:(id)arg1 waitUntilFinished:(BOOL)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)performRequest:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
@property(retain) NSOrderedSet *recentWorkspaceBlueprints;
- (void)registerWorkspace:(id)arg1;
@property BOOL remoteStatusCheckingEnabled; // @synthesize remoteStatusCheckingEnabled=_remoteStatusCheckingEnabled;
- (void)removeAccount:(id)arg1;
- (void)removeAccount:(id)arg1 deletingFromKeychain:(BOOL)arg2;
- (void)removeAssociatedExtension:(id)arg1 withPath:(id)arg2;
- (void)reportSourceControlOperation:(unsigned long long)arg1;
- (id)repositoryForURL:(id)arg1 sourceControlExtension:(id)arg2;
- (id)repositoryWithRoot:(id)arg1 sourceControlExtension:(id)arg2;
- (BOOL)saveAccountPassword:(id)arg1 previousUsername:(id)arg2 toKeychain:(struct OpaqueSecKeychainRef *)arg3 error:(id *)arg4;
- (void)scanForExtensionsInFilePath:(id)arg1;
@property BOOL showMergeCommits;
@property BOOL waitingForAuthentication; // @synthesize waitingForAuthentication=_waitingForAuthentication;
@property(readonly) BOOL shouldLoadAccounts; // @synthesize shouldLoadAccounts=_shouldLoadAccounts;
- (id)sshKeyPasswordFromKeychain:(void *)arg1 forKeyURL:(id)arg2 error:(id *)arg3;
- (void)unregisterWorkspace:(id)arg1;
- (void)updateUserDefaults;
- (BOOL)validateRequest:(id)arg1 error:(id *)arg2;
- (id)workingCopyForFilePath:(id)arg1;
- (id)workingTreeForFilePath:(id)arg1;
- (void)workingTreeForFilePath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)workingTreeRootForFilePath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)workingTreeRootForFilePath:(id)arg1 sourceControlExtension:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

