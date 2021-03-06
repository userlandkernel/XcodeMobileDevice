//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTTextVisualization.h>

@class NSColor;

@interface DVTTextPageGuideVisualization : DVTTextVisualization
{
    unsigned long long _columnNumber;
    double _pageGuideX;
    NSColor *_verticalLineColor;
    NSColor *_outOfBoundsColor;
}

+ (unsigned long long)defaultDrawOrdering;
- (void).cxx_destruct;
- (void)_updatePageGuideXCoordinate;
@property(nonatomic) unsigned long long columnNumber; // @synthesize columnNumber=_columnNumber;
- (void)drawUnderCurrentLineHighlightInRect:(struct CGRect)arg1;
- (void)drawUnderTextInRect:(struct CGRect)arg1;
- (void)fontAndColorThemeChanged;

@end

