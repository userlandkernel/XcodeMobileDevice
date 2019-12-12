//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface DVTSlidingAnimation : NSObject
{
    id _delegate;
    NSMapTable *_views;
    BOOL _sliding;
    BOOL _paused;
}

+ (id)_runLoopModesForAnimation;
- (void).cxx_destruct;
- (struct CGRect)destinationForView:(id)arg1;
- (id)init;
- (BOOL)isSliding;
- (void)pause;
- (void)resume;
- (void)sendViewToDestination:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestinationForView:(id)arg1 to:(struct CGRect)arg2 duration:(double)arg3;
- (void)showNextFrame;
- (void)stop;
- (void)stopView:(id)arg1;
- (void)updateTimer;
- (void)updateViewPosition:(id)arg1 forTime:(double)arg2;

@end

