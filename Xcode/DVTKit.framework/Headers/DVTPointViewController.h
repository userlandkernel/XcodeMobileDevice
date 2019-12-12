//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class DVTBorderedView, NSTextField;

@interface DVTPointViewController : NSViewController
{
    BOOL _showsBorder;
    BOOL _adaptToTheme;
    DVTBorderedView *_borderedView;
    NSTextField *_pointValueLabel;
    NSTextField *_pointValueTitleLabel;
    struct CGPoint _point;
}

- (void).cxx_destruct;
- (void)_updateBorder;
- (void)_updateForCurrentTheme;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
- (id)initWithDefaultNibName;
- (void)loadView;
@property(nonatomic) struct CGPoint point; // @synthesize point=_point;
@property __weak NSTextField *pointValueLabel; // @synthesize pointValueLabel=_pointValueLabel;
@property __weak NSTextField *pointValueTitleLabel; // @synthesize pointValueTitleLabel=_pointValueTitleLabel;
@property(nonatomic, getter=shouldAdaptToTheme) BOOL adaptToTheme; // @synthesize adaptToTheme=_adaptToTheme;
@property(nonatomic) BOOL showsBorder; // @synthesize showsBorder=_showsBorder;

@end

