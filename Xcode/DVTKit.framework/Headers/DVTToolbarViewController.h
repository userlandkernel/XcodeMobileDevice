//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <DVTKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, NSString, NSWindow;

@interface DVTToolbarViewController : NSViewController <DVTInvalidation>
{
    NSString *_itemIdentifier;
    NSWindow *_window;
    NSString *_label;
    NSString *_tooltip;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)initWithToolbarItemIdentifier:(id)arg1 window:(id)arg2;
@property(readonly, copy) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(copy) NSString *label; // @synthesize label=_label;
@property(readonly) struct CGSize maxSize;
- (id)menuForMenuFormRepresentation;
- (id)menuFormRepresentation;
@property(readonly) struct CGSize minSize;
- (void)primitiveInvalidate;
@property(copy) NSString *tooltip; // @synthesize tooltip=_tooltip;
@property(retain) NSWindow *window; // @synthesize window=_window;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

