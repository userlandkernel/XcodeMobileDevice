//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTGradientImageButton.h>

@class NSPopUpButtonCell;

@interface IDEActionButton : DVTGradientImageButton
{
    NSPopUpButtonCell *_popUpCell;
    CDUnknownBlockType _menuProvider;
    struct CGSize _menuOffset;
}

- (void).cxx_destruct;
- (void)_showIssuesMenu:(id)arg1;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRole;
@property struct CGSize menuOffset; // @synthesize menuOffset=_menuOffset;
- (void)mouseDown:(id)arg1;
- (void)setCurrentMenuProvider:(CDUnknownBlockType)arg1;

@end

