//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

@class NSButton;

@interface IDEBatchFindReplaceButtonLayoutView : DVTLayoutView_ML
{
    NSButton *replaceAllButton;
    NSButton *replaceSelectedButton;
    NSButton *previewButton;
    BOOL _sizesCondensed;
    BOOL _marginsCondensed;
    BOOL _replaceAllCondensed;
    double replaceAllOriginalWidth;
    double previewOriginalWidth;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)layoutBottomUp;
- (void)layoutTopDown;

@end

