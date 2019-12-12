//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSAttributedString, NSBezierPath, NSString;

@interface IDEInspectorCapsuleAddLozengeButton : NSView
{
    NSAttributedString *_cachedAttributedTitle;
    NSBezierPath *_cachedBackgroundPath;
    CDUnknownBlockType _clickHandler;
    NSString *_title;
    BOOL _pressed;
}

- (void).cxx_destruct;
- (id)cachedAttributedTitle;
- (id)cachedBackgroundPath;
@property(copy) CDUnknownBlockType clickHandler; // @synthesize clickHandler=_clickHandler;
- (void)drawRect:(struct CGRect)arg1;
@property(getter=isPressed) BOOL pressed; // @synthesize pressed=_pressed;
- (void)mouseDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (id)pressedGradient;
- (id)pressedInnerShadow;
- (void)setFrame:(struct CGRect)arg1;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)titleAttributes;
- (id)titleShadow;
- (id)unpressedGradient;

@end

