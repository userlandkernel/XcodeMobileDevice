//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (DVTNSAttributedStringAdditions)
- (id)dvt_attributedStringByApplyingFallbackAttributes:(id)arg1;
- (void)dvt_drawInRectByVerticallyCenteringAndTruncating:(struct CGRect)arg1;
- (unsigned long long)dvt_nextSubwordFromIndex:(unsigned long long)arg1 forward:(BOOL)arg2;
- (unsigned long long)dvt_nextWordFromIndex:(unsigned long long)arg1 forward:(BOOL)arg2;
- (struct CGSize)dvt_sizeConstrainedToWidth:(double)arg1;
- (id)dvt_stringByTruncatingMultilineTextToFitSize:(struct CGSize)arg1;
@end

