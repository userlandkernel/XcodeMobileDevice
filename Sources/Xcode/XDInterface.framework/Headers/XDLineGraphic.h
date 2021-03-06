//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XDInterface/XDGraphic.h>

#import <XDInterface/XDGraphEdge-Protocol.h>

@class XDConnection, XDLineEnd;

@interface XDLineGraphic : XDGraphic <XDGraphEdge>
{
    XDLineEnd *_headLineEnd;
    XDLineEnd *_tailLineEnd;
    XDConnection *_headConnection;
    XDConnection *_tailConnection;
    struct CGSize _headStemSize;
    struct CGSize _tailStemSize;
    double _orthogonalPivotPosition;
    struct _XDLineGraphicFlags _lgFlags;
}

+ (void)initialize;
- (id)_bezierPathWithHeadLineEnd:(id)arg1 tailLineEnd:(id)arg2 appendLineEndPaths:(BOOL)arg3;
- (void)_connectionDidMove:(id)arg1;
- (struct CGPoint)_headSlope;
- (void)_setDiagramStorage:(id)arg1;
- (struct CGPoint)_tailSlope;
- (void)_validateLineEnds;
- (BOOL)canCacheDrawingResult;
- (BOOL)canDrawContents;
- (BOOL)canDrawFill;
- (BOOL)canEdit;
- (void)connectionDidMove:(id)arg1;
- (struct CGPoint)crossingPointForConnection:(id)arg1;
- (id)cursorForKnobPosition:(int)arg1;
- (void)dealloc;
- (void)drawStrokeInView:(id)arg1;
- (struct CGSize)drawingBoundsMargin;
- (void)encodeWithCoder:(id)arg1;
- (id)fillPath;
- (void)flipHorizontally;
- (void)flipVertically;
- (id)headConnection;
- (id)headGraphNode;
- (id)headGraphic;
- (int)headKnobPosition;
- (id)headLineEnd;
- (struct CGPoint)headPoint;
- (struct CGSize)headStemSize;
- (id)highlightPath;
- (struct CGRect)hitTestBounds;
- (id)hitTestPath;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)intersectsRect:(struct CGRect)arg1;
- (BOOL)isHitByPoint:(struct CGPoint)arg1 inScale:(double)arg2;
- (BOOL)isLayoutable;
- (BOOL)isMovable;
- (unsigned long long)knobPositionMask;
- (int)lineType;
- (double)orthogonalPivotPosition;
- (void)setBounds:(struct CGRect)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeadConnection:(id)arg1;
- (void)setHeadLineEnd:(id)arg1;
- (void)setHeadStemSize:(struct CGSize)arg1;
- (void)setLineType:(int)arg1;
- (void)setOrthogonalPivotPosition:(double)arg1;
- (void)setTailConnection:(id)arg1;
- (void)setTailLineEnd:(id)arg1;
- (void)setTailStemSize:(struct CGSize)arg1;
- (id)strokePath;
- (id)tailConnection;
- (id)tailGraphNode;
- (id)tailGraphic;
- (int)tailKnobPosition;
- (id)tailLineEnd;
- (struct CGPoint)tailPoint;
- (struct CGSize)tailStemSize;

@end

