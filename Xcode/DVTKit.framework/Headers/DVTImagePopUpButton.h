//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSPopUpButton.h>

@class NSImage;

@interface DVTImagePopUpButton : NSPopUpButton
{
    BOOL _trackingRectUpdatePending;
    long long _trackingRectTag;
    BOOL _showsMenuIndcatorOnlyWhileMouseInside;
    BOOL _redrawOnMouseEnteredAndExited;
    BOOL _mouseIsOver;
}

+ (Class)cellClass;
+ (id)keyPathsForValuesAffectingArrowImage;
+ (id)keyPathsForValuesAffectingIconImage;
+ (id)keyPathsForValuesAffectingIconSize;
+ (id)keyPathsForValuesAffectingImmediatelyShowsMenu;
+ (id)keyPathsForValuesAffectingShowsMenuOnlyForMultipleItems;
+ (id)keyPathsForValuesAffectingUsedInToolbar;
- (void)_removeTrackingRect;
- (void)_updateTrackingRectSoon;
@property(copy) NSImage *arrowImage;
@property(copy) NSImage *iconImage;
@property struct CGSize iconSize;
@property BOOL immediatelyShowsMenu;
- (id)initWithFrame:(struct CGRect)arg1 pullsDown:(BOOL)arg2;
- (void)mouseEntered:(id)arg1;
- (void)mouseEnteredOrExited:(BOOL)arg1;
- (void)mouseExited:(id)arg1;
@property BOOL mouseIsOver; // @synthesize mouseIsOver=_mouseIsOver;
@property BOOL redrawOnMouseEnteredAndExited; // @synthesize redrawOnMouseEnteredAndExited=_redrawOnMouseEnteredAndExited;
- (void)rightMouseDown:(id)arg1;
@property(nonatomic) BOOL showsMenuIndcatorOnlyWhileMouseInside; // @synthesize showsMenuIndcatorOnlyWhileMouseInside=_showsMenuIndcatorOnlyWhileMouseInside;
@property BOOL showsMenuOnlyForMultipleItems;
@property BOOL usedInToolbar;
- (void)updateMouseIsOver:(int)arg1;
- (void)updateTrackingRect;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;

@end

