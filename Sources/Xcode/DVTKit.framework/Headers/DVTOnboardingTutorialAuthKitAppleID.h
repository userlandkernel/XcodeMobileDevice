//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTOnboardingPage.h>

#import <DVTKit/AKAppleIDAuthenticationDelegate-Protocol.h>

@class AKAppleIDAuthenticationController, NSString;

@interface DVTOnboardingTutorialAuthKitAppleID : DVTOnboardingPage <AKAppleIDAuthenticationDelegate>
{
    AKAppleIDAuthenticationController *_appleIDController;
}

- (void).cxx_destruct;
- (void)_addAccountWithResults:(id)arg1;
- (id)accountCredentialsForResults:(id)arg1;
@property(retain) AKAppleIDAuthenticationController *appleIDController; // @synthesize appleIDController=_appleIDController;
- (BOOL)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4;
- (void)viewDidAppear;
- (void)viewWillDisappear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
