//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXSourceFileEditor.h>

@class NSMutableArray, NSTimer, PBXSourceScannerItem;

@interface XCEditFileEditor : PBXSourceFileEditor
{
    PBXSourceScannerItem *_list;
    NSMutableArray *_cachedList;
    NSMutableArray *_cachedAlphaList;
    NSTimer *_methodsListUpdater;
    BOOL _showsBreakpointAnnotations;
    BOOL _methodsListNeedsUpdating;
    BOOL _showingAnnotationIndicatorDisableCount;
}

+ (double)autoHighlightTokenDelay;
+ (unsigned long long)autoHighlightTokenOption;
+ (Class)defaultLayoutManagerSubclass;
+ (Class)defaultTextViewSubclass;
+ (void)initialize;
+ (void)setAutoHighlightTokenDelay:(double)arg1;
+ (void)setAutoHighlightTokenOption:(unsigned long long)arg1;
+ (id)textEditorBackgroundColor;
- (void)_addBreakpointAtPoint:(struct CGPoint)arg1;
- (void)_addBreakpointTemplate:(id)arg1;
- (BOOL)_addBuildMessageInfo:(id)arg1 useUnresolved:(BOOL)arg2;
- (unsigned long long)_adjustedLineNumberForInstructionPointer:(id)arg1;
- (void)_checkDataTipEvent:(id)arg1;
- (void)_clearBreakpointMarkers;
- (void)_clearInstructionPointerMarkers;
- (void)_clearproblemMarkers;
- (void)_computeBreakpointMarkers;
- (void)_computeproblemMarkers;
- (void)_createGutter;
- (void)_drawLineNumbersChanged:(id)arg1;
- (void)_dumpSourceModel:(id)arg1;
- (void)_dumpSourceModelContext:(id)arg1;
- (void)_editBreakpoint:(id)arg1;
- (void)_editFileEditorDefaultsDidChange:(id)arg1;
- (void)_installDocument;
- (void)_instructionPointerDidChange:(id)arg1;
- (void)_lineRangeDataDidChange:(id)arg1;
- (double)_markerLocationForRange:(struct _NSRange)arg1 paragraphRect:(struct CGRect *)arg2;
- (void)_methodsListPrefsChanged:(id)arg1;
- (void)_projectItemsDidChange:(id)arg1;
- (id)_rawMethodList;
- (void)_recreateProblemMarkers:(id)arg1;
- (void)_removeDocument;
- (void)_removeInstructionPointerMarkers:(id)arg1;
- (void)_restoreSelectionFromProject;
- (BOOL)_revealBreakpointsInBreakpointsTask:(id)arg1;
- (void)_syntaxColoringSettingsChanged:(id)arg1;
- (void)_textStorageWasEdited:(id)arg1;
- (void)_updateBreakpointMarkers;
- (void)_updateBreakpointMarkersAndSet:(BOOL)arg1;
- (void)_updateInstructionPointerAfterFixAndContinue:(id)arg1;
- (void)_updateInstructionPointerMarkers;
- (void)_updateMethodsListAndScrollerMarkers:(id)arg1;
- (void)_updateProblemMarkersAndSet:(BOOL)arg1;
- (void)_updateUnresolvedMarkers;
- (void)_updateproblemMarkers;
- (void)_userInterfacePreferencesDidChange:(id)arg1;
- (void)addAndEditBreakpoint:(id)arg1;
- (void)addBreakpointAtLineNumber:(unsigned long long)arg1;
- (void)addEntries:(id)arg1 toList:(id)arg2 withIndent:(long long)arg3 includeAll:(BOOL)arg4;
- (void)addNotificationObservers;
- (void)addSortedEntriesFromList:(id)arg1 withIndent:(long long)arg2;
- (id)alphaSortedMethodsList;
- (void)buildMessageTextAnnotationView:(id)arg1 clickedOnBuildMessage:(id)arg2 forEvent:(id)arg3;
- (BOOL)canShowBreakpointAnnotations;
- (void)changeSourceLanguageAction:(id)arg1;
- (void)clearBreakpointAnnotations;
- (void)clearBuildMessageAnnotations;
- (void)clearInstructionPointerAnnotations;
- (void)collapseExpandMessageBubble:(id)arg1;
- (void)continueToHereAction:(id)arg1;
- (void)continueToLineNumber:(unsigned long long)arg1;
- (void)dealloc;
- (id)defaultBookmarkNameForSelection;
- (void)hideAllBubbles:(id)arg1;
- (void)hideBreakpointBubbles:(id)arg1;
- (void)hideErrorBubbles:(id)arg1;
- (void)hideWarningBubbles:(id)arg1;
- (BOOL)hidingSomeErrorBubbles;
- (BOOL)hidingSomeWarningBubbles;
- (int)lineEnding;
- (BOOL)loadView;
- (id)methodAtLocation:(unsigned long long)arg1;
- (id)methodAtLocation:(unsigned long long)arg1 forScannerList:(id)arg2;
- (id)methodAtLocation:(unsigned long long)arg1 includeAll:(BOOL)arg2;
- (id)methodAtLocation:(unsigned long long)arg1 includeAll:(BOOL)arg2 ensureUpToDate:(BOOL)arg3;
- (id)methodsList;
- (void)removeNotificationObservers;
- (void)replaceCellWithCellText:(id)arg1;
- (void)resetEditorColors:(id)arg1;
- (void)restoreSelection;
- (void)revealInBreakpointsAction:(id)arg1;
- (void)scrollLineToVisible:(long long)arg1;
- (void)setScrollerMarkers;
- (void)setSelectionFromBookmark:(id)arg1;
- (void)setSelectionFromMethod:(id)arg1;
- (void)setShowsBreakpointAnnotations:(BOOL)arg1;
- (void)showAllBubbles:(id)arg1;
- (void)showBreakpointBubbles:(id)arg1;
- (void)showErrorBubbles:(id)arg1;
- (void)showHideBreakpointBubbles:(id)arg1;
- (void)showHideErrorBubbles:(id)arg1;
- (void)showHideMessageBubble:(id)arg1;
- (void)showHideWarningBubbles:(id)arg1;
- (void)showWarningBubbles:(id)arg1;
- (BOOL)showingSomeBreakpointBubbles;
- (BOOL)showingSomeErrorBubbles;
- (BOOL)showingSomeWarningBubbles;
- (BOOL)showsBreakpointAnnotations;
- (void)sidebarView:(id)arg1 didAddAnnotation:(id)arg2;
- (void)sidebarView:(id)arg1 didMoveAnnotation:(id)arg2;
- (void)sidebarView:(id)arg1 didRemoveAnnotation:(id)arg2;
- (void)sidebarView:(id)arg1 handleMouseDownInSidebar:(id)arg2 atLineNumber:(unsigned long long)arg3;
- (void)sidebarView:(id)arg1 handleMouseUp:(id)arg2 onAnnotation:(id)arg3;
- (BOOL)sidebarView:(id)arg1 shouldAddAnnotation:(id)arg2;
- (BOOL)sidebarView:(id)arg1 shouldMoveAnnotation:(id)arg2;
- (BOOL)sidebarView:(id)arg1 shouldRemoveAnnotation:(id)arg2;
- (unsigned long long)sidebarView:(id)arg1 willAddAnnotation:(id)arg2 atLineNumber:(unsigned long long)arg3;
- (unsigned long long)sidebarView:(id)arg1 willMoveAnnotation:(id)arg2 toLineNumber:(unsigned long long)arg3;
- (void)storeSelection;
- (id)symbolStringForCurrentSelection;
- (id)syntaxColoringMenu;
- (void)textDidChange:(id)arg1;
- (void)textView:(id)arg1 clickedOnCell:(id)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (void)textView:(id)arg1 doubleClickedOnCell:(id)arg2 inRect:(struct CGRect)arg3 atIndex:(unsigned long long)arg4;
- (void)textView:(id)arg1 doubleClickedOnCell:(id)arg2 inRect:(struct CGRect)arg3 atIndexInToken:(unsigned long long)arg4;
- (void)textView:(id)arg1 handleMouseDownInSidebar:(id)arg2 atLineNumber:(unsigned long long)arg3;
- (void)textView:(id)arg1 layoutManager:(id)arg2 didLayoutGlyphsUpToCharacterIndex:(unsigned long long)arg3;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textView:(id)arg1 shouldDrawAnnotation:(id)arg2;
- (void)textViewDidChangeFolding:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewWillChangeFolding:(id)arg1;
- (void)toggleAddBreakpointMarkerAction:(id)arg1;
- (void)toggleEnableBreakpointMarkerAction:(id)arg1;
- (id)unfilteredMethodsList;
- (void)updateBreakpointAnnotations;
- (void)updateBuildMessageAnnotations;
- (void)updateInstructionPointerAnnotations;
- (void)updateLineWrapping;
- (void)updateMarkersRespectingGutterVisibility;
- (BOOL)validateLocalMenuItem:(id)arg1;
- (BOOL)wantsLayoutProgress;

@end

