//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSPopUpButtonCell, _NSPredicateLogicElement;

@interface PVActionButton : NSButton
{
    NSPopUpButtonCell *_popUpCell;
    _NSPredicateLogicElement *_logicElement;
}

- (void)_runPopUp:(id)arg1;
- (void)dealloc;
- (void)mouseDown:(id)arg1;
- (void)setLogicElement:(id)arg1;

@end

