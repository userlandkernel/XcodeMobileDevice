//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTToolchainOverrideOption, IDEComponentsToolchainsTableController, NSNumber, NSString;

@interface IDEComponentsToolchainsTableRowItem : NSObject
{
    IDEComponentsToolchainsTableController *_controller;
    DVTToolchainOverrideOption *_option;
}

- (void).cxx_destruct;
- (id)contextImage;
@property(readonly) NSString *createdDate;
@property(readonly) NSString *displayName;
@property(readonly) NSString *displaySize;
- (id)initWithOption:(id)arg1 controller:(id)arg2;
@property(readonly) NSNumber *isActive;
- (BOOL)isValid;
@property(readonly) DVTToolchainOverrideOption *option; // @synthesize option=_option;
@property(readonly) NSString *origin;
- (void)setIsActive:(id)arg1;

@end

