//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

#import <IDEKit/DVTFirstResponderShowingView-Protocol.h>

@class DVTFirstResponderDrawingStrategy, DVTNotificationToken, IDEAttributedStringControlTextViewFocusRingOverlay, NSString;
@protocol IDEAttributedStringControlTextViewDelegate;

@interface IDEAttributedStringControlTextView : NSTextView <DVTFirstResponderShowingView>
{
    IDEAttributedStringControlTextViewFocusRingOverlay *_focusRingOverlay;
    DVTFirstResponderDrawingStrategy *_firstResponderDrawingStrategy;
    DVTNotificationToken *_scrollViewFrameChangedToken;
    NSString *_placeholder;
}

- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)attributedPlaceholderAttributes;
- (BOOL)becomeFirstResponder;
- (void)changeColor:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)effectiveAttributedPlaceholder;
- (void)insertNewline:(id)arg1;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void)repositionOverlay;
- (BOOL)resignFirstResponder;
- (void)scrollViewDidMove:(id)arg1;
- (void)setShowsFirstResponder:(BOOL)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property id <IDEAttributedStringControlTextViewDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

