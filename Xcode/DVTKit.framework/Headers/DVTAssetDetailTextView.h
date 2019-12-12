//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

#import <DVTKit/DVTFirstResponderShowingView-Protocol.h>

@class DVTFirstResponderDrawingStrategy, NSString;

@interface DVTAssetDetailTextView : NSTextView <DVTFirstResponderShowingView>
{
    DVTFirstResponderDrawingStrategy *_firstResponderDrawingStrategy;
    BOOL _showsFirstResponder;
}

- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
@property BOOL showsFirstResponder; // @synthesize showsFirstResponder=_showsFirstResponder;
- (void)viewWillMoveToWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

