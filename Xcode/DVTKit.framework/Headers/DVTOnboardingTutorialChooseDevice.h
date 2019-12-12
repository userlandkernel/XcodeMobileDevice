//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTOnboardingPage.h>

#import <DVTKit/AKAppleIDAuthenticationDelegate-Protocol.h>
#import <DVTKit/NSTableViewDataSource-Protocol.h>

@class AKAppleIDAuthenticationController, NSPredicate, NSString, NSTableView;

@interface DVTOnboardingTutorialChooseDevice : DVTOnboardingPage <AKAppleIDAuthenticationDelegate, NSTableViewDataSource>
{
    NSPredicate *_predicate;
    NSTableView *_tableView;
    AKAppleIDAuthenticationController *_appleIDController;
}

- (void).cxx_destruct;
- (void)_addAccountWithResults:(id)arg1;
- (id)_orderedDevices;
- (id)accountCredentialsForResults:(id)arg1;
@property(retain) AKAppleIDAuthenticationController *appleIDController; // @synthesize appleIDController=_appleIDController;
- (BOOL)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)readyForNextPage;
@property __weak NSTableView *tableView; // @synthesize tableView=_tableView;
- (void)setTutorialController:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (id)whyIsDeviceNotAvailable:(id)arg1;
- (BOOL)willNavigateToNextPage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
