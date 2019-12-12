//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDELaunchActionOptionViewController.h>

@class NSMenu, NSPopUpButton;

@interface IDELocalizationOptionsController : IDELaunchActionOptionViewController
{
    NSPopUpButton *_localePopup;
    NSMenu *_localeMenu;
    NSPopUpButton *_regionPopup;
    NSMenu *_regionMenu;
}

+ (BOOL)availableForScheme:(id)arg1;
+ (id)countryNameForLocaleIdentifier:(id)arg1;
+ (BOOL)isInviolableLocaleIdentifier:(id)arg1;
+ (id)qualifiedDisplayNameForComponents:(id)arg1;
+ (id)regionDisplayNameForInviolableLocaleIdentifier:(id)arg1 custom:(BOOL)arg2;
- (void).cxx_destruct;
- (void)_addBuiltInRegionsToRegionMenu;
- (void)_addRecentRegion:(id)arg1;
- (void)_buildLocaleMenu;
- (void)_buildRegionMenu;
- (id)_localesInWorkspace:(id)arg1;
- (id)_recentRegions;
- (void)_updateMenu:(id)arg1;
- (void)_updateRecentsInRegionMenu;
- (BOOL)menuEnableState;
- (void)menuNeedsUpdate:(id)arg1;
- (void)selectLocaleItem:(id)arg1;
- (void)selectRegionItem:(id)arg1;
- (void)viewDidInstall;

@end

