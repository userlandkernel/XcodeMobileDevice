//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTTextAnnotation.h>

@class DVTDiffDescriptor;

@interface DVTSourceCodeComparisonAnnotation : DVTTextAnnotation
{
    DVTDiffDescriptor *_diffDescriptor;
    int _dataSourceType;
    BOOL _representsMissingLines;
    BOOL _selected;
    BOOL _disabled;
    BOOL _focused;
    BOOL _inactive;
    BOOL _builtHighlightedRanges;
}

+ (void)resetAllThemes;
+ (id)selectedConflictDiffInactiveTextAnnotationTheme;
+ (id)selectedConflictDiffTextAnnotationTheme;
+ (id)selectedConflictDiffUnfocusedTextAnnotationTheme;
+ (id)selectedDiffDisabledTextAnnotationTheme;
+ (id)selectedDiffInactiveDisabledTextAnnotationTheme;
+ (id)selectedDiffInactiveTextAnnotationTheme;
+ (id)selectedDiffTextAnnotationTheme;
+ (id)selectedDiffUnfocusedDisabledTextAnnotationTheme;
+ (id)selectedDiffUnfocusedTextAnnotationTheme;
+ (id)unselectedConflictDiffInactiveTextAnnotationTheme;
+ (id)unselectedConflictDiffTextAnnotationTheme;
+ (id)unselectedConflictDiffUnfocusedTextAnnotationTheme;
+ (id)unselectedDiffDisabledTextAnnotationTheme;
+ (id)unselectedDiffInactiveDisabledTextAnnotationTheme;
+ (id)unselectedDiffInactiveTextAnnotationTheme;
+ (id)unselectedDiffTextAnnotationTheme;
+ (id)unselectedDiffUnfocusedDisabledTextAnnotationTheme;
+ (id)unselectedDiffUnfocusedTextAnnotationTheme;
- (void).cxx_destruct;
- (void)_syncAnnotationThemeToState;
- (void)adjustParagraphIndexBy:(long long)arg1 lengthBy:(long long)arg2;
- (void)annotationWillDrawInTextView:(id)arg1;
@property BOOL builtHighlightedRanges; // @synthesize builtHighlightedRanges=_builtHighlightedRanges;
@property(readonly) BOOL conflict;
@property int dataSourceType; // @synthesize dataSourceType=_dataSourceType;
- (id)description;
@property(retain) DVTDiffDescriptor *diffDescriptor;
@property BOOL disabled;
- (void)drawHighlightedRangesInRect:(struct CGRect)arg1 textView:(id)arg2;
- (void)drawLineHighlightInRect:(struct CGRect)arg1 textView:(id)arg2;
@property BOOL focused;
- (BOOL)hideCarets;
@property BOOL inactive;
- (id)init;
@property BOOL representsMissingLines; // @synthesize representsMissingLines=_representsMissingLines;
@property BOOL selected;
- (void)synchronizeHighlightedRangesWithLocationsForTextStorage:(id)arg1;

@end

