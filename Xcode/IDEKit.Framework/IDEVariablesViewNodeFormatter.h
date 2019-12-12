//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class IDEVariablesViewCell, NSString;

@interface IDEVariablesViewNodeFormatter : NSFormatter
{
    int _mode;
    IDEVariablesViewCell *_cell;
    NSString *_filterMatchString;
    int _fontSizeStyle;
    unsigned long long _compoundModeOptions;
    unsigned long long _textAlignment;
}

+ (struct _NSRange)valuePartRangeForAttributedString:(id)arg1;
- (void).cxx_destruct;
- (double)_adjustedFontSize:(double)arg1;
- (id)_attributedString:(id)arg1 withFont:(id)arg2;
- (id)_attributedString:(id)arg1 withFont:(id)arg2 changed:(BOOL)arg3 partName:(id)arg4;
- (id)_changedAttributes;
- (id)_changedAttributesWithFont:(id)arg1;
- (id)_compoundAttributedString:(id)arg1;
- (id)_filterMatchedAttributes;
- (void)_highlightMatchOfString:(id)arg1 onAttributedString:(id)arg2;
- (id)_inactiveColor;
- (id)_itemDescriptionString:(id)arg1;
- (id)_logicalValueString:(id)arg1;
- (id)_nameOnlyString:(id)arg1;
- (id)_nameString:(id)arg1;
- (id)_rawValueString:(id)arg1;
- (id)_summaryTextColor;
- (id)_summaryTextColor:(BOOL)arg1;
- (id)_textColor;
- (id)_typeAndValueAttributedString:(id)arg1;
- (id)_typeString:(id)arg1;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)changedFont;
@property unsigned long long compoundModeOptions; // @synthesize compoundModeOptions=_compoundModeOptions;
- (id)copyWithZone:(struct _NSZone *)arg1 andCell:(id)arg2;
- (id)editingStringForObjectValue:(id)arg1;
@property(copy) NSString *filterMatchString; // @synthesize filterMatchString=_filterMatchString;
@property int fontSizeStyle; // @synthesize fontSizeStyle=_fontSizeStyle;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)initWithCell:(id)arg1;
@property int mode; // @synthesize mode=_mode;
- (id)nameFont;
- (id)rawValueFont;
@property unsigned long long textAlignment; // @synthesize textAlignment=_textAlignment;
- (id)stringForObjectValue:(id)arg1;
- (id)summaryFont;
- (id)valueFont;

@end

