//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTTextView.h>

#import <DVTKit/DVTLayoutManagerDelegate-Protocol.h>
#import <DVTKit/NSTableViewDelegate-Protocol.h>

@class DVTLayoutManager, DVTSourceCodeLanguage, DVTTextCompletionController, DVTTextCompletionDataSource, DVTTextStorage, NSCharacterSet, NSColor, NSDictionary, NSIndexSet, NSString;
@protocol DVTCompletingTextViewDelegate;

@interface DVTCompletingTextView : DVTTextView <DVTLayoutManagerDelegate, NSTableViewDelegate>
{
    DVTTextCompletionController *_completionController;
    DVTTextCompletionDataSource *_completionsDataSource;
    NSColor *_secondarySelectedTextBackgroundColor;
    NSColor *_currentLineHighlightColor;
    NSIndexSet *_highlightedLineNumbers;
    double _accessoryAnnotationWidth;
    unsigned long long _modifierFlagsAtLastSingleMouseDown;
    BOOL _tabSelectsNextPlaceholder;
    BOOL _currentlyDoingNonUserEditing;
    BOOL _delegateRespondsToSyntaxColoringContext;
    BOOL _highlightsCurrentLine;
    BOOL _hidesInsertionPoint;
}

+ (id)_identifierCharsForImportStatements;
+ (id)_operatorChars;
+ (BOOL)appSupportsActionMonitoring;
+ (id)identifierChars;
+ (id)readableTextPasteboardTypes;
+ (long long)scrollerKnobStyleForBackgroundColor:(id)arg1;
- (void).cxx_destruct;
- (struct _NSRange)_characterRangeForRect:(struct CGRect)arg1;
- (void)_drawCurrentLineHighlight:(struct CGRect)arg1;
- (void)_drawOverlayRect:(struct CGRect)arg1;
- (void)_drawRect:(struct CGRect)arg1 clip:(BOOL)arg2;
- (void)_drawViewBackgroundInRect:(struct CGRect)arg1;
- (void)_dvtCommonInit;
- (struct _NSRange)_findString:(id)arg1 inString:(id)arg2 fromRange:(struct _NSRange)arg3 limitRange:(struct _NSRange)arg4 forward:(BOOL)arg5 wrap:(BOOL)arg6;
- (void)_invalidateDisplayForViewStatusChange;
- (struct _NSRange)_lineCharacterRangeForSelectedRange:(struct _NSRange)arg1 affinity:(unsigned long long)arg2 firstLine:(BOOL)arg3;
- (void)_mouseInside:(id)arg1;
- (BOOL)_moveToBeginningOfTextByExtendingSelection:(BOOL)arg1;
- (BOOL)_moveToEndOfTextByExtendingSelection:(BOOL)arg1;
- (BOOL)_moveToNextPlaceholderFromCharacterIndex:(unsigned long long)arg1 forward:(BOOL)arg2 onlyIfNearby:(BOOL)arg3;
- (struct _NSRange)_rangeOfPlaeholderWithStartPrefix:(id)arg1 endSuffix:(id)arg2 inString:(id)arg3 fromRange:(struct _NSRange)arg4 limitRange:(struct _NSRange)arg5 forward:(BOOL)arg6 wrap:(BOOL)arg7;
- (void)_replaceFoldWithContents:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
@property double accessoryAnnotationWidth; // @synthesize accessoryAnnotationWidth=_accessoryAnnotationWidth;
- (id)attributedStringForCompletionPlaceholderCell:(id)arg1 atCharacterIndex:(unsigned long long)arg2 withDefaultAttributes:(id)arg3;
@property(readonly, copy) NSCharacterSet *autoCompleteChars;
@property(readonly) double autoCompletionDelay;
- (void)autoHighlightMatchingBracketAtLocationIfNecessary:(unsigned long long)arg1;
- (BOOL)becomeFirstResponder;
- (void)becomeKeyWindow;
- (void)becomeMainWindow;
- (id)cell;
- (void)clickedOnCell:(id)arg1 inRect:(struct CGRect)arg2 atIndexInToken:(unsigned long long)arg3;
- (struct _NSRange)clipViewBoundsCharacterRange;
- (void)complete:(id)arg1;
@property(readonly) DVTTextCompletionController *completionController; // @synthesize completionController=_completionController;
@property(readonly) DVTTextCompletionDataSource *completionsDataSource;
- (id)contextForCompletionStrategiesAtWordStartLocation:(unsigned long long)arg1;
@property(copy) NSColor *currentLineHighlightColor; // @synthesize currentLineHighlightColor=_currentLineHighlightColor;
- (id)currentTheme;
- (void)dealloc;
- (void)debugDumpCompletionState:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)deleteParagraph:(id)arg1;
- (void)deleteToBeginningOfText:(id)arg1;
- (void)deleteToEndOfText:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (void)doubleClickedOnCell:(id)arg1 inRect:(struct CGRect)arg2 atIndexInToken:(unsigned long long)arg3;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)drawInsertionPointInRect:(struct CGRect)arg1 color:(id)arg2 turnedOn:(BOOL)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (id)foldingTokenTypesForLayoutManager:(id)arg1;
- (id)ghostComplementTextColor;
- (BOOL)handleCancel;
- (BOOL)handleInsertBackTab;
- (BOOL)handleInsertNewline;
- (BOOL)handleInsertTab;
- (BOOL)handleSelectNextPlaceholder;
- (BOOL)handleSelectPreviousPlaceholder;
@property BOOL hidesInsertionPoint; // @synthesize hidesInsertionPoint=_hidesInsertionPoint;
@property(copy) NSIndexSet *highlightedLineNumbers; // @synthesize highlightedLineNumbers=_highlightedLineNumbers;
@property(nonatomic) BOOL highlightsCurrentLine; // @synthesize highlightsCurrentLine=_highlightsCurrentLine;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange)arg2;
- (void)invalidateCompletionsDataSource;
@property(getter=isCurrentlyDoingNonUserEditing) BOOL currentlyDoingNonUserEditing; // @synthesize currentlyDoingNonUserEditing=_currentlyDoingNonUserEditing;
- (BOOL)isThereOnlyATokenAttachmentAtUserTextChange;
@property(readonly) DVTSourceCodeLanguage *language;
@property(readonly) DVTLayoutManager *layoutManager;
- (id)layoutManager:(id)arg1 shouldUseTemporaryAttributes:(id)arg2 forDrawingToScreen:(BOOL)arg3 atCharacterIndex:(unsigned long long)arg4 effectiveRange:(struct _NSRange *)arg5;
- (id)layoutManager:(id)arg1 shouldUseTextBackgroundColor:(id)arg2 rectArray:(const struct CGRect *)arg3 count:(unsigned long long)arg4 forCharacterRange:(struct _NSRange)arg5;
- (id)menuForEvent:(id)arg1;
@property unsigned long long modifierFlagsAtLastSingleMouseDown; // @synthesize modifierFlagsAtLastSingleMouseDown=_modifierFlagsAtLastSingleMouseDown;
- (void)mouseDown:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveToBeginningOfText:(id)arg1;
- (void)moveToBeginningOfTextAndModifySelection:(id)arg1;
- (void)moveToEndOfText:(id)arg1;
- (void)moveToEndOfTextAndModifySelection:(id)arg1;
- (void)nextCompletion:(id)arg1;
- (void)paste:(id)arg1;
- (void)previousCompletion:(id)arg1;
- (struct _NSRange)rangeOfPlaceholderFromCharacterIndex:(unsigned long long)arg1 forward:(BOOL)arg2 wrap:(BOOL)arg3 limit:(unsigned long long)arg4;
- (BOOL)readSelectionFromPasteboard:(id)arg1 type:(id)arg2;
- (void)removeFromSuperview;
- (BOOL)removeMenusNotInWhiteList:(id)arg1 fromMenu:(id)arg2 removeSeparators:(BOOL)arg3;
- (void)replaceSelectedTokenWithTokenText;
- (BOOL)resignFirstResponder;
- (void)resignKeyWindow;
@property(copy, nonatomic) NSColor *secondarySelectedTextBackgroundColor; // @synthesize secondarySelectedTextBackgroundColor=_secondarySelectedTextBackgroundColor;
- (BOOL)selectFirstPlaceholderInCharacterRange:(struct _NSRange)arg1;
- (void)selectNextPlaceholder:(id)arg1;
- (void)selectPreviousPlaceholder:(id)arg1;
- (id)selectedCell;
- (id)selectedTextAttributes;
- (void)setBackgroundColor:(id)arg1;
@property id <DVTCompletingTextViewDelegate> delegate; // @dynamic delegate;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2 replacementRange:(struct _NSRange)arg3;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1 avoidAdditionalLayout:(BOOL)arg2;
- (void)setSelectedRange:(struct _NSRange)arg1;
- (void)setSelectedRanges:(id)arg1 affinity:(unsigned long long)arg2 stillSelecting:(BOOL)arg3;
@property BOOL tabSelectsNextPlaceholder; // @synthesize tabSelectsNextPlaceholder=_tabSelectsNextPlaceholder;
- (BOOL)shouldAutoCompleteAtLocation:(unsigned long long)arg1;
- (BOOL)shouldChangeTextInRanges:(id)arg1 replacementStrings:(id)arg2;
- (BOOL)shouldSuppressTextCompletion;
- (BOOL)shouldTryToCompleteOpeningBracketForStringOrAttributedStringToInsert:(id)arg1;
- (BOOL)shouldTryToCompleteOpeningBracketForStringToInsert:(id)arg1;
- (BOOL)shouldTryToCompleteOpeningBracketForStringToInsert:(id)arg1 usingLanguage:(id)arg2;
- (void)showMatchingBraceAtLocation:(id)arg1;
@property(readonly) NSDictionary *syntaxColoringContext;
- (void)textCompletionSession:(id)arg1 didInsertCompletionItem:(id)arg2 range:(struct _NSRange)arg3;
@property(readonly) DVTTextStorage *textStorage;
- (void)textStorage:(id)arg1 didEndEditRange:(struct _NSRange)arg2 changeInLength:(long long)arg3;
- (void)textStorage:(id)arg1 willEndEditRange:(struct _NSRange)arg2 changeInLength:(long long)arg3;
- (void)updateScrollerKnobStyle;
- (void)useSelectionForFind:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (struct _NSRange)visibleCharacterRange;
- (struct _NSRange)wordRangeAtLocation:(unsigned long long)arg1;
- (id)writablePasteboardTypes;
- (BOOL)writeRTFSelectionToPasteboard:(id)arg1;
- (BOOL)writeSelectionToPasteboard:(id)arg1 type:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

