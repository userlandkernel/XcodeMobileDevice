//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTFoldingTypesetter.h>

@class DVTLayoutManager, DVTTextStorage, NSTextContainer;

@interface DVTAnnotatingTypesetter : DVTFoldingTypesetter
{
    NSTextContainer *_annotationTextContainer;
    DVTLayoutManager *_annotationLayoutManager;
    DVTTextStorage *_annotationTextStorage;
    double _mostRecentWrappedLineIndentation;
}

- (void).cxx_destruct;
- (id)_annotationTextStorageForChracterRange:(struct _NSRange)arg1 availableWidth:(double)arg2;
- (void)getLineFragmentRect:(struct CGRect *)arg1 usedRect:(struct CGRect *)arg2 remainingRect:(struct CGRect *)arg3 forStartingGlyphAtIndex:(unsigned long long)arg4 proposedRect:(struct CGRect)arg5 lineSpacing:(double)arg6 paragraphSpacingBefore:(double)arg7 paragraphSpacingAfter:(double)arg8;
- (id)init;
- (id)layoutManager;
- (double)paragraphSpacingAfterGlyphAtIndex:(unsigned long long)arg1 withProposedLineFragmentRect:(struct CGRect)arg2;
- (void)setLocation:(struct CGPoint)arg1 withAdvancements:(const double *)arg2 forStartOfGlyphRange:(struct _NSRange)arg3;
- (void)willSetLineFragmentRect:(struct CGRect *)arg1 forGlyphRange:(struct _NSRange)arg2 usedRect:(struct CGRect *)arg3 baselineOffset:(double *)arg4;

@end

