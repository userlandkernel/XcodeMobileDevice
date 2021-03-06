//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/NSTableViewDelegate-Protocol.h>

@class DVTBorderedView, DVTObservingToken, DVTReplacementView, DVTScrollView, DVTTabChooserView, DVTTextPreferences, NSArray, NSArrayController, NSColor, NSFont, NSObjectController, NSString, NSTableView, NSTextField, NSView;

@interface IDEFontAndColorPrefsPaneController : IDEViewController <NSTableViewDelegate>
{
    DVTReplacementView *preferenceSetReplacementView;
    DVTBorderedView *_fontAndColorBorderView;
    DVTTabChooserView *_tabChooserView;
    NSTableView *_fontAndColorItemTable;
    NSArrayController *_categoriesArrayController;
    NSObjectController *_currentThemeObjectController;
    DVTBorderedView *_generalColorView;
    DVTBorderedView *_fontContainerView;
    NSView *_sourceEditorGeneralView;
    NSView *_markupGeneralView;
    NSView *_consoleGeneralView;
    NSView *_fullFontPickerView;
    NSView *_familyOnlyFontPickerView;
    NSArray *_fontAndColorItems;
    DVTObservingToken *_selectedTabObserver;
    DVTObservingToken *_backgroundColorObserver;
    DVTObservingToken *_selectionIndexesObserver;
    DVTScrollView *_scrollView;
    NSTextField *_measuringField;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_configureTextField:(id)arg1 forItem:(id)arg2;
- (void)_handleTabChanged;
- (void)_initTabChooserView;
- (void)_refreshRowViewSelectionColor:(id)arg1;
- (void)_resetAllRowHeights;
- (void)_sourceTextColorsChanged:(id)arg1;
- (id)_theme;
- (void)_updateBindingsBasedOnSelectedTab;
- (void)_updateFontPickerAndColorWell;
@property(readonly) NSArrayController *categoriesArrayController; // @synthesize categoriesArrayController=_categoriesArrayController;
- (void)changeFont:(id)arg1;
- (void)chooseFont:(id)arg1;
- (BOOL)colorWell:(id)arg1 shouldSetColor:(id)arg2;
@property(copy) NSColor *combinedSyntaxColor;
@property(copy) NSFont *combinedSyntaxFont;
@property(retain) NSArray *fontAndColorItems; // @synthesize fontAndColorItems=_fontAndColorItems;
- (void)loadView;
@property(retain) NSTextField *measuringField; // @synthesize measuringField=_measuringField;
- (void)primitiveInvalidate;
@property(retain) DVTScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
@property(readonly) DVTTextPreferences *textPreferences;
- (void)viewDidInstall;
- (void)viewWillUninstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

