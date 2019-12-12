//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEKeyboardShortcut, IDESourceEditorExtension, NSString;

@interface IDESourceEditorExtensionCommand : NSObject
{
    IDESourceEditorExtension *_extension;
    NSString *_name;
    NSString *_identifier;
    IDEKeyboardShortcut *_keyboardShortcut;
}

+ (double)cancellationDelay;
+ (void)initialize;
- (void).cxx_destruct;
- (void)_updateCommandMenuItem:(id)arg1;
- (id)description;
@property(readonly) __weak IDESourceEditorExtension *extension; // @synthesize extension=_extension;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)identifierForAccessibility;
@property(readonly, copy) NSString *identifierForKeyBinding;
- (id)initWithCommandDefinition:(id)arg1 inExtension:(id)arg2;
@property(retain) IDEKeyboardShortcut *keyboardShortcut; // @synthesize keyboardShortcut=_keyboardShortcut;
- (id)menuItemWithAction:(SEL)arg1;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (id)performCommandWithParameters:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

