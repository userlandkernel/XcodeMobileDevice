//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSAttributedString, NSImage;

@interface DTTimelineGraphInfoSummaryLabelLayer : CALayer
{
    NSAttributedString *_string;
    NSImage *_image;
}

- (void).cxx_destruct;
- (void)drawInContext:(struct CGContext *)arg1;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
- (struct CGSize)preferredFrameSize;
- (void)setContentsScale:(double)arg1;
@property(copy, nonatomic) NSAttributedString *string; // @synthesize string=_string;

@end

