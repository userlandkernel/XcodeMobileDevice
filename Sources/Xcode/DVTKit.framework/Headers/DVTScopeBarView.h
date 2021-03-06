//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTBorderedView.h>

@class NSMapTable, NSMutableArray, NSView;

@interface DVTScopeBarView : DVTBorderedView
{
    NSMapTable *_viewsToLeftSpacing;
    NSMutableArray *_viewsStuckToLeft;
    NSMutableArray *_viewsStuckToRight;
    NSView *_centeredView;
    BOOL _usesAutoLayout;
}

+ (id)createButton;
+ (id)createButtonSeparator;
- (void).cxx_destruct;
- (void)_addCenteredViewConstraints;
- (void)_invalidateCenteredViewConstraints;
- (void)addSubview:(id)arg1;
- (void)addViewInCenter:(id)arg1;
- (void)addViewOnLeft:(id)arg1;
- (void)addViewOnLeft:(id)arg1 verticalAlignment:(int)arg2;
- (void)addViewOnLeft:(id)arg1 verticalAlignment:(int)arg2 withLeftPadding:(double)arg3;
- (void)addViewOnRight:(id)arg1;
- (void)addViewOnRight:(id)arg1 verticalAlignment:(int)arg2;
- (void)addViewOnRight:(id)arg1 verticalAlignment:(int)arg2 withLeftPadding:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)removeView:(id)arg1;
@property(nonatomic) BOOL usesAutoLayout; // @synthesize usesAutoLayout=_usesAutoLayout;
- (void)verticallyCenterView:(id)arg1;
- (id)viewsInCenter;
- (id)viewsOnLeft;
- (id)viewsOnRight;
- (void)willRemoveSubview:(id)arg1;

@end

