//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDESourceKitWorkspaceDelegate-Protocol.h>

@class DVTDispatchLock, DVTFilePath, DVTNotificationToken, DVTObservingToken, DVTStackBacktrace, DVTTimeSlicedMainThreadWorkQueue, IDEIndexingPrebuildController, IDESourceKitConnection, IDEWorkspace, NSMutableDictionary, NSString;

@interface IDESourceKitWorkspace : NSObject <IDESourceKitWorkspaceDelegate, DVTInvalidation>
{
    IDESourceKitConnection *_conn;
    long long _indexerToken;
    IDEWorkspace *_workspace;
    DVTFilePath *_databaseFolder;
    IDEIndexingPrebuildController *_prebuildController;
    DVTDispatchLock *_stateLock;
    NSMutableDictionary *_identifiersToIndexables;
    NSMutableDictionary *_indexablesToProductHeaders;
    DVTObservingToken *_activeRunContextObservingToken;
    DVTObservingToken *_activeRunDestinationObservingToken;
    DVTNotificationToken *_indexableFileWasAddedNotificationObservingToken;
    DVTNotificationToken *_indexableFileWillBeRemovedNotificationObservingToken;
    DVTNotificationToken *_indexableDidRenameFileNotificationObservingToken;
    DVTNotificationToken *_buildablesDidChangeNotificationObservingToken;
    DVTNotificationToken *_buildSettingsDidChangeNotificationObservingToken;
    DVTNotificationToken *_buildOperationWillStartNotificationObservingToken;
    DVTNotificationToken *_buildOperationDidStopNotificationObservingToken;
    DVTNotificationToken *_prebuildNotificationToken;
    DVTNotificationToken *_connectionInterruptedNotificationToken;
    DVTNotificationToken *_connectionRestoredNotificationToken;
    // Error parsing type: Ac, name: _connectionWasInterrupted
    DVTTimeSlicedMainThreadWorkQueue *_orderedMainThreadQueue;
    long long _purgeCount;
}

+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (void)initialize;
+ (BOOL)isEnabled;
+ (id)logAspect;
+ (void)setIsEnabled:(BOOL)arg1;
+ (BOOL)supportsInvalidationPrevention;
- (void).cxx_destruct;
- (id)UIDSet;
- (id)_adjustMainFilesForFileDict:(id)arg1;
- (void)_buildOperationDidStop:(id)arg1;
- (void)_buildOperationWillStart:(id)arg1;
- (void)_buildSettingsDidChange:(id)arg1;
- (void)_connectionDidCrash;
- (void)_connectionDidRestore;
- (BOOL)_errorLanguages:(id *)arg1 forFilePath:(id)arg2 indexableObjects:(id)arg3;
- (id)_localizedDescriptionForObjCCompilationUnit:(id)arg1 errorLanguages:(id)arg2;
- (id)_localizedPhraseForDependentObjCCompilationUnit:(id)arg1 errorLanguages:(id)arg2 sharedLanguageIdentifier:(id)arg3 sharedIndexableObject:(id)arg4;
- (void)_respondToFileChangeNotification:(id)arg1;
- (void)_setupObservers;
- (BOOL)_shouldTriggerPrebuildOnSaveForFile:(id)arg1;
- (id)allAutoImportItemsMatchingKind:(id)arg1;
- (id)allAutoImportItemsMatchingKind:(id)arg1 symbolLanguage:(id)arg2;
- (id)allClassesMatchingName:(id)arg1;
- (id)allClassesMatchingName:(id)arg1 error:(id *)arg2;
- (void)allClassesMatchingName:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)allClassesWithMembers:(id)arg1;
- (id)allMethodsMatchingMethod:(id)arg1 forReceiver:(id)arg2;
- (id)allOccurrencesOfMembers:(id)arg1 forClass:(id)arg2;
- (id)allParentsOfSymbols:(id)arg1 cancelWhen:(CDUnknownBlockType)arg2;
- (id)allParentsOfSymbols:(id)arg1 error:(id *)arg2;
- (void)allParentsOfSymbols:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)allProtocolsMatchingName:(id)arg1;
- (id)allSubClassesForClasses:(id)arg1;
- (id)allSymbolsMatchingKind:(id)arg1;
- (void)allSymbolsMatchingKind:(id)arg1 queue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)allSymbolsMatchingKind:(id)arg1 workspaceOnly:(BOOL)arg2;
- (id)allSymbolsMatchingKind:(id)arg1 workspaceOnly:(BOOL)arg2 cancelWhen:(CDUnknownBlockType)arg3;
- (id)allSymbolsMatchingKind:(id)arg1 workspaceOnly:(BOOL)arg2 topLevelOnly:(BOOL)arg3 error:(id *)arg4;
- (void)allSymbolsMatchingKind:(id)arg1 workspaceOnly:(BOOL)arg2 topLevelOnly:(BOOL)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)allSymbolsMatchingName:(id)arg1 kind:(id)arg2;
- (id)allSymbolsMatchingName:(id)arg1 symbolKind:(id)arg2 error:(id *)arg3;
- (void)allSymbolsMatchingName:(id)arg1 symbolKind:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)allSymbolsMatchingNames:(id)arg1 kind:(id)arg2;
- (id)anyBuildSettingsForFile:(id)arg1 error:(id *)arg2;
- (void)anyBuildSettingsForFile:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)buildOperationDidStop:(id)arg1 error:(id *)arg2;
- (void)buildOperationDidStop:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)buildOperationWillStart:(id)arg1 error:(id *)arg2;
- (void)buildOperationWillStart:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)buildSettingsChanged:(id)arg1 error:(id *)arg2;
- (void)buildSettingsChanged:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)callersForSymbol:(id)arg1;
- (id)callersForSymbol:(id)arg1 error:(id *)arg2;
- (void)callersForSymbol:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)classesWithMembers:(id)arg1;
- (id)classesWithReferencesToSymbols:(id)arg1;
- (BOOL)closeIndex:(id *)arg1;
- (void)closeIndex:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)codeComplete:(id)arg1 fileContent:(id)arg2 error:(id *)arg3;
- (void)codeComplete:(id)arg1 fileContent:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)codeCompletionsAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 completionContext:(id *)arg3;
- (id)codeDiagnosticsAtDocument:(id)arg1 fileContent:(id)arg2 error:(id *)arg3;
- (void)codeDiagnosticsAtDocument:(id)arg1 fileContent:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)codeDiagnosticsAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (id)collectTestMethodsPerTestTargets;
- (id)collectionElementTypeSymbolForSymbol:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (BOOL)connectionWasInterrupted;
- (unsigned long long)countOfSymbolsMatchingKind:(id)arg1 workspaceOnly:(BOOL)arg2;
- (id)countOfSymbolsMatchingKind:(id)arg1 workspaceOnly:(BOOL)arg2 error:(id *)arg3;
- (void)countOfSymbolsMatchingKind:(id)arg1 workspaceOnly:(BOOL)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)doWhenFilesReady:(CDUnknownBlockType)arg1;
- (void)editorWillSaveFile:(id)arg1;
- (BOOL)editorWillSaveFile:(id)arg1 error:(id *)arg2;
- (void)editorWillSaveFile:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)effectivePathForHeader:(id)arg1;
- (void)expediteIndexing;
- (id)filesContaining:(id)arg1 anchorStart:(BOOL)arg2 anchorEnd:(BOOL)arg3 subsequence:(BOOL)arg4 ignoreCase:(BOOL)arg5 cancelWhen:(CDUnknownBlockType)arg6;
- (id)filesContaining:(id)arg1 isAnchorStart:(BOOL)arg2 isAnchorEnd:(BOOL)arg3 isSubsequence:(BOOL)arg4 isIgnoreCase:(BOOL)arg5 error:(id *)arg6;
- (void)filesContaining:(id)arg1 isAnchorStart:(BOOL)arg2 isAnchorEnd:(BOOL)arg3 isSubsequence:(BOOL)arg4 isIgnoreCase:(BOOL)arg5 queue:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (id)filesIncludedByFile:(id)arg1;
- (id)filesIncludedByFile:(id)arg1 error:(id *)arg2;
- (void)filesIncludedByFile:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)filesIncludingFile:(id)arg1;
- (id)filesIncludingFile:(id)arg1 error:(id *)arg2;
- (void)filesIncludingFile:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)filesWithSymbolOccurrencesMatchingName:(id)arg1 kind:(id)arg2;
- (void)gatherProductHeadersForIndexable:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)geniusCallersCalleesAtDocument:(id)arg1 fileContent:(id)arg2 error:(id *)arg3;
- (void)geniusCallersCalleesAtDocument:(id)arg1 fileContent:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)geniusCallersCalleesAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (id)geniusReferencingTestClasses:(id)arg1 error:(id *)arg2;
- (void)geniusReferencingTestClasses:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)geniusReferencingTestClassesForSymbol:(id)arg1;
- (id)headerMapFilePath;
- (id)impliedHeadersForModuleImportLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (id)importedFileAtDocumentLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (id)importedFilesAtDocument:(id)arg1 fileContent:(id)arg2 error:(id *)arg3;
- (void)importedFilesAtDocument:(id)arg1 fileContent:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)importedFilesAtDocument:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (id)indexHeadersForIndexable:(id)arg1;
- (id)indexState;
- (id)indexableForIdentifier:(id)arg1;
- (long long)indexerToken;
- (id)init;
- (id)initWithWorkspace:(id)arg1 error:(id *)arg2;
- (id)internalConnection;
- (BOOL)isCurrentForWorkspace:(id)arg1;
- (BOOL)isFileObjCCompilationUnitOrHeader:(id)arg1 error:(id *)arg2;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isPreferredTarget:(id)arg1;
@property(readonly, nonatomic) BOOL isQuiescent;
- (id)isQuiescent:(id *)arg1;
- (void)isQuiescent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)jumpToDefinitionForName:(id)arg1 inContext:(id)arg2 withCurrentFileContentDictionary:(id)arg3 isInComment:(BOOL)arg4 isInFunctionOrMethodBody:(BOOL)arg5 looksLikeASetter:(BOOL)arg6 onlyCurrentDeclarator:(BOOL)arg7 includeCurrentLoc:(BOOL)arg8;
- (id)jumpToExpressionDefinition:(id)arg1 docLocation:(id)arg2 fileContent:(id)arg3 isInComment:(BOOL)arg4 isInFuncOrMethodBody:(BOOL)arg5 looksLikeASetter:(BOOL)arg6 onlyCurrentDeclarator:(BOOL)arg7 includeCurrentLoc:(BOOL)arg8 error:(id *)arg9;
- (void)jumpToExpressionDefinition:(id)arg1 docLocation:(id)arg2 fileContent:(id)arg3 isInComment:(BOOL)arg4 isInFuncOrMethodBody:(BOOL)arg5 looksLikeASetter:(BOOL)arg6 onlyCurrentDeclarator:(BOOL)arg7 includeCurrentLoc:(BOOL)arg8 queue:(id)arg9 completion:(CDUnknownBlockType)arg10;
- (id)jumpToImportedFile:(id)arg1 fileContent:(id)arg2 error:(id *)arg3;
- (void)jumpToImportedFile:(id)arg1 fileContent:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)jumpToModuleImportHeaders:(id)arg1 fileContent:(id)arg2 error:(id *)arg3;
- (void)jumpToModuleImportHeaders:(id)arg1 fileContent:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)mainFileForSelectionFilePath:(id)arg1 buildSettings:(id *)arg2;
- (id)mainFilesForFile:(id)arg1;
- (id)mainFilesForFile:(id)arg1 error:(id *)arg2;
- (void)mainFilesForFile:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)mainFilesForFile:(id)arg1 queue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)makeIndexable:(id)arg1;
- (id)membersMatchingKinds:(id)arg1 forInterfaces:(id)arg2;
- (id)membersMatchingKinds:(id)arg1 symbols:(id)arg2 error:(id *)arg3;
- (void)membersMatchingKinds:(id)arg1 symbols:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)membersMatchingName:(id)arg1 kinds:(id)arg2 forInterfaces:(id)arg3;
- (id)messageReceiverInContext:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (BOOL)notifyIndexableDidAddFile:(id)arg1 filePath:(id)arg2 error:(id *)arg3;
- (void)notifyIndexableDidAddFile:(id)arg1 filePath:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)notifyIndexableDidRenameFile:(id)arg1 prevFilePath:(id)arg2 filePath:(id)arg3 error:(id *)arg4;
- (void)notifyIndexableDidRenameFile:(id)arg1 prevFilePath:(id)arg2 filePath:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)notifyIndexableWillRemoveFile:(id)arg1 filePath:(id)arg2 error:(id *)arg3;
- (void)notifyIndexableWillRemoveFile:(id)arg1 filePath:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)objCOrCCompilationUnitIndexablesForMainFile:(id)arg1 indexableObjects:(id)arg2;
- (void)onBeginTextIndexing;
- (void)onCreateWorkspaceArenaFolderWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)onDidChange;
- (void)onDidChangeState;
- (void)onDidIndexWorkspace;
- (void)onDidResumeIndexingWorkspace;
- (void)onDidSuspendIndexingWorkspace;
- (void)onGatherProductHeadersWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)onIndexDidFastScan;
- (void)onIndexDidPopulateDatabase;
- (void)onIndexIsFastScanning:(id)arg1;
- (void)onIndexIsPopulatingDatabase:(id)arg1;
- (void)onIndexWillFastScan;
- (void)onIndexWillPopulateDatabase;
- (void)onInitiatePrebuild;
- (void)onIsIndexingWorkspace:(id)arg1;
- (void)onSettingsForIndexableWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)onWillIndexWorkspace:(id)arg1;
- (void)onWriteHeaderMapWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)overriddenSymbolsForCallable:(id)arg1;
- (id)parsedCodeCommentAtDocument:(id)arg1 fileContent:(id)arg2 error:(id *)arg3;
- (void)parsedCodeCommentAtDocument:(id)arg1 fileContent:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)parsedCodeCommentAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (id)parsedCodeCommentAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 cursorKindOut:(long long *)arg3;
- (id)parsedCodeCommentAtLocation:(id)arg1 withCurrentFileContentDictionary:(id)arg2 symbolKindOut:(id *)arg3;
- (void)postNotificationName:(id)arg1;
- (void)postNotificationName:(id)arg1 userInfo:(id)arg2;
- (BOOL)prebuildCompleted:(id *)arg1;
- (void)prebuildCompleted:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)primitiveInvalidate;
- (id)propertyForCallable:(id)arg1;
- (long long)purgeCount;
- (void)purgeFileCaches;
- (id)referencesToSymbol:(id)arg1 inContext:(id)arg2 withCurrentFileContentDictionary:(id)arg3;
- (id)referencesToSymbolAtDocument:(id)arg1 name:(id)arg2 fileContent:(id)arg3 error:(id *)arg4;
- (void)referencesToSymbolAtDocument:(id)arg1 name:(id)arg2 fileContent:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)referencesToSymbolMatchingName:(id)arg1 inContext:(id)arg2 withCurrentFileContentDictionary:(id)arg3;
- (void)registerFile:(id)arg1;
- (BOOL)registerFile:(id)arg1 error:(id *)arg2;
- (void)registerFile:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)registerIndexable:(id)arg1 error:(id *)arg2;
- (void)registerIndexable:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerObject:(id)arg1;
- (id)registeredIndexables;
- (void)resumeIndexing;
- (id)sdkForFile:(id)arg1;
- (void)sdkForFile:(id)arg1 queue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)setIndexState:(id)arg1;
- (void)setThrottleFactor:(double)arg1;
- (BOOL)setThrottleFactor:(double)arg1 error:(id *)arg2;
- (void)setThrottleFactor:(double)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) BOOL shouldAllowRefactoring;
- (void)suspendIndexing;
- (id)symbolAllOccurrencesOfMembers:(id)arg1 members:(id)arg2 error:(id *)arg3;
- (void)symbolAllOccurrencesOfMembers:(id)arg1 members:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)symbolAllProtocols:(id)arg1 error:(id *)arg2;
- (void)symbolAllProtocols:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)symbolAllProtocolsForClass:(id)arg1;
- (id)symbolAllSubclasses:(id)arg1 error:(id *)arg2;
- (void)symbolAllSubclasses:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)symbolAllSubclassesForClass:(id)arg1;
- (id)symbolAllSuperclasses:(id)arg1 error:(id *)arg2;
- (void)symbolAllSuperclasses:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)symbolAllSuperclassesForClass:(id)arg1;
- (id)symbolCategories:(id)arg1 error:(id *)arg2;
- (void)symbolCategories:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)symbolCategoriesForClass:(id)arg1;
- (id)symbolContainer:(id)arg1;
- (id)symbolContainer:(id)arg1 error:(id *)arg2;
- (void)symbolContainer:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)symbolContainers:(id)arg1;
- (id)symbolContainers:(id)arg1 error:(id *)arg2;
- (void)symbolContainers:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)symbolDeclarations:(id)arg1;
- (id)symbolDeclarations:(id)arg1 error:(id *)arg2;
- (void)symbolDeclarations:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)symbolDefinitions:(id)arg1;
- (id)symbolDefinitions:(id)arg1 error:(id *)arg2;
- (void)symbolDefinitions:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)symbolIBRelationClass:(id)arg1;
- (id)symbolIBRelationClass:(id)arg1 error:(id *)arg2;
- (void)symbolIBRelationClass:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)symbolImplementingClassesForProtocol:(id)arg1;
- (id)symbolImplementingClassesForProtocol:(id)arg1 error:(id *)arg2;
- (void)symbolImplementingClassesForProtocol:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)symbolInterfaces:(id)arg1 error:(id *)arg2;
- (void)symbolInterfaces:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)symbolInterfacesForClass:(id)arg1;
- (id)symbolMembersMatchingKind:(id)arg1 forSymbol:(id)arg2;
- (id)symbolMembersMatchingKind:(id)arg1 symbol:(id)arg2 error:(id *)arg3;
- (void)symbolMembersMatchingKind:(id)arg1 symbol:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)symbolModelOccurrence:(id)arg1;
- (id)symbolModelOccurrence:(id)arg1 error:(id *)arg2;
- (void)symbolModelOccurrence:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)symbolOccurrences:(id)arg1;
- (id)symbolOccurrences:(id)arg1 error:(id *)arg2;
- (void)symbolOccurrences:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)symbolOccurrencesAtDocument:(id)arg1 fileContent:(id)arg2 error:(id *)arg3;
- (void)symbolOccurrencesAtDocument:(id)arg1 fileContent:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)symbolOverriddenSymbols:(id)arg1 error:(id *)arg2;
- (void)symbolOverriddenSymbols:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)symbolProperty:(id)arg1 error:(id *)arg2;
- (void)symbolProperty:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)symbolProtocols:(id)arg1 error:(id *)arg2;
- (void)symbolProtocols:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)symbolProtocolsForClass:(id)arg1;
- (id)symbolReferences:(id)arg1;
- (id)symbolReferences:(id)arg1 error:(id *)arg2;
- (void)symbolReferences:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)symbolReferencingFiles:(id)arg1;
- (id)symbolReferencingFiles:(id)arg1 error:(id *)arg2;
- (void)symbolReferencingFiles:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)symbolRelatedClass:(id)arg1;
- (id)symbolRelatedClass:(id)arg1 error:(id *)arg2;
- (void)symbolRelatedClass:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)symbolSubclasses:(id)arg1 error:(id *)arg2;
- (void)symbolSubclasses:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)symbolSubclassesForClass:(id)arg1;
- (id)symbolSuperclasses:(id)arg1 error:(id *)arg2;
- (void)symbolSuperclasses:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)symbolSuperclassesForClass:(id)arg1;
- (id)symbolsContaining:(id)arg1 anchorStart:(BOOL)arg2 anchorEnd:(BOOL)arg3 subsequence:(BOOL)arg4 ignoreCase:(BOOL)arg5;
- (id)symbolsContaining:(id)arg1 anchorStart:(BOOL)arg2 anchorEnd:(BOOL)arg3 subsequence:(BOOL)arg4 ignoreCase:(BOOL)arg5 cancelWhen:(CDUnknownBlockType)arg6;
- (id)symbolsContaining:(id)arg1 isAnchorStart:(BOOL)arg2 isAnchorEnd:(BOOL)arg3 isSubsequence:(BOOL)arg4 isIgnoreCase:(BOOL)arg5 error:(id *)arg6;
- (void)symbolsContaining:(id)arg1 isAnchorStart:(BOOL)arg2 isAnchorEnd:(BOOL)arg3 isSubsequence:(BOOL)arg4 isIgnoreCase:(BOOL)arg5 queue:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (id)symbolsForResolutions:(id)arg1;
- (id)symbolsForResolutions:(id)arg1 error:(id *)arg2;
- (void)symbolsForResolutions:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)symbolsMatchingName:(id)arg1 inContext:(id)arg2;
- (id)symbolsMatchingName:(id)arg1 inContext:(id)arg2 withCurrentFileContentDictionary:(id)arg3;
- (id)symbolsMatchingNameAtDocument:(id)arg1 docLocation:(id)arg2 fileContent:(id)arg3 error:(id *)arg4;
- (void)symbolsMatchingNameAtDocument:(id)arg1 docLocation:(id)arg2 fileContent:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)symbolsOccurrencesInContext:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (void)symbolsOccurrencesInContext:(id)arg1 withCurrentFileContentDictionary:(id)arg2 queue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)symbolsUsedInContext:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (id)testCaseBaseClasses;
- (id)testMethodsForClasses:(id)arg1;
- (id)topLevelClasses;
- (id)topLevelClassesWorkspaceOnly:(BOOL)arg1;
- (id)topLevelClassesWorkspaceOnly:(BOOL)arg1 cancelWhen:(CDUnknownBlockType)arg2;
- (id)topLevelProtocols;
- (id)topLevelProtocolsWorkspaceOnly:(BOOL)arg1;
- (id)topLevelProtocolsWorkspaceOnly:(BOOL)arg1 cancelWhen:(CDUnknownBlockType)arg2;
- (id)topLevelSymbolsInFile:(id)arg1;
- (id)typeSymbolForSymbol:(id)arg1 withCurrentFileContentDictionary:(id)arg2;
- (id)typeSymbolForSymbolAtDocument:(id)arg1 docLocation:(id)arg2 fileContent:(id)arg3 error:(id *)arg4;
- (void)typeSymbolForSymbolAtDocument:(id)arg1 docLocation:(id)arg2 fileContent:(id)arg3 queue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)unitTestMethodsStructure:(id *)arg1;
- (void)unitTestMethodsStructure:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unregisterFile:(id)arg1;
- (BOOL)unregisterFile:(id)arg1 error:(id *)arg2;
- (void)unregisterFile:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)unregisterIndexable:(id)arg1 error:(id *)arg2;
- (void)unregisterIndexable:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unregisterObject:(id)arg1;
- (void)willRegisterMoreFiles:(BOOL)arg1;
- (BOOL)willRegisterMoreFiles:(BOOL)arg1 error:(id *)arg2;
- (void)willRegisterMoreFiles:(BOOL)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (id)workspaceHeadersForIndexable:(id)arg1;
- (void)writeWorkspaceHeaderMap:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

