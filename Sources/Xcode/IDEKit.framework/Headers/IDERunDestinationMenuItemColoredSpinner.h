//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTColoredSpinner.h>

@class NSMenuItem;

@interface IDERunDestinationMenuItemColoredSpinner : DVTColoredSpinner
{
    NSMenuItem *_menuItem;
}

- (void).cxx_destruct;
- (void)_timerStep:(id)arg1;
- (BOOL)canDraw;
@property __weak NSMenuItem *menuItem; // @synthesize menuItem=_menuItem;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (struct CGRect)visibleRect;

@end

