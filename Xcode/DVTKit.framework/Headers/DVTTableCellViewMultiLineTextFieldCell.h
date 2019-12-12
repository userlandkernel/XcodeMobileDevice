//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class NSLayoutManager, NSTextContainer, NSTextStorage;

@interface DVTTableCellViewMultiLineTextFieldCell : NSTextFieldCell
{
    NSTextContainer *_textContainer;
    NSLayoutManager *_layoutManager;
    BOOL _replaceNewlinesWithVisibleCharacter;
    NSTextStorage *_textStorage;
    struct _NSRange _rangeToEnsureIsVisible;
}

- (void).cxx_destruct;
- (id)_attributesInRange:(struct _NSRange)arg1 inTextStorage:(id)arg2;
- (void)_dvtTableCellViewMultiLineTextFieldCell_commonInit;
- (void)_provideTextComponentsGivenTextStorage:(id)arg1 containerSize:(struct CGSize)arg2 handler:(CDUnknownBlockType)arg3;
- (id)_replaceNewlinesWithVisibleCharacter:(id)arg1;
- (id)_trimLeadingWhitespaceFromString:(id)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawWithExpansionFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) struct _NSRange rangeToEnsureIsVisible; // @synthesize rangeToEnsureIsVisible=_rangeToEnsureIsVisible;
@property(nonatomic) BOOL replaceNewlinesWithVisibleCharacter; // @synthesize replaceNewlinesWithVisibleCharacter=_replaceNewlinesWithVisibleCharacter;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setObjectValue:(id)arg1;
@property(retain, nonatomic) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
- (void)update;

@end

