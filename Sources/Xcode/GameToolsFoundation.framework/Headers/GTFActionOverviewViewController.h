//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <GameToolsFoundation/NSSplitViewDelegate-Protocol.h>

@class DVTGradientImageButton, DVTObservingToken, DVTSearchField, GTFActionBorderedView, GTFActionNodeOverviewView, GTFActionScrollView, GTFActionSplitView, GTFActionTimelineControlView, GTFActionTimelineView, GTFActionTrackOverviewView, NSDate, NSPopUpButton, NSSlider, NSString, NSView;
@protocol GTFActionOverviewViewControllerDelegate;

@interface GTFActionOverviewViewController : NSViewController <NSSplitViewDelegate>
{
    DVTObservingToken *_contentSizeObserver;
    struct CGRect _lastTrackOverviewVisibleRect;
    NSDate *_lastFilterDate;
    NSString *_filterString;
    BOOL _filterCallbackIsPending;
    BOOL _inFilterMethod;
    BOOL _isScrollSyncing;
    id <GTFActionOverviewViewControllerDelegate> _delegate;
    GTFActionSplitView *_actionSplitView;
    GTFActionScrollView *_actionTimelineScrollView;
    GTFActionBorderedView *_actionNodeSelectorView;
    GTFActionTimelineView *_actionTimelineView;
    NSView *_actionNodeSelectorTimelineTabSubview;
    GTFActionTimelineControlView *_actionNodeSelectorTimelineControlView;
    NSPopUpButton *_actionNodeSelector;
    GTFActionScrollView *_actionNodeOverviewScrollView;
    GTFActionNodeOverviewView *_actionNodeOverviewView;
    GTFActionScrollView *_actionTrackOverviewScrollView;
    GTFActionTrackOverviewView *_actionTrackOverviewView;
    GTFActionBorderedView *_actionControlBarBorderView;
    GTFActionBorderedView *_actionNodeOverviewBottomBar;
    DVTSearchField *_actionNodesFilterField;
    NSSlider *_actionTimeScaleSlider;
    DVTGradientImageButton *_addActionButton;
}

- (void).cxx_destruct;
@property __weak GTFActionBorderedView *actionControlBarBorderView; // @synthesize actionControlBarBorderView=_actionControlBarBorderView;
@property __weak GTFActionBorderedView *actionNodeOverviewBottomBar; // @synthesize actionNodeOverviewBottomBar=_actionNodeOverviewBottomBar;
@property __weak GTFActionScrollView *actionNodeOverviewScrollView; // @synthesize actionNodeOverviewScrollView=_actionNodeOverviewScrollView;
@property __weak GTFActionNodeOverviewView *actionNodeOverviewView; // @synthesize actionNodeOverviewView=_actionNodeOverviewView;
@property __weak NSPopUpButton *actionNodeSelector; // @synthesize actionNodeSelector=_actionNodeSelector;
@property __weak GTFActionTimelineControlView *actionNodeSelectorTimelineControlView; // @synthesize actionNodeSelectorTimelineControlView=_actionNodeSelectorTimelineControlView;
@property __weak NSView *actionNodeSelectorTimelineTabSubview; // @synthesize actionNodeSelectorTimelineTabSubview=_actionNodeSelectorTimelineTabSubview;
@property __weak GTFActionBorderedView *actionNodeSelectorView; // @synthesize actionNodeSelectorView=_actionNodeSelectorView;
@property __weak DVTSearchField *actionNodesFilterField; // @synthesize actionNodesFilterField=_actionNodesFilterField;
@property __weak GTFActionSplitView *actionSplitView; // @synthesize actionSplitView=_actionSplitView;
@property __weak NSSlider *actionTimeScaleSlider; // @synthesize actionTimeScaleSlider=_actionTimeScaleSlider;
@property __weak GTFActionScrollView *actionTimelineScrollView; // @synthesize actionTimelineScrollView=_actionTimelineScrollView;
@property __weak GTFActionTimelineView *actionTimelineView; // @synthesize actionTimelineView=_actionTimelineView;
@property __weak GTFActionScrollView *actionTrackOverviewScrollView; // @synthesize actionTrackOverviewScrollView=_actionTrackOverviewScrollView;
@property(retain) GTFActionTrackOverviewView *actionTrackOverviewView; // @synthesize actionTrackOverviewView=_actionTrackOverviewView;
@property __weak DVTGradientImageButton *addActionButton; // @synthesize addActionButton=_addActionButton;
- (void)beginFilteringWithString:(id)arg1;
- (void)cancelFiltering;
- (void)clearFilterString;
@property(nonatomic) __weak id <GTFActionOverviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didChangeFilterCategory:(id)arg1;
- (id)filterCategoryName;
- (void)filterNodesFromFilterField:(id)arg1;
- (void)handleActionEditorResize:(id)arg1;
- (void)handleActionNodeOverviewPaneResize:(id)arg1;
- (void)handleScrollSynchronization:(id)arg1;
- (void)reallyFilter:(id)arg1;
- (void)removeScrollSynchronization;
- (void)setFilterString:(id)arg1;
- (void)setupScrollSynchronization;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)synchronizeScrollView:(id)arg1 fromScrollView:(id)arg2 syncHoriz:(BOOL)arg3 syncVert:(BOOL)arg4;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewWillDisappear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

