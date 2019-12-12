//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTAnnotation.h>

@class DVTMutableRangeArray, DVTSourceLandmarkItem, DVTTextDocumentLocation, NSArray, NSImage, NSMutableArray, NSMutableDictionary;
@protocol DVTTextAnnotationDelegate;

@interface DVTTextAnnotation : DVTAnnotation
{
    NSMutableArray *_layoutManagers;
    NSMutableDictionary *_themesByState;
    id <DVTTextAnnotationDelegate> _delegate;
    DVTTextDocumentLocation *_location;
    NSArray *_secondaryLocations;
    DVTMutableRangeArray *_highlightedRanges;
    struct _NSRange _paragraphRange;
    unsigned long long _paragraphHash;
    NSImage *_sidebarMarkerImage;
    double _sidebarMarkerVerticalPadding;
    double _sidebarMarkerHorizontalOffset;
    double _sidebarMarkerOpacity;
    unsigned long long _highlightSidebarStyle;
    unsigned long long _severity;
    struct {
        unsigned int drawsSidebarMarker:1;
        unsigned int sidebarMarkerAlignment:4;
        unsigned int wantsDisplayOverLineNumber:1;
        unsigned int wantsReplaceLineNumber:1;
        unsigned int wantsInvertedLineNumber:1;
        unsigned int shouldDrawTemplateInverted:1;
        unsigned int lineHighlightVisible:1;
        unsigned int highlightedRangesVisible:1;
        unsigned int userDraggable:1;
        unsigned int userRemovable:1;
        unsigned int isParagraphEdited:1;
        unsigned int usesFirstLineFragmentMode:1;
    } _taFlags;
    BOOL _lazyInvalidation;
    BOOL _hasCaretRanges;
    int _annotationStackPolicy;
    unsigned long long _scrollbarMarkerType;
}

+ (void)drawLineHighlightForAnnotations:(id)arg1 highlightRanges:(BOOL)arg2 textView:(id)arg3 getParaRectBlock:(CDUnknownBlockType)arg4;
+ (void)initialize;
+ (id)logAspect;
+ (void)sortAndFilterSupressedAnnotationsInArray:(id)arg1 usingComparisonSelector:(SEL)arg2;
- (void).cxx_destruct;
- (id)_highlightedRanges;
- (void)addHighlightedRange:(struct _NSRange)arg1;
- (void)addLayoutManager:(id)arg1;
- (void)adjustParagraphIndexBy:(long long)arg1 lengthBy:(long long)arg2;
- (id)annotationDisplayDescription;
@property int annotationStackPolicy; // @synthesize annotationStackPolicy=_annotationStackPolicy;
- (void)annotationWillDrawInTextView:(id)arg1;
- (long long)compareParagraphRange:(id)arg1;
- (long long)comparePrecedenceAndLayering:(id)arg1;
- (id)currentStateInTextView:(id)arg1;
- (void)dealloc;
@property(retain) id <DVTTextAnnotationDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;
- (void)drawHighlightedRangesInRect:(struct CGRect)arg1 textView:(id)arg2;
- (void)drawLineHighlightInRect:(struct CGRect)arg1 textView:(id)arg2;
- (void)drawSidebarMarkerIconInRect:(struct CGRect)arg1 textView:(id)arg2;
- (BOOL)drawsHighlightedRanges;
- (BOOL)drawsLineHighlight;
@property BOOL drawsSidebarMarker;
@property(readonly) DVTSourceLandmarkItem *enclosingLandmarkItem;
- (void)fontAndColorThemeChanged:(id)arg1;
@property(readonly) BOOL hasCaretRanges;
@property(nonatomic) unsigned long long highlightSidebarStyle; // @synthesize highlightSidebarStyle=_highlightSidebarStyle;
@property(copy) NSArray *highlightedRanges;
- (id)init;
- (void)insertHighlightedRange:(struct _NSRange)arg1 atIndex:(long long)arg2;
- (void)insertObject:(id)arg1 inHighlightedRangesAtIndex:(unsigned long long)arg2;
- (void)invalidateDisplayAndLayoutIfNeeded:(BOOL)arg1;
- (BOOL)isFocusedInTextView:(id)arg1;
@property(getter=isHighlightedRangesVisible) BOOL highlightedRangesVisible;
@property(getter=isLineHighlightVisible) BOOL lineHighlightVisible;
@property(getter=isParagraphEdited) BOOL paragraphEdited;
@property(getter=isUserDraggable) BOOL userDraggable;
@property(getter=isUserRemovable) BOOL userRemovable;
@property(readonly) NSArray *layoutManagers;
@property BOOL lazyInvalidation; // @synthesize lazyInvalidation=_lazyInvalidation;
@property(retain, nonatomic) DVTTextDocumentLocation *location; // @synthesize location=_location;
@property(readonly) struct _NSRange paragraphRange; // @synthesize paragraphRange=_paragraphRange;
- (void)removeAllHighlightedRanges;
- (void)removeHighlightedRange:(struct _NSRange)arg1;
- (void)removeHighlightedRangeAtIndex:(long long)arg1;
- (void)removeLayoutManager:(id)arg1;
- (void)removeObjectFromHighlightedRangesAtIndex:(unsigned long long)arg1;
- (void)resolveLocationIfNeededForLayoutManager:(id)arg1;
@property unsigned long long scrollbarMarkerType; // @synthesize scrollbarMarkerType=_scrollbarMarkerType;
@property(copy) NSArray *secondaryLocations;
- (void)setNeedsInvalidate;
@property unsigned long long severity; // @synthesize severity=_severity;
@property BOOL shouldDrawTemplateInverted;
@property unsigned long long sidebarMarkerAlignment;
@property(nonatomic) double sidebarMarkerHorizontalOffset; // @synthesize sidebarMarkerHorizontalOffset=_sidebarMarkerHorizontalOffset;
@property(retain, nonatomic) NSImage *sidebarMarkerImage; // @synthesize sidebarMarkerImage=_sidebarMarkerImage;
@property(nonatomic) double sidebarMarkerOpacity; // @synthesize sidebarMarkerOpacity=_sidebarMarkerOpacity;
- (void)setSidebarMarkerTopMargin:(double)arg1;
@property double sidebarMarkerVerticalPadding; // @synthesize sidebarMarkerVerticalPadding=_sidebarMarkerVerticalPadding;
- (void)setTheme:(id)arg1 forState:(id)arg2;
@property BOOL usesFirstLineFragmentMode;
- (void)setVisible:(BOOL)arg1;
- (void)setVisibleWithoutAdditionalLayout:(BOOL)arg1;
@property BOOL wantsDisplayOverLineNumber;
@property BOOL wantsInvertedLineNumber;
@property BOOL wantsReplaceLineNumber;
- (struct CGRect)sidebarMarkerRectForFirstLineRect:(struct CGRect)arg1;
- (void)synchronizeHighlightedRangesWithLocationsForTextStorage:(id)arg1;
- (void)synchronizeParagraphHash;
- (id)themeForState:(id)arg1;
@property(readonly) BOOL wantsMergeAnnotations;

@end

