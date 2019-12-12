//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DSADocSet : NSObject
{
    id _docSetIvars;
}

+ (id)_URLForModelInBundle:(struct __CFBundle *)arg1 withLocalization:(id)arg2;
+ (id)_URLForStoreInBundle:(struct __CFBundle *)arg1 withLocalization:(id)arg2;
+ (id)_docSetForCoordinator:(id)arg1;
+ (void)_setDocSet:(id)arg1 forCoordinator:(id)arg2;
+ (void)cancelTokenSearchForDelegate:(id)arg1 contextInfo:(void *)arg2;
+ (id)defaultDeveloperDocSetDirectory;
+ (int)defaultModelVersion;
+ (id)docSetForManagedObject:(id)arg1;
+ (id)modelForVersion:(int)arg1;
+ (id)modelPathForVersion:(int)arg1;
+ (BOOL)searchForTokens:(id)arg1 inDocSets:(id)arg2 withSortDescriptors:(id)arg3 delegate:(id)arg4 contextInfo:(void *)arg5;
+ (int)versionForModel:(id)arg1;
- (id)_apiLanguageMOs;
- (void)_dump;
- (id)_dumpStr;
- (id)_indexNamed:(id)arg1 forUpdating:(BOOL)arg2;
- (void)_loadNodeList;
- (id)_localizedPathForNode:(id)arg1 inBundle:(id)arg2 forLocalization:(id)arg3;
- (id)_localizedPathInBundle:(id)arg1 forFile:(id)arg2 forLocalization:(id)arg3;
- (id)_objectForInfoKey:(id)arg1;
- (void)_resetBundle;
- (void)_setupNodesByPath;
- (id)_urlForNode:(id)arg1 localizingPath:(BOOL)arg2 legacy:(BOOL)arg3;
- (id)apiIndexForUpdating:(BOOL)arg1;
- (id)apiIndexURL;
- (id)apiLanguages;
- (id)availabilityArchitectures;
- (id)bundle;
- (void)cancelTextSearchForDelegate:(id)arg1 contextInfo:(void *)arg2;
- (void)cancelTokenSearchForDelegate:(id)arg1 contextInfo:(void *)arg2;
- (id)certificateIssuer;
- (id)certificateSigner;
- (long long)compare:(id)arg1;
- (CDStruct_6df46f26)configurationVersion;
- (BOOL)containsTokens:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)docSetURL;
- (unsigned long long)documentCount;
- (id)documentWithID:(long long)arg1;
- (id)documents;
- (id)documentsURL;
- (id)dvdRootPath;
- (id)fallbackURL;
- (id)feedURL;
- (id)fullTextIndexForUpdating:(BOOL)arg1;
- (id)identifier;
- (id)indexDirURL;
- (id)indexURL;
- (id)initWithBundle:(struct __CFBundle *)arg1 withPersistentStoreURL:(id)arg2 modelVersion:(int)arg3 forLocalization:(id)arg4 error:(id *)arg5;
- (id)initWithBundle:(struct __CFBundle *)arg1 withXML:(id)arg2 withPersistentStoreCoordinator:(id)arg3 modelVersion:(int)arg4 forLocalization:(id)arg5 error:(id *)arg6;
- (id)initWithDocRootDirectory:(id)arg1;
- (id)initWithDocRootDirectory:(id)arg1 forLocalization:(id)arg2 error:(id *)arg3;
- (id)initWithDocRootDirectory:(id)arg1 withXML:(id)arg2;
- (id)initWithURL:(id)arg1 error:(id *)arg2;
- (void)invalidate;
- (BOOL)isLegacyPackage;
- (id)localRootURL;
- (id)localization;
@property(readonly) NSString *localizedDescription;
- (id)localizedFeedName;
- (id)localizedName;
- (id)localizedPathsForNode:(id)arg1 inBundle:(id)arg2;
@property(readonly) NSString *localizedPublisherName;
- (id)managedObjectContext;
- (id)managedObjectModel;
- (float)maximumRelevanceForLastTextSearch;
- (CDStruct_6df46f26)maximumSupportedXcodeVersion;
- (BOOL)migrateDataToURL:(id)arg1 copyModel:(BOOL)arg2 error:(id *)arg3;
- (CDStruct_6df46f26)minimumSupportedXcodeVersion;
- (int)modelVersion;
- (id)nodeAtNamedPath:(id)arg1;
- (id)nodeForURL:(id)arg1;
- (id)nodeWithID:(long long)arg1;
- (id)nodeWithUUID:(id)arg1;
- (id)nodes;
- (id)nodesWithDocumentType:(unsigned long long)arg1;
- (double)offsetIntervalForUpdateCheck;
- (id)packageUID;
- (float)packageVersion;
- (id)persistentStoreCoordinator;
- (id)persistentStoreURL;
- (id)platformFamily;
- (CDStruct_6df46f26)platformVersion;
@property(readonly) NSString *publisherIdentifier;
- (id)releaseNoteInformation;
@property(readonly) BOOL requiresUpdateForContent;
- (id)rootCategory;
- (id)rootNode;
- (BOOL)saveChanges:(id *)arg1;
- (id)searchForText:(id)arg1 inNodes:(id)arg2;
- (BOOL)searchForText:(id)arg1 inNodes:(id)arg2 delegate:(id)arg3 contextInfo:(void *)arg4;
- (id)searchForText:(id)arg1 inNodes:(id)arg2 withMatchType:(unsigned long long)arg3;
- (BOOL)searchForText:(id)arg1 inNodes:(id)arg2 withMatchType:(unsigned long long)arg3 delegate:(id)arg4 contextInfo:(void *)arg5;
- (id)searchForTokens:(id)arg1 inNodes:(id)arg2;
- (BOOL)searchForTokens:(id)arg1 inNodes:(id)arg2 delegate:(id)arg3 contextInfo:(void *)arg4;
- (id)sharedAPIIndex;
- (id)sharedBackgroundQueue;
- (id)textIndexURL;
- (id)tokenFileURLs;
- (id)updateDownloadURL;
- (id)updateInfoDocSet;
- (id)updateInfoURL;
- (id)urlForNode:(id)arg1;
- (id)urlForNode:(id)arg1 localizingPath:(BOOL)arg2;
- (id)urlForToken:(id)arg1;
- (CDStruct_6df46f26)version;
- (id)webRootURL;

@end
