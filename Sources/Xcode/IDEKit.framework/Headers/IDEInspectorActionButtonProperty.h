//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorAbstractActionProperty.h>

@class IDEInspectorKeyPath, NSButton, NSString;

@interface IDEInspectorActionButtonProperty : IDEInspectorAbstractActionProperty
{
    IDEInspectorKeyPath *_targetKeyPath;
    IDEInspectorKeyPath *_titleKeyPath;
    NSString *_title;
    SEL _action;
    NSButton *_button;
}

- (void).cxx_destruct;
- (double)baseline;
- (void)broadcastAction:(id)arg1;
@property(retain, nonatomic) NSButton *button; // @synthesize button=_button;
- (void)refresh;
- (void)refreshTitle:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;

@end

