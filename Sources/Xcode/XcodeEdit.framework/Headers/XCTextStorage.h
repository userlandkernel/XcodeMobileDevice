//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextStorage.h>

@class NSDocument, NSMutableArray, NSMutableAttributedString, NSString, NSTimer, XCParagraphInfoTable, XCSourceModel;

@interface XCTextStorage : NSTextStorage
{
    NSMutableAttributedString *_contents;
    XCParagraphInfoTable *_paragraphInfoTable;
    struct _XCLineOffsetTable _lineOffsets;
    unsigned long long _numDateTimestampMappings;
    struct _XCDateTimestampMapping *_dateTimestampMappings;
    unsigned long long _numChanges;
    unsigned long long _changeCapacity;
    struct _XCChangeEntry *_changes;
    struct {
        unsigned int breakChangeCoalescing:1;
        unsigned int linesDidChangeDuringEdit:1;
        unsigned int doingSubWordMovement:1;
        unsigned int syntaxColoringEnabled:1;
        unsigned int delegateHandlesColoring:1;
        unsigned int doingBatchEdit:1;
        unsigned int subclassDoesSyntaxColoring:1;
        unsigned int initiatedEditingEvents:1;
        unsigned int callingBeginEditing:1;
        unsigned int callingEndEditing:1;
        unsigned int invalidatingOurAttrs:1;
        unsigned int fixingAttrs:1;
        unsigned int disableAnnotationAdjustment:1;
    } _tsflags;
    NSString *_language;
    XCSourceModel *_sourceModel;
    NSTimer *_sourceModelUpdater;
    struct _NSRange _rangeNeedingInvalidation;
    NSTimer *_invalidationTimer;
    NSMutableArray *_foldingTextStorages;
    NSDocument *_textFileDocument;
    double _advancementForSpace;
    void *RESERVED[1];
}

+ (BOOL)hasSeparateFonts;
+ (void)initialize;
+ (void)setHasSeparateFonts:(BOOL)arg1;
- (id)_contents;
- (void)_dumpChangeHistory;
- (void)_dumpLineOffsetsTable;
- (void)_invalidateCallback:(id)arg1;
- (BOOL)_isItemBracketExpression:(id)arg1;
- (id)_parenLikeItemAtLocation:(unsigned long long)arg1;
- (void)_updateSourceModel:(id)arg1;
- (void)addEntriesFromItem:(id)arg1 toParent:(id)arg2;
- (void)addFoldingStorage:(id)arg1;
- (void)addLayoutManager:(id)arg1;
- (double)advancementForSpace;
- (double)advancementForTab;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;
- (void)beginEditing;
- (id)blockItemAtLocation:(unsigned long long)arg1;
- (void)breakChangeTrackingCoalescing;
- (id)cachedSourceModel;
- (id)cachedSourceModelItemAtCharacterIndex:(unsigned long long)arg1;
- (struct _NSRange)characterRangeAtTimestamp:(unsigned long long)arg1 forCharacterRange:(struct _NSRange)arg2 atTimestamp:(unsigned long long)arg3;
- (struct _NSRange)characterRangeForLineRange:(struct _NSRange)arg1;
- (struct _NSRange)characterRangeForLineRange:(struct _NSRange)arg1 atDate:(id)arg2;
- (struct _NSRange)characterRangeFromBookmark:(id)arg1;
- (void)clearChangeHistory;
- (id)colorAtCharacterIndex:(unsigned long long)arg1 inTextView:(id)arg2 effectiveRange:(struct _NSRange *)arg3;
- (long long)colorIdAtCharacterIndex:(unsigned long long)arg1 inTextView:(id)arg2 effectiveRange:(struct _NSRange *)arg3;
- (long long)columnForPositionConvertingTabs:(long long)arg1;
- (int)convertColorToScannerType:(long long)arg1;
- (unsigned long long)currentTimestamp;
- (void)dealloc;
- (id)debugInfoStringForFileNavigator;
- (void)didReplaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2 changeInLength:(long long)arg3;
- (void)doingBatchEdit:(BOOL)arg1;
- (struct _NSRange)doubleClickAtIndex:(unsigned long long)arg1 inRange:(struct _NSRange)arg2;
- (void)endEditing;
- (void)finalize;
- (unsigned long long)firstColonAfterItem:(id)arg1 inRange:(struct _NSRange)arg2;
- (long long)firstNonblankForLine:(long long)arg1 convertTabs:(BOOL)arg2;
- (void)fixAttributesInRange:(struct _NSRange)arg1;
- (void)fixSyntaxColoringInRange:(struct _NSRange)arg1;
- (BOOL)fixesAttributesLazily;
- (id)foldableBlockItemForLineAtLocation:(unsigned long long)arg1;
- (id)foldableBlockItemForLocation:(unsigned long long)arg1;
- (id)fontAtCharacterIndex:(unsigned long long)arg1 inTextView:(id)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)fullString;
- (long long)getIndentForLine:(long long)arg1;
- (long long)getIndentWidth;
- (long long)getTabWidth;
- (id)getTextForLineSansBlanks:(long long)arg1;
- (BOOL)getUsesTabs;
- (BOOL)indentAtBeginningOfLineForCharacterRange:(struct _NSRange)arg1 undoManager:(id)arg2;
- (void)indentCharacterRange:(struct _NSRange)arg1 undoManager:(id)arg2;
- (BOOL)indentLine:(long long)arg1 onlyIfMovingRight:(BOOL)arg2 undoManager:(id)arg3;
- (void)indentLine:(long long)arg1 to:(long long)arg2 undoManager:(id)arg3;
- (void)indentLineRange:(struct _NSRange)arg1 undoManager:(id)arg2;
- (double)indentationForWrappedLineAtIndex:(unsigned long long)arg1;
- (id)init;
- (id)initWithAttributedString:(id)arg1;
- (id)initWithOwnedMutableAttributedString:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2;
- (void)invalidateAttributesAndDisplayInRange:(struct _NSRange)arg1;
- (void)invalidateLayoutForLineRange:(struct _NSRange)arg1;
- (BOOL)isAnnotationAdjustmentEnabled;
- (BOOL)isAtBOL:(struct _NSRange)arg1;
- (BOOL)isDoingBatchEdit;
- (BOOL)isIndentable;
- (BOOL)isSubWordMovement;
- (id)language;
- (unsigned long long)leadingWhitespacePositionsForLine:(unsigned long long)arg1;
- (unsigned long long)length;
- (struct _NSRange)lineNumberRangeFromBookmark:(id)arg1;
- (struct _NSRange)lineRangeAtTimestamp:(unsigned long long)arg1 forLineRange:(struct _NSRange)arg2 atTimestamp:(unsigned long long)arg3;
- (struct _NSRange)lineRangeForCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)lineRangeForRange:(struct _NSRange)arg1;
- (id)lineStringFromBookmark:(id)arg1;
- (unsigned long long)locationForOpeningBracketForClosingBracket:(unsigned long long)arg1 withArgs:(char *)arg2;
- (unsigned long long)nextWordFromIndex:(unsigned long long)arg1 forward:(BOOL)arg2;
- (unsigned long long)numberOfLines;
- (void)processEditing;
- (struct _NSRange)rangeAtTimestamp:(unsigned long long)arg1 forRange:(struct _NSRange)arg2 atTimestamp:(unsigned long long)arg3;
- (struct _NSRange)rangeOfWordAtIndex:(unsigned long long)arg1;
- (struct _NSRange)rangeOfWordAtIndex:(unsigned long long)arg1 allowNonWords:(BOOL)arg2;
- (id)rawMethodList;
- (void)recordCurrentTimestampWithDate:(id)arg1;
- (void)removeLayoutManager:(id)arg1;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2 withUndoManager:(id)arg3;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2 withUndoManager:(id)arg3;
- (void)resetAdvancementForSpace;
- (void)scheduleLazyInvalidationForRange:(struct _NSRange)arg1;
- (void)setAnnotationAdjustmentEnabled:(BOOL)arg1;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)setDelegate:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setOwnedMutableAttributedString:(id)arg1;
- (void)setSubWordMovement:(BOOL)arg1;
- (void)setSubclassDoesSyntaxColoring:(BOOL)arg1;
- (void)setSyntaxColoringEnabled:(BOOL)arg1;
- (id)sourceModel;
- (id)sourceModelItemAtCharacterIndex:(unsigned long long)arg1;
- (id)string;
- (id)stringForItem:(id)arg1;
- (id)stringFromBookmark:(id)arg1;
- (id)stringFromUnsignedInts:(const unsigned long long *)arg1 count:(unsigned long long)arg2;
- (BOOL)subclassDoesSyntaxColoring;
- (BOOL)syntaxColoringEnabled;
- (unsigned long long)timestampForDate:(id)arg1;
- (void)validateDelegateColorHandling;
- (void)willReplaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2 changeInLength:(long long)arg3;
- (unsigned long long)xcNextWordFromIndex:(unsigned long long)arg1 forward:(BOOL)arg2;

@end

