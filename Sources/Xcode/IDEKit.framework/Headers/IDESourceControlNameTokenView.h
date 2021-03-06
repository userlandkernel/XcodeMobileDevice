//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEKit/NSAccessibilityButton-Protocol.h>
#import <IDEKit/NSMenuDelegate-Protocol.h>

@class NSColor, NSMutableDictionary, NSObject, NSString;
@protocol IDESourceControlNameTokenViewDelegate;

@interface IDESourceControlNameTokenView : NSView <NSMenuDelegate, NSAccessibilityButton>
{
    NSString *_value;
    struct CGRect _tokenRect;
    struct CGRect _stringRect;
    BOOL _showToken;
    BOOL _selected;
    NSObject<IDESourceControlNameTokenViewDelegate> *_delegate;
    NSMutableDictionary *_textAttributes;
    double _fontSize;
    NSColor *_textColor;
}

- (void).cxx_destruct;
- (void)_drawInteriorWithTextFrame:(struct CGRect)arg1 tokenFrame:(struct CGRect)arg2;
- (void)_drawTextWithFrame:(struct CGRect)arg1;
- (void)_drawTokenWithFrame:(struct CGRect)arg1;
- (void)_drawWholeTokenWithTextFrame:(struct CGRect)arg1 tokenFrame:(struct CGRect)arg2;
- (id)_pullDownImage;
- (struct CGRect)_pullDownRectForTokenFrame:(struct CGRect)arg1;
- (struct CGRect)_rectForString:(id)arg1 withRect:(struct CGRect)arg2;
- (void)_resetTokenRect;
- (void)_setFontSize:(double)arg1;
- (void)_setTrackingRectWithRect:(struct CGRect)arg1;
- (struct CGRect)_tokenRectForStringRect:(struct CGRect)arg1;
- (double)_widthOfRightMenuWithPadding;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformPress;
@property __weak NSObject<IDESourceControlNameTokenViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)drawRect:(struct CGRect)arg1;
- (double)fontSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)menuDidClose:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseUp:(id)arg1;
@property(copy) NSColor *textColor; // @synthesize textColor=_textColor;
@property(copy) NSString *value;
@property(readonly) struct CGRect textFrame;
- (id)tokenColor;
- (id)tokenSelectedColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

