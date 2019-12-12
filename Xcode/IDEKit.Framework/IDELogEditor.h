//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTFindBarFindable-Protocol.h>
#import <IDEKit/DVTScopeBarHost-Protocol.h>
#import <IDEKit/IDEBuildResultsOutlineDelegate-Protocol.h>
#import <IDEKit/IDELogEditorScopeBarDelegate-Protocol.h>

@class DVTScopeBarsManager, IDEActivityLogSection, IDEBuildResultsOutlineLogic, IDEEditorDocument, IDELogAndTestsEditor, IDELogEditorScopeBar, NSArray, NSBox, NSIndexPath, NSPopUpButton, NSScrollView, NSString, NSView, XCBuildResultsOutlineView;

@interface IDELogEditor : IDEViewController <IDEBuildResultsOutlineDelegate, IDELogEditorScopeBarDelegate, DVTScopeBarHost, DVTFindBarFindable>
{
    XCBuildResultsOutlineView *_buildResultsOutlineView;
    XCBuildResultsOutlineView *_buildIssuesOutlineView;
    NSBox *_activeViewHolder;
    IDEBuildResultsOutlineLogic *_outlineLogic;
    NSPopUpButton *_scopeBarMessagesPopup;
    NSArray *_currentSelectedDocumentLocations;
    NSArray *_currentSelectedItems;
    NSIndexPath *_lastFindResultIndexPath;
    struct _NSRange _lastFindResultRange;
    IDEActivityLogSection *_lastFindResultSection;
    IDELogEditorScopeBar *_logEditorScopeBar;
    BOOL _showBySteps;
    BOOL _showAllResults;
    BOOL _lastFindResult;
    NSView *_buildResultsEnclosingView;
    NSView *_buildIssuesEnclosingView;
    IDELogAndTestsEditor *_hostEditor;
    IDEEditorDocument *_document;
    DVTScopeBarsManager *_scopeBarsManager;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (long long)version;
- (void).cxx_destruct;
- (void)_setShowAllResults:(BOOL)arg1;
- (void)_setShowSteps:(BOOL)arg1 showWarnings:(BOOL)arg2 showErrors:(BOOL)arg3 showTestFailure:(BOOL)arg4 showAnalyzerResults:(BOOL)arg5;
- (void)_showAnalyzerResultsForSelectability;
- (void)_showErrorsForSelectability;
- (void)_showWarningsForSelectability;
- (void)_updateScopeBar;
- (void)_updateShowSteps:(BOOL)arg1 showWarnings:(BOOL)arg2 showErrors:(BOOL)arg3 showAnalyzerResults:(BOOL)arg4;
- (void)_updateShownView;
- (id)activeView;
- (id)activityLogSection;
- (id)attributesForScopeBarMenuItems;
- (void)commitStateToDictionary:(id)arg1;
- (id)configureOutlineView:(id)arg1;
@property(copy) NSArray *currentSelectedDocumentLocations; // @synthesize currentSelectedDocumentLocations=_currentSelectedDocumentLocations;
@property(copy) NSArray *currentSelectedItems; // @synthesize currentSelectedItems=_currentSelectedItems;
@property(retain, nonatomic) IDEEditorDocument *document; // @synthesize document=_document;
- (void)doubleClickDocumentLocation:(id)arg1;
- (void)dvtFindBar:(id)arg1 didUpdateCurrentResult:(id)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateResults:(id)arg2;
@property __weak IDELogAndTestsEditor *hostEditor; // @synthesize hostEditor=_hostEditor;
@property(readonly) BOOL lastFindResult; // @synthesize lastFindResult=_lastFindResult;
@property(readonly) struct _NSRange lastFindResultRange; // @synthesize lastFindResultRange=_lastFindResultRange;
@property(readonly) IDEActivityLogSection *lastFindResultSection; // @synthesize lastFindResultSection=_lastFindResultSection;
- (void)loadView;
- (id)localizedString:(id)arg1 explanation:(id)arg2;
- (void)logEditorScopeBar:(id)arg1 searchTextChanged:(id)arg2;
- (void)logEditorScopeBar:(id)arg1 showAllResultsChanged:(BOOL)arg2;
- (void)logEditorScopeBar:(id)arg1 stateChanged:(int)arg2;
- (void)logEditorScopeBarSaveReport:(id)arg1;
- (void)menuCmd_collapseAllTranscripts:(id)arg1;
- (void)menuCmd_collapseSelectedTranscripts:(id)arg1;
- (void)menuCmd_copySelectedTranscripts:(id)arg1;
- (void)menuCmd_copyShownTranscripts:(id)arg1;
- (void)menuCmd_expandAllTranscripts:(id)arg1;
- (void)menuCmd_expandSelectedTranscripts:(id)arg1;
- (void)menuCmd_showAllIssues:(id)arg1;
- (void)menuCmd_showAllMessages:(id)arg1;
- (void)menuCmd_showAllResults:(id)arg1;
- (void)menuCmd_showErrorsOnly:(id)arg1;
- (void)menuCmd_showRecentResults:(id)arg1;
- (void)primitiveInvalidate;
- (void)processNewSelectedIndexPaths:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)scopeBarMenuAllIssues:(id)arg1;
- (void)scopeBarMenuAllMessages:(id)arg1;
- (void)scopeBarMenuErrorsAndWarningsOnly:(id)arg1;
- (void)scopeBarMenuErrorsOnly:(id)arg1;
- (void)scopeBarMenuStaticAnalysisResultsOnly:(id)arg1;
@property(readonly) NSView *scopeBarsBaseView;
@property(retain) DVTScopeBarsManager *scopeBarsManager; // @synthesize scopeBarsManager=_scopeBarsManager;
- (void)selectDocumentLocations:(id)arg1;
- (void)showAllMessages:(id)arg1;
- (void)showAllResults:(id)arg1;
- (void)showFindIndicatorInTranscriptForDocumentLocation:(id)arg1;
- (void)showLatestResults:(id)arg1;
- (id)startingLocationForFindBar:(id)arg1 findingBackwards:(BOOL)arg2;
- (void)takeFocus;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)viewDidInstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSScrollView *scopeBarsAdjustableScrollView;
@property(readonly) Class superclass;

@end

