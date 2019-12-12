//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTRolloverTrackingButton.h>

@interface DVTNewTabButton : DVTRolloverTrackingButton
{
    BOOL _usesRolloverAppearanceInInactiveWindow;
    BOOL _usesRolloverAppearanceOnMouseDown;
}

+ (id)installNewTabButtonInView:(id)arg1;
+ (double)width;
- (void)_windowChangedKeyState;
- (void)awakeFromNib;
- (void)drawRect:(struct CGRect)arg1;
- (id)imageForCurrentButtonState;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) BOOL usesRolloverAppearanceInInactiveWindow; // @synthesize usesRolloverAppearanceInInactiveWindow=_usesRolloverAppearanceInInactiveWindow;
@property(nonatomic) BOOL usesRolloverAppearanceOnMouseDown; // @synthesize usesRolloverAppearanceOnMouseDown=_usesRolloverAppearanceOnMouseDown;

@end

