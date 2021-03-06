//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorStringProperty.h>

@class IDEInspectorKeyPath, NSString, NSTextField;

@interface IDEInspectorBasicStringProperty : IDEInspectorStringProperty
{
    NSString *_explicitPlaceholder;
    IDEInspectorKeyPath *_explicitPlaceholderKeyPath;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_enabledKeyPath;
    IDEInspectorKeyPath *_editableKeyPath;
    Class _valueTransformerClass;
    NSString *_title;
    BOOL _isExplanitoryText;
    BOOL _allowsNilValues;
    BOOL _editable;
    BOOL _textFieldIsConfiguredAsEditable;
    NSTextField *_textField;
    NSTextField *_titleField;
}

- (void).cxx_destruct;
- (double)baseline;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (id)nibName;
- (void)refresh;
@property(retain, nonatomic) NSTextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) NSTextField *titleField; // @synthesize titleField=_titleField;
- (void)setupRefreshTriggersAndConfigure;
- (void)userDidChangeValue:(id)arg1;
- (id)view;

@end

