//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSArray, NSColor, NSDate, NSTimer;
@protocol DVTColoredSpinnerDelegate;

@interface DVTColoredSpinner : NSView
{
    NSTimer *_timer;
    unsigned long long _animationStep;
    NSArray *_images;
    NSTimer *_goalStateTimer;
    BOOL _goalState;
    NSDate *_lastAnimationStartTime;
    BOOL _displaysWhenStopped;
    BOOL _animating;
    NSColor *_color;
    id <DVTColoredSpinnerDelegate> _delegate;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_timerStep:(id)arg1;
@property(copy, nonatomic) NSColor *color; // @synthesize color=_color;
@property(nonatomic) __weak id <DVTColoredSpinnerDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL displaysWhenStopped; // @synthesize displaysWhenStopped=_displaysWhenStopped;
- (void)drawRect:(struct CGRect)arg1;
- (id)dvtExtraBindings;
- (BOOL)imagesAreValid;
@property(nonatomic, getter=isAnimating) BOOL animating; // @synthesize animating=_animating;
- (void)setAnimating:(BOOL)arg1 delayBeforeStarting:(double)arg2 minimumTimeOn:(double)arg3;
- (void)updateAnimationTimer;
- (void)validateGoalState:(id)arg1;
- (void)viewDidMoveToWindow;

@end

