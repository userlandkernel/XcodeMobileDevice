//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DVTToolTip : NSObject
{
}

+ (void)fadeOut:(id)arg1;
+ (void)orderOutToolTip;
+ (id)scheduledTimerWithInterval:(double)arg1;
+ (void)showToolTip:(id)arg1 withSourceRect:(struct CGRect)arg2 andMouseLocation:(struct CGPoint)arg3;
+ (void)showToolTip:(id)arg1 withSourceRect:(struct CGRect)arg2 andMouseLocation:(struct CGPoint)arg3 maximumWidth:(double)arg4;
+ (id)toolTipFont;
+ (id)toolTipFontBold;
+ (struct CGPoint)toolTipPositionForMouseLocation:(struct CGPoint)arg1;

@end

