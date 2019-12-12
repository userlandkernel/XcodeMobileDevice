//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/NSObject-Protocol.h>

@class DVTSourceTextScrollView, NSEvent, NSScroller;

@protocol DVTSourceTextScrollViewDelegate <NSObject>

@optional
- (NSScroller *)scrollView:(DVTSourceTextScrollView *)arg1 pointInVisibleScroller:(struct CGPoint)arg2;
- (BOOL)scrollView:(DVTSourceTextScrollView *)arg1 shouldHandleScrollWheelEvent:(NSEvent *)arg2;
- (void)scrollViewDidEndLiveResize:(DVTSourceTextScrollView *)arg1;
- (void)scrollViewDidSetFrameSize:(DVTSourceTextScrollView *)arg1;
- (void)scrollViewWillStartLiveResize:(DVTSourceTextScrollView *)arg1;
@end

