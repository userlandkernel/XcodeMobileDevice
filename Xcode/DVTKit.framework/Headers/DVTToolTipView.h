//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSMutableAttributedString;

@interface DVTToolTipView : NSView
{
    NSMutableAttributedString *string;
    NSColor *backgroundColor;
    double maxWidth;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (double)maxWidth;
- (void)setAttributedString:(id)arg1;
- (void)setMaxWidth:(double)arg1;

@end

