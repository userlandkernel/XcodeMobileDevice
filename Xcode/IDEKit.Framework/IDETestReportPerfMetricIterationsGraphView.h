//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class IDETestReportPopoverGraphDetailDividerView, NSAttributedString, NSPopover, NSTrackingArea;
@protocol IDETestReport_PerfMetric;

@interface IDETestReportPerfMetricIterationsGraphView : NSView
{
    NSPopover *_iterationPopover;
    NSTrackingArea *_mouseEnteredTrackingArea;
    double _firstBarOrigin;
    double _averageYOrigin;
    NSAttributedString *_detailViewValueAttributedString;
    struct CGRect _detailView_valueLabelFrame;
    IDETestReportPopoverGraphDetailDividerView *_dividerView;
    struct CGRect _graphViewBounds;
    id <IDETestReport_PerfMetric> _testPerfMetric;
}

+ (void)barHeightsForIterations:(id)arg1 compareToAverage:(double)arg2 maxBarHeight:(double)arg3 graphViewBounds:(struct CGRect)arg4 graphView:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
+ (double)minBarHeight;
+ (double)percentChangedBetweenIterationValueAndAverage:(double)arg1 average:(double)arg2;
- (void).cxx_destruct;
- (void)addBars;
- (void)addDividerView;
- (void)addIterationNumbersView;
- (id)detailViewBackgroundColor;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutViews;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)pointDividerViewTo:(id)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
@property(retain, nonatomic) id <IDETestReport_PerfMetric> testPerfMetric; // @synthesize testPerfMetric=_testPerfMetric;
- (void)showPopoverForBarView:(id)arg1;
- (void)updateDetailViewWithIterationNumber:(unsigned long long)arg1;

@end

