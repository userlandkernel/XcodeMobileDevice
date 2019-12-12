//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDistributionStepViewController.h>

@class DVTDelayedInvocation, DVTReplacementView, NSMutableArray;

@interface IDEDistributioniTunesConnectAccountStepViewController : IDEDistributionStepViewController
{
    DVTReplacementView *_replacementView;
    double _startTime;
    NSMutableArray *_accountObservers;
    DVTDelayedInvocation *_delayedAccountCheck;
}

- (void).cxx_destruct;
- (void)_cancelAccountObservers;
- (void)_checkForiTunesAccount;
@property(readonly) NSMutableArray *accountObservers; // @synthesize accountObservers=_accountObservers;
- (BOOL)canGoNext;
@property(retain) DVTDelayedInvocation *delayedAccountCheck; // @synthesize delayedAccountCheck=_delayedAccountCheck;
- (void)iTunesConnectAccountForTeamID:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithContext:(id)arg1 assistantWindowController:(id)arg2;
- (void)primitiveInvalidate;
@property __weak DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property double startTime; // @synthesize startTime=_startTime;
- (id)title;
- (void)viewDidInstall;

@end

