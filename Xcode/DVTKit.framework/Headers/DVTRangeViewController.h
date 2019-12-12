//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class DVTBorderedView, DVTRangeView, NSTextField, NSView;

@interface DVTRangeViewController : NSViewController
{
    DVTBorderedView *_borderedView;
    DVTRangeView *_rangeView;
    NSView *_locationContainerView;
    NSView *_endLocationContainerView;
    NSTextField *_locationTextField;
    NSTextField *_lengthTextField;
    NSTextField *_endLocationTextField;
    struct _NSRange _range;
}

- (void).cxx_destruct;
- (void)_udpateFromRange;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property __weak NSView *endLocationContainerView; // @synthesize endLocationContainerView=_endLocationContainerView;
@property __weak NSTextField *endLocationTextField; // @synthesize endLocationTextField=_endLocationTextField;
- (id)initWithDefaultNibName;
@property __weak NSTextField *lengthTextField; // @synthesize lengthTextField=_lengthTextField;
- (void)loadView;
@property __weak NSView *locationContainerView; // @synthesize locationContainerView=_locationContainerView;
@property __weak NSTextField *locationTextField; // @synthesize locationTextField=_locationTextField;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property __weak DVTRangeView *rangeView; // @synthesize rangeView=_rangeView;

@end

