//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSSegmentedControl.h>

@interface XCExtendedSegmentedControl : NSSegmentedControl
{
    long long _currentSegment;
    double _uniformSegmentWidth;
    double _endsWidth;
}

- (void)_cancelAllTimers;
- (void)_initiateSelectionSequence:(id)arg1;
- (long long)_segmentForLocation:(struct CGPoint)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (long long)highlightedSegment;
- (id)initWithSegmentWidth:(long long)arg1 endsWidth:(long long)arg2;
- (BOOL)performDragOperation:(id)arg1;
- (void)setSegmentCount:(long long)arg1;

@end
