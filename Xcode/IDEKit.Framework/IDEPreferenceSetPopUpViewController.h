//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTObservingToken, DVTPreferenceSetManager, DVTReplacementView, NSMenuItem, NSPanel, NSPopUpButton;
@protocol DVTPreferenceSet;

@interface IDEPreferenceSetPopUpViewController : IDEViewController
{
    DVTPreferenceSetManager *_prefSetManager;
    DVTObservingToken *_availablePrefSetsObserverToken;
    DVTObservingToken *_currentPrefSetObserverToken;
    NSPopUpButton *_prefSetsPopUpButton;
    NSMenuItem *_managePrefSetsMenuItem;
    NSPanel *_managePrefSetsPanel;
    DVTReplacementView *_prefSetReplacementView;
    id <DVTPreferenceSet> _selectedPreferenceSet;
}

- (void).cxx_destruct;
- (void)_beginObservingPreferenceSetManager;
- (void)_dismissManagePreferenceSetsSheetAction:(id)arg1;
- (void)_endObservingPreferenceSetManager;
- (void)_selectPreferenceSetAction:(id)arg1;
- (void)_selectPreferenceSetFromPreferenceSetManager;
- (void)_updatePrefSetsPopUpButton;
- (void)managePreferenceSets:(id)arg1;
@property(retain) DVTPreferenceSetManager *preferenceSetManager;
@property(readonly) NSPopUpButton *preferenceSetPopUpButton; // @synthesize preferenceSetPopUpButton=_prefSetsPopUpButton;
- (void)primitiveInvalidate;
@property(readonly) id <DVTPreferenceSet> selectedPreferenceSet; // @synthesize selectedPreferenceSet=_selectedPreferenceSet;

@end

