//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <DVTKit/DVTInvalidation-Protocol.h>

@class DVTStackBacktrace, DVTViewController, NSString;

@interface DVTPagingSheetWindowController : NSWindowController <DVTInvalidation>
{
    DVTViewController *_currentPageViewController;
    CDUnknownBlockType _completionBlock;
}

+ (BOOL)automaticallyNotifiesObserversOfCurrentPageViewController;
+ (id)defaultWindowNibName;
+ (void)initialize;
- (void).cxx_destruct;
- (void)beginSheetModalForWindow:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)configureWindowForContentView:(id)arg1;
@property(retain, nonatomic) DVTViewController *currentPageViewController; // @synthesize currentPageViewController=_currentPageViewController;
@property(retain, nonatomic) Class currentPageViewControllerClass;
- (void)didEndSheetWithReturnCode:(long long)arg1;
- (id)init;
- (void)primitiveInvalidate;
- (void)willBeginSheet;
- (void)windowDidLoad;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
