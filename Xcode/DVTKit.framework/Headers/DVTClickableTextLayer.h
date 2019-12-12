//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTTextLayer.h>

#import <DVTKit/DVTClickableLayer-Protocol.h>

@class NSString;

@interface DVTClickableTextLayer : DVTTextLayer <DVTClickableLayer>
{
    CDUnknownBlockType _clickHandlerBlock;
    BOOL _disableClickHandler;
    BOOL _showsClickedState;
}

- (void).cxx_destruct;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
@property(copy) CDUnknownBlockType clickHandlerBlock; // @synthesize clickHandlerBlock=_clickHandlerBlock;
@property BOOL disableClickHandler; // @synthesize disableClickHandler=_disableClickHandler;
- (void)fireClickHandler;
- (void)layerShouldShowClickedState;
- (void)layerShouldShowUnclickedState;
@property BOOL showsClickedState; // @synthesize showsClickedState=_showsClickedState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

