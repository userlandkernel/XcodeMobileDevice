//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTGradientImageButton, DVTObservingToken, DVTStackBacktrace, NSArrayController, NSString, NSView;

@interface IDEEditorStepperView : DVTLayoutView_ML <DVTInvalidation>
{
    DVTGradientImageButton *_leftArrowButton;
    DVTGradientImageButton *_rightArrowButton;
    NSView *_centerView;
    NSArrayController *_arrayController;
    DVTObservingToken *_countObservingToken;
}

+ (id)_arrowButtonWithDirection:(BOOL)arg1;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingCanMove;
- (void).cxx_destruct;
- (id)_toolTipForLeftArrow;
- (id)_toolTipForRightArrow;
@property(retain) NSArrayController *arrayController; // @synthesize arrayController=_arrayController;
- (BOOL)canMove;
- (double)centerViewOverlap;
- (struct CGSize)centerViewSizeInHeight:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutBottomUp;
- (id)newCenterView;
- (void)primitiveInvalidate;
- (void)selectNext:(id)arg1;
- (void)selectPrevious:(id)arg1;
- (void)setGradientStyle:(int)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

