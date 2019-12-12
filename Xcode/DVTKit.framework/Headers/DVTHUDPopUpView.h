//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface DVTHUDPopUpView : NSView
{
    double _arrowHeight;
    double _arrowPoint;
    unsigned long long _arrowEdge;
    BOOL _hidesArrow;
}

+ (void)initialize;
- (double)adjustedArrowPointForArrowPoint:(double)arg1;
- (double)adjustedEdgeDistance;
@property(readonly) struct CGPoint arrowCoordinates;
- (struct CGPoint)arrowCoordinatesForArrowPoint:(double)arg1;
@property(nonatomic) unsigned long long arrowEdge; // @synthesize arrowEdge=_arrowEdge;
@property(nonatomic) double arrowHeight; // @synthesize arrowHeight=_arrowHeight;
- (BOOL)arrowOnLeftOrRightEdge;
- (BOOL)arrowOnTopOrBottomEdge;
@property(nonatomic) double arrowPoint; // @synthesize arrowPoint=_arrowPoint;
- (id)backgroundPathInRect:(struct CGRect)arg1;
- (void)commonInit;
@property(readonly) struct CGRect contentRect;
- (void)drawRect:(struct CGRect)arg1;
- (double)edgeDistance;
@property(nonatomic) BOOL hidesArrow; // @synthesize hidesArrow=_hidesArrow;
- (struct CGRect)highlightRect;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isValidTargetPoint:(struct CGPoint)arg1;
@property(readonly) struct CGPoint maximumArrowPoint;
@property(readonly) struct CGPoint minimumArrowPoint;
- (void)setArrowPointWithTargetPoint:(struct CGPoint)arg1;

@end

