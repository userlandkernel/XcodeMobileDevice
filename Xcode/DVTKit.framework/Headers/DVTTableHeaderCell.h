//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableHeaderCell.h>

@class NSImage;

@interface DVTTableHeaderCell : NSTableHeaderCell
{
    NSImage *_image;
    struct CGSize _baseImageSize;
    unsigned long long _imageScaling;
    double _layoutHeight;
}

+ (void)initialize;
- (void).cxx_destruct;
- (struct CGRect)_layoutFrameForCellFrame:(struct CGRect)arg1;
- (struct CGSize)_scaledImageSize:(struct CGSize)arg1 forBounds:(struct CGRect)arg2;
@property struct CGSize baseImageSize; // @synthesize baseImageSize=_baseImageSize;
- (struct CGSize)cellSize;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithExpansionFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)dvtExtraBindings;
- (struct CGRect)expansionFrameWithFrame:(struct CGRect)arg1 inView:(id)arg2;
@property(retain) NSImage *image; // @synthesize image=_image;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
@property unsigned long long imageScaling; // @synthesize imageScaling=_imageScaling;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property double layoutHeight; // @synthesize layoutHeight=_layoutHeight;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (void)updateBoundTitle;

@end

