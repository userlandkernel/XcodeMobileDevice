//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/XCPropertiesInspectorPaneModule.h>

@class NSTextView;

@interface XCInfoPlistInspectorPane : XCPropertiesInspectorPaneModule
{
    NSTextView *_infoTextView;
}

+ (BOOL)canInspectItems:(id)arg1;
- (void)currentInspectedItemsChanged:(id)arg1;
- (BOOL)multipleItemsSelected;
- (void)viewDidLoad;

@end

