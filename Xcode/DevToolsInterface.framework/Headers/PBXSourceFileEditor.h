//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/PBXTextFileEditor.h>

@class NSMutableArray;

@interface PBXSourceFileEditor : PBXTextFileEditor
{
    NSMutableArray *_ipMarkers;
    NSMutableArray *_breakpointMarkers;
    NSMutableArray *_problemMarkers;
    NSMutableArray *_unresolvedProblemMarkers;
    BOOL _allBPMarkersValid;
    double _previousTextContainerUsedHeight;
    BOOL _docCanHaveBreakpoints;
    BOOL _canCompileFile;
    BOOL _canFixAndContinueFile;
    BOOL _canPreprocessFile;
    BOOL _canDisassembleFile;
    BOOL _waitingForPreprocessNotice;
    BOOL _waitingForDisassemblyNotice;
}

- (void)_addBreakpointAtPoint:(struct CGPoint)arg1;
- (void)_addBreakpointTemplate:(id)arg1;
- (BOOL)_addBuildMessageInfo:(id)arg1 useUnresolved:(BOOL)arg2;
- (double)_adjustedMarkerLocationForIP:(id)arg1 paragraphRect:(struct CGRect *)arg2;
- (void)_checkDataTipEvent:(id)arg1;
- (void)_clearBreakpointMarkers;
- (void)_clearInstructionPointerMarkers;
- (void)_clearproblemMarkers;
- (void)_computeBreakpointMarkers;
- (void)_computeproblemMarkers;
- (void)_highlightInstructionPointers:(BOOL)arg1;
- (void)_highlightLineForInstructionPointerMaker:(id)arg1;
- (void)_instructionPointerDidChange:(id)arg1;
- (void)_parseSourceFile:(id)arg1;
- (void)_projectItemsDidChange:(id)arg1;
- (void)_recreateProblemMarkers:(id)arg1;
- (void)_removeInstructionPointerMarkers:(id)arg1;
- (BOOL)_revealBreakpointsInBreakpointsTask:(id)arg1;
- (id)_sourceFileDocument;
- (void)_unHighlightLineForInstructionPointerMaker:(id)arg1;
- (void)_updateBreakpointMarkers;
- (void)_updateBreakpointMarkersAndSet:(BOOL)arg1;
- (void)_updateInstructionPointerAfterFixAndContinue:(id)arg1;
- (void)_updateInstructionPointerMarkers;
- (void)_updateProblemMarkersAndSet:(BOOL)arg1;
- (void)_updateUnresolvedMarkers;
- (void)_updateproblemMarkers;
- (BOOL)activeTargetIsNativeAndContainsCurrentFile;
- (BOOL)activeTargetIsNativeAndContainsFileRef:(id)arg1;
- (void)addAndEditBreakpoint:(id)arg1;
- (void)addNotificationObservers;
- (void)addTemplateBreakpoint:(id)arg1;
- (void)buildActivityNotification:(id)arg1;
- (id)buildFileForReference:(id)arg1;
- (BOOL)canCompileCurrentFile;
- (BOOL)canDisassembleCurrentFile;
- (BOOL)canPreprocessCurrentFile;
- (void)cleanNotification:(id)arg1;
- (void)compileCurrentFile:(id)arg1;
- (void)continueToHereAction:(id)arg1;
- (void)continueToHereAtPoint:(struct CGPoint)arg1;
- (void)dealloc;
- (void)disassembleCurrentFile:(id)arg1;
- (void)disassemblyDidEnd:(id)arg1;
- (void)fileNavigatorDidChangeProjectDocument:(id)arg1;
- (id)initWithFileDocument:(id)arg1;
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(BOOL)arg3;
- (BOOL)nextBuildResult;
- (void)nextBuildResult:(id)arg1;
- (void)preprocessCurrentFile:(id)arg1;
- (void)preprocessingDidEnd:(id)arg1;
- (BOOL)previousBuildResult;
- (void)previousBuildResult:(id)arg1;
- (void)removeNotificationObservers;
- (void)replaceFileDocument:(id)arg1;
- (void)resetEditorColors:(id)arg1;
- (void)revealInBreakpointsAction:(id)arg1;
- (void)rulerView:(id)arg1 didRemoveMarker:(id)arg2;
- (void)rulerView:(id)arg1 handleMouseDown:(id)arg2;
- (double)rulerView:(id)arg1 willAddMarker:(id)arg2 atLocation:(double)arg3;
- (double)rulerView:(id)arg1 willMoveMarker:(id)arg2 toLocation:(double)arg3;
- (id)scannerItemNameForLineNumber:(unsigned long long)arg1;
- (void)setDocument:(id)arg1;
- (void)setFileNavigator:(id)arg1;
- (void)setMarkers;
- (void)setNeedsDisplayForCharacterRange:(struct _NSRange)arg1;
- (void)setScrollerMarkers;
- (void)startFileRefBuildOperationForEditedFileUsingAction:(id)arg1;
- (void)textView:(id)arg1 layoutManager:(id)arg2 didLayoutGlyphsUpToCharacterIndex:(unsigned long long)arg3;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)toggleAddBreakpointMarkerAction:(id)arg1;
- (void)toggleEnableBreakpointMarkerAction:(id)arg1;
- (void)updateMarkersRespectingGutterVisibility;
- (BOOL)validateLocalMenuItem:(id)arg1;

@end
