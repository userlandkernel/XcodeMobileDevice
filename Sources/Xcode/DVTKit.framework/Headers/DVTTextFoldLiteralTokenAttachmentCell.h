//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTTextFoldInlineTokenAttachmentCell.h>

@class NSImage;

@interface DVTTextFoldLiteralTokenAttachmentCell : DVTTextFoldInlineTokenAttachmentCell
{
    NSImage *_image;
}

- (void).cxx_destruct;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)drawColorLiteralWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawFileLiteralWithContentFrame:(struct CGRect)arg1 cellFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawImageLiteralWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (id)tokenBorderColor;
- (id)tokenForegroundColor;
- (id)tokenSelectionColor;

@end

