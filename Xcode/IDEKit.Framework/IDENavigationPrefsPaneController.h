//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class NSMatrix, NSPopUpButton, NSTextField;

@interface IDENavigationPrefsPaneController : IDEViewController
{
    NSMatrix *_singleClickRadioButtons;
    NSPopUpButton *_optionClickPopUpButton;
    NSPopUpButton *_doubleClickPopUpButton;
    NSTextField *_singleClickTextLabel;
    NSTextField *_optionClickTextLabel;
    NSTextField *_doubleClickTextLabel;
}

- (void).cxx_destruct;
- (id)_labelNameForTarget:(int)arg1;
- (id)_menuNameForTarget:(int)arg1;
- (void)_setSingleClickTarget:(unsigned long long)arg1;
- (unsigned long long)_singleClickTarget;
@property(retain) NSPopUpButton *doubleClickPopUpButton; // @synthesize doubleClickPopUpButton=_doubleClickPopUpButton;
@property unsigned long long doubleClickTarget;
@property(retain) NSTextField *doubleClickTextLabel; // @synthesize doubleClickTextLabel=_doubleClickTextLabel;
- (void)loadView;
- (unsigned long long)navigatorDetailPopUpLevel;
@property(retain) NSPopUpButton *optionClickPopUpButton; // @synthesize optionClickPopUpButton=_optionClickPopUpButton;
@property unsigned long long optionClickTarget;
@property(retain) NSTextField *optionClickTextLabel; // @synthesize optionClickTextLabel=_optionClickTextLabel;
- (void)setNavigatorDetailPopUpLevel:(unsigned long long)arg1;
@property BOOL shouldActivateNewTabsAndWindows;
@property(retain) NSMatrix *singleClickRadioButtons; // @synthesize singleClickRadioButtons=_singleClickRadioButtons;
@property(nonatomic) BOOL singleClickTargetsPrimary;
@property(retain) NSTextField *singleClickTextLabel; // @synthesize singleClickTextLabel=_singleClickTextLabel;

@end

