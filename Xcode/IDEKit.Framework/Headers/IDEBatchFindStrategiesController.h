//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <IDEKit/NSPopoverDelegate-Protocol.h>

@class DVTReplacementView, IDEBatchFindScopeEditor, IDEWorkspace, NSArray, NSImageView, NSPopover, NSString;
@protocol IDEBatchFindNameTreeResolver;

@interface IDEBatchFindStrategiesController : DVTViewController <NSPopoverDelegate>
{
    NSImageView *_topShadow;
    DVTReplacementView *_locationEditorContentView;
    IDEWorkspace *_workspace;
    NSString *_findScopeUUID;
    NSString *_findWorkspacePath;
    CDUnknownBlockType _scopeEditorCompletionBlock;
    BOOL _ignoresCase;
    BOOL _isEditingScope;
    int _findType;
    int _matchStyle;
    NSPopover *_popover;
    NSString *_findWorkspacePathDescription;
    id <IDEBatchFindNameTreeResolver> _nameTreeResolver;
    IDEBatchFindScopeEditor *_scopeEditor;
    NSArray *_customScopePredicates;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingCustomScopes;
+ (id)newScopeImage;
+ (id)scopeImage;
+ (id)sharedStrategiesController;
- (void).cxx_destruct;
- (BOOL)_findScopeUUIDValid:(id)arg1;
- (void)_loadDefaultValues;
- (id)_predicateForScope;
- (void)_validateCustomScopeSelection;
- (id)addScope;
- (void)commitStateToDictionary:(id)arg1;
@property(readonly) NSString *customScopeDescription;
@property(retain) NSArray *customScopePredicates; // @synthesize customScopePredicates=_customScopePredicates;
@property(readonly) NSArray *customScopes;
- (void)deleteScopeWithUUID:(id)arg1;
- (id)descriptionForCriteriaForAttributedString:(id)arg1;
- (BOOL)doneLocationEditor;
- (id)findCriteriaForAttributedString:(id)arg1 containerScopes:(id)arg2 error:(id *)arg3;
@property(copy, nonatomic) NSString *findScopeUUID; // @synthesize findScopeUUID=_findScopeUUID;
@property(nonatomic) int findType; // @synthesize findType=_findType;
@property(copy, nonatomic) NSString *findWorkspacePath; // @synthesize findWorkspacePath=_findWorkspacePath;
@property(retain) NSString *findWorkspacePathDescription; // @synthesize findWorkspacePathDescription=_findWorkspacePathDescription;
@property(nonatomic) BOOL ignoresCase; // @synthesize ignoresCase=_ignoresCase;
- (id)initWithWorkspace:(id)arg1;
@property(nonatomic) BOOL isEditingScope; // @synthesize isEditingScope=_isEditingScope;
- (void)loadView;
@property(nonatomic) int matchStyle; // @synthesize matchStyle=_matchStyle;
@property __weak id <IDEBatchFindNameTreeResolver> nameTreeResolver; // @synthesize nameTreeResolver=_nameTreeResolver;
- (void)persistScopes;
@property(retain) NSPopover *popover; // @synthesize popover=_popover;
- (BOOL)popoverShouldClose:(id)arg1;
- (void)primitiveInvalidate;
- (void)revertStateWithDictionary:(id)arg1;
@property(retain, nonatomic) IDEBatchFindScopeEditor *scopeEditor; // @synthesize scopeEditor=_scopeEditor;
- (id)scopeNameForScopeID:(id)arg1;
- (id)selectedScopeName;
- (void)setParametersFromCriteria:(id)arg1;
- (void)showScopeEditor:(id)arg1 inRect:(struct CGRect)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
