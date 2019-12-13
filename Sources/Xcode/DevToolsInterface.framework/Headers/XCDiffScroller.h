//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSScroller.h>

@interface XCDiffScroller : NSScroller
{
    void *_segmentMarkers;
    long long _numSegmentMarkers;
    long long _capSegmentMarkers;
    struct CGLayer *_segmentMarkersLayer;
    struct _XCDiffScrollerFlags _sFlags3;
}

+ (void)initialize;
- (id)borderColorForSegment:(long long)arg1;
- (void)dealloc;
- (void)drawKnobSlotInRect:(struct CGRect)arg1 highlight:(BOOL)arg2;
- (void)drawSegmentsInRect:(struct CGRect)arg1;
- (BOOL)drawsSegments;
- (id)fillColorForSegment:(long long)arg1;
- (void)getLocation:(double *)arg1 length:(double *)arg2 forSegment:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (long long)segmentCount;
- (BOOL)segmentsNeedUpdate;
- (void)setBorderColor:(id)arg1 forSegment:(long long)arg2;
- (void)setDrawsSegments:(BOOL)arg1;
- (void)setFillColor:(id)arg1 forSegment:(long long)arg2;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setLocation:(double)arg1 length:(double)arg2 forSegment:(long long)arg3;
- (void)setSegmentCount:(long long)arg1;
- (void)setSegmentsNeedUpdate:(BOOL)arg1;

@end
