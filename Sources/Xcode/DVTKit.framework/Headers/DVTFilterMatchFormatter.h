//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class DVTRangeArray, NSString;

@interface DVTFilterMatchFormatter : NSFormatter
{
    long long _backgroundStyle;
    NSString *_filterMatchString;
    DVTRangeArray *_filterMatchRanges;
}

+ (id)_filterMatchAttributesForDarkBackground;
+ (id)_filterMatchAttributesForHighContrastDarkBackground;
+ (id)_filterMatchAttributesForLightBackground;
- (void).cxx_destruct;
- (void)_highlightFilterMatchSubstringsIfNecessary:(id)arg1;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
@property long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(copy) DVTRangeArray *filterMatchRanges; // @synthesize filterMatchRanges=_filterMatchRanges;
@property(copy) NSString *filterMatchString; // @synthesize filterMatchString=_filterMatchString;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringForObjectValue:(id)arg1;

@end

