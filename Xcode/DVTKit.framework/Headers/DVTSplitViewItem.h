//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTSplitView, NSString, NSView;

@interface DVTSplitViewItem : NSObject
{
    DVTSplitView *_splitView;
    NSView *_view;
    NSString *_identifier;
    double _lastVisibleHeightOrWidth;
    id _animatorProxy;
    BOOL _visible;
    BOOL _isInSetVisible;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)_animatorProxy;
- (void)_collapseView;
- (void)_updateVisibleBinding;
- (void)_viewDidExpandOrCollapse:(BOOL)arg1;
- (id)animator;
- (BOOL)checkViewDidExpandOrCollapse;
- (id)dvtExtraBindings;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
@property(nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;
- (void)primitiveSetVisible:(BOOL)arg1;
- (void)recordCurrentFrameSize;
@property double savedViewMagnitude;
@property DVTSplitView *splitView; // @synthesize splitView=_splitView;
@property(retain) NSView *view; // @synthesize view=_view;
- (void)setVisibilityUsingAnimation:(BOOL)arg1;
- (void)toggleVisibilityUsingAnimation;
- (void)updateVisibleDividerPosition;
- (void)viewDidInstall;
- (void)viewWillUninstall;

@end

