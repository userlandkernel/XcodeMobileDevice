//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTKit/CALayerDelegate-Protocol.h>

@class NSString, NSView;
@protocol CALayerDelegate;

@interface ViewActionForwardingLayerDelegate : NSObject <CALayerDelegate>
{
    NSView<CALayerDelegate> *_view;
}

- (void).cxx_destruct;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)init;
- (id)initWithView:(id)arg1;
@property(readonly, nonatomic) __weak NSView<CALayerDelegate> *view; // @synthesize view=_view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

