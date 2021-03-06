//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEInspectorKeyPath, NSArray, NSString;

@interface IDEInspectorTextEnumerationOptionGroup : NSObject
{
    BOOL _dynamic;
    NSString *_title;
    IDEInspectorKeyPath *_valuesKeyPath;
    IDEInspectorKeyPath *_displayValueKeyPath;
    IDEInspectorKeyPath *_displayImagesKeyPath;
    NSArray *_options;
}

+ (id)optionGroupsForInspectorProperty:(id)arg1;
- (void).cxx_destruct;
@property(readonly) IDEInspectorKeyPath *displayImagesKeyPath; // @synthesize displayImagesKeyPath=_displayImagesKeyPath;
@property(readonly) IDEInspectorKeyPath *displayValueKeyPath; // @synthesize displayValueKeyPath=_displayValueKeyPath;
- (id)initWithXMLElement:(id)arg1 targettingInspectorProperty:(id)arg2;
@property(readonly, getter=isDynamic) BOOL dynamic; // @synthesize dynamic=_dynamic;
@property(readonly) NSArray *options; // @synthesize options=_options;
@property(readonly) NSString *title; // @synthesize title=_title;
@property(readonly) IDEInspectorKeyPath *valuesKeyPath; // @synthesize valuesKeyPath=_valuesKeyPath;

@end

