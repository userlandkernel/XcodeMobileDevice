//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextStorage.h>

@interface DVTTableCellViewLineWrappingTextStorage : NSTextStorage
{
    NSTextStorage *_realStorage;
}

- (void).cxx_destruct;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)beginEditing;
- (void)endEditing;
- (id)init;
- (long long)lastLineBreakPointForWordAtIndex:(unsigned long long)arg1 upToIndex:(unsigned long long)arg2;
- (unsigned long long)lineBreakBeforeIndex:(unsigned long long)arg1 withinRange:(struct _NSRange)arg2;
@property(retain) NSTextStorage *realStorage; // @synthesize realStorage=_realStorage;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (id)string;

@end
