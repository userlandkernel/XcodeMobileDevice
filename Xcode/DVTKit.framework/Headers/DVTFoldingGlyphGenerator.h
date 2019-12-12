//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSGlyphGenerator.h>

@class DVTFoldingLayoutManager;

@interface DVTFoldingGlyphGenerator : NSGlyphGenerator
{
    DVTFoldingLayoutManager *_layoutManager;
    NSGlyphGenerator *_underlyingGlyphGenerator;
}

- (void).cxx_destruct;
- (void)_fillFoldedGlyphsForRange:(struct _NSRange)arg1 glyphStorage:(id)arg2 glyphIndex:(unsigned long long *)arg3;
- (void)generateGlyphsForGlyphStorage:(id)arg1 desiredNumberOfCharacters:(unsigned long long)arg2 glyphIndex:(unsigned long long *)arg3 characterIndex:(unsigned long long *)arg4;
- (id)initWithUnderlyingGlyphGenerator:(id)arg1 layoutManager:(id)arg2;
@property(readonly) NSGlyphGenerator *underlyingGlyphGenerator; // @synthesize underlyingGlyphGenerator=_underlyingGlyphGenerator;

@end

