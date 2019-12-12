//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTKit/DVTInvalidation-Protocol.h>
#import <DVTKit/DVTTextCompletionDataSourceDelegate-Protocol.h>

@class DVTCompletingTextView, DVTObservingToken, DVTPerformanceMetric, DVTStackBacktrace, DVTTextCompletionListWindowController, NSArray, NSDictionary, NSString;

@interface DVTTextCompletionSession : NSObject <DVTTextCompletionDataSourceDelegate, DVTInvalidation>
{
    DVTCompletingTextView *_textView;
    DVTTextCompletionListWindowController *_listWindowController;
    unsigned long long _wordStartLocation;
    unsigned long long _cursorLocation;
    NSString *_filteringPrefix;
    DVTObservingToken *_readyToShowListener;
    NSArray *_allCompletions;
    NSArray *_filteredCompletionsAlpha;
    NSString *_usefulPrefix;
    long long _selectedCompletionIndex;
    DVTPerformanceMetric *_currentMetric;
    int _pendingRequestState;
    BOOL _generatingCompletions;
    double _startGeneratingCompletionsTime;
    BOOL _insertingFullCompletion;
    BOOL _insertingPartialCompletion;
    BOOL _hidingCompletions;
    BOOL _autoCompleteTimerExpired;
    BOOL _shownExplicitly;
    NSDictionary *_currentCompletionContext;
    NSArray *_highlyLikelyCompletions;
}

+ (void)_addToRecentCompletions:(id)arg1;
+ (void)_appendFrequentTextCompletions:(id)arg1 named:(id)arg2 inBundle:(id)arg3;
+ (id)_frequentTextCompletionsDictionaryForLanguage:(id)arg1;
+ (id)frequentTextCompletionsForLanguage:(id)arg1;
+ (id)frequentTextCompletionsSetForLanguage:(id)arg1;
+ (id)infrequentTextCompletionsForLanguage:(id)arg1;
+ (id)infrequentTextCompletionsSetForLanguage:(id)arg1;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingReadyToShowCompletions;
+ (id)keyPathsForValuesAffectingShowingCompletions;
+ (id)notRecommendedStrikeThroughColor;
- (void).cxx_destruct;
- (void)_autoCompletionWaitIsOver;
- (id)_commonPrefixForItems:(id)arg1;
- (id)_doFilterCompletionItems:(id)arg1 range:(struct _NSRange)arg2 openQuicklyPattern:(id)arg3 highestPriority:(double *)arg4 highestPriorityBucket:(long long *)arg5;
- (void)_ensureCompletionsUpToDate;
- (BOOL)_gotUsefulCompletionsToShowInList:(id)arg1;
- (long long)_indexOfItem:(id)arg1 inAlphabeticalList:(id)arg2;
- (BOOL)_insertCurrentCompletionNameCharacters:(unsigned long long)arg1;
- (double)_intrinsicPriorityForItem:(id)arg1 usingPrefix:(id)arg2;
- (id)_listWindowController;
- (id)_prefixForCurrentLocation;
- (long long)_priorityBucketForItem:(id)arg1 usingPrefix:(id)arg2;
- (void)_scrollMayHaveFinished;
- (void)_setFilteringPrefix:(id)arg1 forceFilter:(BOOL)arg2;
- (BOOL)_shouldAcceptPartialCompletionForCursorLocation:(unsigned long long)arg1;
- (BOOL)_shouldSetCursorLocation:(unsigned long long)arg1;
- (id)_usefulPartialCompletionPrefixForItems:(id)arg1 selectedIndex:(unsigned long long)arg2 filteringPrefix:(id)arg3;
@property(retain) NSArray *allCompletions; // @synthesize allCompletions=_allCompletions;
- (id)attributesForCompletionAtCharacterIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
@property BOOL autoCompleteTimerExpired; // @synthesize autoCompleteTimerExpired=_autoCompleteTimerExpired;
- (void)completionsChangedForDataSource:(id)arg1;
@property(readonly, nonatomic) NSDictionary *currentCompletionContext; // @synthesize currentCompletionContext=_currentCompletionContext;
@property(nonatomic) unsigned long long cursorLocation; // @synthesize cursorLocation=_cursorLocation;
@property(readonly) NSString *debugStateString;
- (id)filterCompletionItems:(id)arg1 openQuicklyPattern:(id)arg2;
@property(retain) NSArray *filteredCompletionsAlpha; // @synthesize filteredCompletionsAlpha=_filteredCompletionsAlpha;
@property(copy) NSString *filteringPrefix; // @synthesize filteringPrefix=_filteringPrefix;
- (BOOL)handleDeleteBackward;
- (BOOL)handleInsertText:(id)arg1;
- (BOOL)handleMoveDown;
- (BOOL)handleMoveToBeginningOfDocument;
- (BOOL)handleMoveToEndOfDocument;
- (BOOL)handleMoveUp;
- (BOOL)handlePageDown;
- (BOOL)handlePageUp;
- (BOOL)handleSelectNextPlaceholder;
- (void)handleTextViewDidScroll;
- (BOOL)handleTextViewShouldChangeTextInRange:(struct _NSRange)arg1 replacementString:(id)arg2;
- (BOOL)handleTextViewShouldSetMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)hideCompletionsWithReason:(int)arg1;
@property(retain) NSArray *highlyLikelyCompletions; // @synthesize highlyLikelyCompletions=_highlyLikelyCompletions;
- (id)init;
- (id)initWithTextView:(id)arg1 atLocation:(unsigned long long)arg2 cursorLocation:(unsigned long long)arg3;
- (BOOL)insertCurrentCompletion;
- (BOOL)insertUsefulPrefix;
@property(readonly, getter=isShowingCompletions) BOOL showingCompletions;
@property(getter=isShownExplicitly) BOOL shownExplicitly; // @synthesize shownExplicitly=_shownExplicitly;
@property(readonly) DVTTextCompletionListWindowController *listWindowController; // @synthesize listWindowController=_listWindowController;
- (void)primitiveInvalidate;
- (struct _NSRange)rangeOfFirstWordInString:(id)arg1;
@property(readonly) BOOL readyToShowCompletions;
- (struct _NSRange)replacementRangeForSuggestedRange:(struct _NSRange)arg1;
- (void)selectNextCompletionAlpha;
- (void)selectPreviousCompletionAlpha;
@property(nonatomic) long long selectedCompletionIndex; // @synthesize selectedCompletionIndex=_selectedCompletionIndex;
- (void)setPendingRequestState:(int)arg1;
@property(copy) NSString *usefulPrefix; // @synthesize usefulPrefix=_usefulPrefix;
- (BOOL)shouldAutoSuggestForTextChange;
- (BOOL)shouldBeDismissedForSelectionChange;
- (void)showCompletionsExplicitly:(BOOL)arg1;
- (BOOL)showInfoPanelForSelectedCompletion;
- (void)showTemporarilyHiddenCompletionsForReasonMask:(unsigned long long)arg1;
@property(readonly) DVTCompletingTextView *textView; // @synthesize textView=_textView;
@property(readonly) unsigned long long wordStartLocation; // @synthesize wordStartLocation=_wordStartLocation;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

