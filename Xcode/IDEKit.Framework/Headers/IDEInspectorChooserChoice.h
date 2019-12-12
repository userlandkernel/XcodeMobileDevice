//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, IDEInspectorChooserCategory, IDEInspectorKeyPath, IDEInspectorLayoutGroup, NSImage, NSMenuItem, NSString;
@protocol NSCopying;

@interface IDEInspectorChooserChoice : NSObject <DVTInvalidation>
{
    CDUnknownBlockType _inspectorLayoutGroupInitializingBlock;
    IDEInspectorLayoutGroup *_inspectorLayoutGroup;
    BOOL _separator;
    BOOL _header;
    NSString *_title;
    IDEInspectorKeyPath *_titleKeyPath;
    IDEInspectorKeyPath *_visibleKeyPath;
    NSImage *_image;
    id <NSCopying> _value;
    NSMenuItem *_menuItem;
    IDEInspectorChooserCategory *_category;
    long long _indentationLevel;
}

+ (id)headerChoiceWithTitle:(id)arg1 visibleKeyPath:(id)arg2 andLayoutGroup:(id)arg3;
+ (void)initialize;
+ (id)separatorChoiceWithVisibleKeyPath:(id)arg1 andLayoutGroup:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) IDEInspectorChooserCategory *category; // @synthesize category=_category;
@property(readonly) NSImage *image; // @synthesize image=_image;
@property(readonly) long long indentationLevel; // @synthesize indentationLevel=_indentationLevel;
- (id)initWithTitle:(id)arg1 image:(id)arg2 value:(id)arg3 visibleKeyPath:(id)arg4 andLayoutGroup:(id)arg5 indentationLevel:(long long)arg6;
- (id)initWithTitle:(id)arg1 image:(id)arg2 value:(id)arg3 visibleKeyPath:(id)arg4 sliceXML:(id)arg5 inspectorController:(id)arg6;
- (id)initWithTitleKeyPath:(id)arg1 image:(id)arg2 value:(id)arg3 visibleKeyPath:(id)arg4 andLayoutGroup:(id)arg5 indentationLevel:(long long)arg6;
@property(readonly) IDEInspectorLayoutGroup *inspectorLayoutGroup;
@property(getter=isHeader) BOOL header; // @synthesize header=_header;
@property(getter=isSeparator) BOOL separator; // @synthesize separator=_separator;
@property(retain) NSMenuItem *menuItem; // @synthesize menuItem=_menuItem;
- (void)primitiveInvalidate;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly) IDEInspectorKeyPath *titleKeyPath; // @synthesize titleKeyPath=_titleKeyPath;
@property(readonly) id <NSCopying> value; // @synthesize value=_value;
@property(readonly) IDEInspectorKeyPath *visibleKeyPath; // @synthesize visibleKeyPath=_visibleKeyPath;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
