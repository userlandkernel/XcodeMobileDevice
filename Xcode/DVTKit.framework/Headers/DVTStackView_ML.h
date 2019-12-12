//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTLayoutView_ML.h>

@interface DVTStackView_ML : DVTLayoutView_ML
{
    BOOL _shouldFillContainingClipView;
    double _lastClipViewBreadMagnitude;
    double subviewSpacing;
    CDStruct_bf6d4a14 subviewInset;
    int layoutDirection;
    int breadthResizingMode;
}

- (void)awakeFromNib;
- (double)breadMagnitudeForSubview:(id)arg1;
- (double)breadthMagitudeForClipViewSize:(struct CGSize)arg1;
@property(nonatomic) int breadthResizingMode; // @synthesize breadthResizingMode;
- (id)configureToFillClipView:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isFlipped;
- (BOOL)isTopToBottom;
- (void)layoutBottomUp;
@property(nonatomic) int layoutDirection; // @synthesize layoutDirection;
- (void)layoutTopDown;
- (struct CGPoint)pushedOriginForSubview:(id)arg1 position:(double)arg2 maxBreadth:(double)arg3;
- (struct CGSize)pushedSizeForSubview:(id)arg1;
@property(nonatomic) CDStruct_bf6d4a14 subviewInset; // @synthesize subviewInset;
@property(nonatomic) double subviewSpacing; // @synthesize subviewSpacing;
- (struct CGSize)sizeForPulledStackMagnitude:(double)arg1 maxBreadth:(double)arg2;
- (double)stackMagnitudeForSubview:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)willRemoveSubview:(id)arg1;

@end

