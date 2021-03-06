//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSDocumentController.h>

#import <DevToolsInterface/NSOpenSavePanelDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface PBXDocumentController : NSDocumentController <NSOpenSavePanelDelegate>
{
    BOOL _isRunningOpenPanel;
    NSMutableArray *_openedDocuments;
    NSMutableArray *_extendedTypes;
    NSMutableDictionary *_fileTypeToDocumentTypeDict;
    NSMutableDictionary *_documentTypesForClasses;
    NSMutableDictionary *_localizedFileTypes;
}

+ (void)initialize;
- (void)_addAvailableDocumentTypesForFileType:(id)arg1 toArray:(id)arg2;
- (id)_allFileTypeIdentifiersForFileType:(id)arg1;
- (void)_buildDocumentTypesCache;
- (id)_documentTypeForFileType:(id)arg1 usingAuxiliaryPreferenceDictionary:(id)arg2;
- (id)_documentTypeForFileType:(id)arg1 usingAuxiliaryPreferenceDictionary:(id)arg2 ignoringExternalEditors:(BOOL)arg3 ignoringPrefsForFirstLevel:(BOOL)arg4;
- (id)_extendedDocumentTypeNamesForDocumentClass:(Class)arg1;
- (id)_fileTypeToDocumentTypeDictionary;
- (id)_innerOpenDocumentWithContentsOfFile:(id)arg1 display:(BOOL)arg2 didOpenWithExternalEditor:(char *)arg3;
- (long long)_nextUntitledDocumentNumber;
- (id)_realDocumentPathForPath:(id)arg1;
- (id)_realDocumentPathForPath:(id)arg1 extension:(id)arg2;
- (id)_recentDocumentRecordsKeyForMenuTag:(long long)arg1;
- (void)_reviewUnsavedDocumentsWithAlertTitle:(id)arg1 cancellable:(BOOL)arg2 delegate:(id)arg3 didReviewAllSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)_setActiveProjectForWindow:(id)arg1;
- (void)_windowDidBecomeMain:(id)arg1;
- (id)activeProject;
- (void)addDocument:(id)arg1;
- (void)addDocumentTypes:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (id)availableDocumentTypesForFileType:(id)arg1;
- (void)cancel:(id)arg1;
- (id)currentProjectDocument;
- (void)dealloc;
- (id)displayNameForType:(id)arg1;
- (id)documentClassNames;
- (id)documentTypeForFileAtPath:(id)arg1;
- (id)documentTypeForFileAtPath:(id)arg1 ignoringExternalEditors:(BOOL)arg2;
- (id)documentTypeForFileType:(id)arg1;
- (id)documentTypeForFileType:(id)arg1 ignoringExternalEditors:(BOOL)arg2;
- (id)documentTypes;
- (id)editedFileDocuments;
- (id)editedProjectDocuments;
- (id)fileDocuments;
- (id)fileDocumentsInProjectDocument:(id)arg1;
- (id)fileExtensionsFromType:(id)arg1;
- (id)fileTypeToDocumentTypePreferenceDictionary;
- (id)init;
- (void)noteNewRecentDocumentURL:(id)arg1;
- (void)openDocument:(id)arg1;
- (id)openDocumentWithContentsOfFile:(id)arg1 display:(BOOL)arg2;
- (id)openDocumentWithContentsOfFile:(id)arg1 display:(BOOL)arg2 didOpenWithExternalEditor:(char *)arg3;
- (id)openDocumentWithContentsOfURL:(id)arg1 display:(BOOL)arg2;
- (BOOL)openDocumentsFromModalOpenPanel;
- (BOOL)panel:(id)arg1 isValidFilename:(id)arg2;
- (void)pluginDidLoad:(id)arg1;
- (id)projectDocumentForProject:(id)arg1;
- (id)projectDocuments;
- (id)projectDocumentsContainingFile:(id)arg1;
- (id)projectDocumentsIncludingOrganizerBackingProjects;
- (id)recentProjectDocumentURLs;
- (void)reviewUnsavedDocumentsWithAlertTitle:(id)arg1 cancellable:(BOOL)arg2 delegate:(id)arg3 didReviewAllSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (long long)runModalOpenPanel:(id)arg1 forTypes:(id)arg2;
- (void)saveAllDidReviewSaveForDocumentController:(id)arg1 didReviewAll:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)saveAllDocuments:(id)arg1;
- (void)setDocumentType:(id)arg1 forFileType:(id)arg2;
- (id)typeForContentsOfURL:(id)arg1 error:(id *)arg2;
- (id)typeFromFileExtension:(id)arg1;
- (id)untitledFileDocumentWithName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

