//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSScrollerImp, NSScrollerImpPair;

@protocol NSScrollerImpPairDelegate
- (struct CGRect)contentAreaRectForScrollerImpPair:(NSScrollerImpPair *)arg1;
- (BOOL)inLiveResizeForScrollerImpPair:(NSScrollerImpPair *)arg1;
- (struct CGPoint)mouseLocationInContentAreaForScrollerImpPair:(NSScrollerImpPair *)arg1;
- (struct CGPoint)scrollerImpPair:(NSScrollerImpPair *)arg1 convertContentPoint:(struct CGPoint)arg2 toScrollerImp:(NSScrollerImp *)arg3;
- (void)scrollerImpPair:(NSScrollerImpPair *)arg1 setContentAreaNeedsDisplayInRect:(struct CGRect)arg2;
- (void)scrollerImpPair:(NSScrollerImpPair *)arg1 updateScrollerStyleForNewRecommendedScrollerStyle:(long long)arg2;

@optional
- (BOOL)scrollerImpPair:(NSScrollerImpPair *)arg1 isContentPointVisible:(struct CGPoint)arg2;
@end

