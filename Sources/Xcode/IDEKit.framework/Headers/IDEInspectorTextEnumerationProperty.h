//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorEnumerationProperty.h>

@class DVTNotificationToken, IDEInspectorKeyPath, NSArray, NSMenuItem, NSPopUpButton, NSString;

@interface IDEInspectorTextEnumerationProperty : IDEInspectorEnumerationProperty
{
    NSMenuItem *_multipleValuesItem;
    NSMenuItem *_invalidValueItem;
    NSMenuItem *_noSelectionItem;
    NSMenuItem *_nilValueItem;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_nilValueTitleKeyPath;
    NSString *_nilValueTitle;
    unsigned long long _bitMask;
    BOOL _isBitField;
    BOOL _rebuildPopUps;
    BOOL _nilPlaceholderIsSelectable;
    DVTNotificationToken *_notificationToken;
    NSArray *optionGroups;
    id controllerValue;
    NSPopUpButton *_popupButton;
}

- (void).cxx_destruct;
- (double)baseline;
- (void)enumerateDynamicOptionGroupContent:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)menuItemForOption:(id)arg1;
- (id)placeholderItemWithTitle:(id)arg1;
- (id)placeholderOptionWithTitle:(id)arg1;
@property(retain, nonatomic) NSPopUpButton *popupButton; // @synthesize popupButton=_popupButton;
- (void)rebuildMenuContent;
- (void)refresh;
- (id)separatorItem;
- (void)setupRefreshTriggersAndConfigure;
- (void)showMarkerItem:(id)arg1;
- (void)showTextForItem:(id)arg1;
- (void)showValueItem:(id)arg1;
- (void)tearDownRefreshTriggers;
- (void)userDidChangeValue:(id)arg1;

@end
