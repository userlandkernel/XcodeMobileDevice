//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSTextField;

@interface IDERefactoringTextLayoutView : NSView
{
    NSTextField *_descriptionTextField;
    NSTextField *_newNameTextField;
    NSView *_controlsView;
    double _maxDescriptionWidth;
    double _textFieldSpacing;
}

- (void).cxx_destruct;
@property(retain) NSTextField *newNameTextField; // @synthesize newNameTextField=_newNameTextField;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)viewWillDraw;

@end
