//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCActionSkinningModule.h>

@interface XCBreakpointActionModule : XCActionSkinningModule
{
}

- (void)_changeAction:(id)arg1;
- (void)_debuggingSessionStarted:(id)arg1;
- (void)_textEditingEnded:(id)arg1;
- (void)_viewDidLoad;
- (void)_windowDidResignKey:(id)arg1;
- (void)addNotificationObservers;
- (id)breakpoint;
- (id)breakpointAction;
- (void)breakpointDidChange:(id)arg1;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)prepareFocus;
- (void)removeNotificationObservers;
- (void)setupBreakpointAction:(id)arg1;
- (void)updateBreakpointAction:(id)arg1;
- (void)viewDidLoad;

@end

