//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDistributionStepViewController.h>

@class DVTFuture, DVTReplacementView, NSArray, NSSet;

@interface IDEDistributionSigningAssetsStepViewController : IDEDistributionStepViewController
{
    DVTFuture *_recoveryFuture;
    unsigned long long _retryCounter;
    BOOL _useLocalSigningAssets;
    DVTReplacementView *_replacementView;
    NSArray *_errors;
    NSSet *_devices;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingCanGoNext;
+ (id)keyPathsForValuesAffectingCanGoPrevious;
+ (id)keyPathsForValuesAffectingNextButtonTitle;
+ (id)keyPathsForValuesAffectingTitle;
+ (id)keyPathsForValuesAffectingWantsNextAction;
+ (BOOL)skipStepForContext:(id)arg1 assistantDirection:(int)arg2;
- (void).cxx_destruct;
- (id)_attemptToResolveProvisioningError:(id)arg1;
- (void)_displayError:(id)arg1 waitUntilDate:(id)arg2;
- (id)_installAndReturnProgressView;
- (BOOL)_isValidPortalTeam:(id)arg1;
- (void)_locateSigningAssetsAsync;
- (id)_platformForArchive;
- (id)_portalPlatform;
- (void)_promptForTeamIfNecessaryAndLocateSigningAssets;
- (void)_refreshDevicesFromPortal;
- (BOOL)_shouldRetryGeneratingAssets;
- (BOOL)canGoNext;
- (BOOL)canGoPrevious;
@property(retain) NSSet *devices; // @synthesize devices=_devices;
@property(retain, nonatomic) NSArray *errors; // @synthesize errors=_errors;
- (id)nextButtonTitle;
- (id)nibName;
- (void)primitiveInvalidate;
@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property BOOL useLocalSigningAssets; // @synthesize useLocalSigningAssets=_useLocalSigningAssets;
- (void)takeNextAction;
- (id)title;
- (void)viewDidInstall;
- (BOOL)wantsNextAction;

@end

