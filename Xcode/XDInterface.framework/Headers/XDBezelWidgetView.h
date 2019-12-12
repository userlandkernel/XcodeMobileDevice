//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor;

@interface XDBezelWidgetView : NSView
{
    NSView *_contentView;
    struct CGSize _contentViewMargins;
    double _cornerRadius;
    NSColor *_backgroundColor;
    long long _trackingRectTag;
    struct _XDBezelWidgetViewFlags _bwvFlags;
}

+ (void)initialize;
- (void)addSubview:(id)arg1;
- (id)backgroundColor;
- (id)contentView;
- (struct CGSize)contentViewMargins;
- (double)cornerRadius;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isOpaque;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)replaceSubview:(id)arg1 with:(id)arg2;
- (void)resetCursorRects;
- (void)setBackgroundColor:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentViewMargins:(struct CGSize)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setFrameFromContentFrame:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)willRemoveSubview:(id)arg1;

@end
