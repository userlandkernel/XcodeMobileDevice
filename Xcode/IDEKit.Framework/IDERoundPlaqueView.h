//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSBox.h>

@class NSCell;

@interface IDERoundPlaqueView : NSBox
{
    NSCell *_contentCell;
    NSCell *_backgroundCell;
}

- (void).cxx_destruct;
- (void)_oneTimeInitWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) NSCell *backgroundCell; // @synthesize backgroundCell=_backgroundCell;
@property(retain) NSCell *contentCell; // @synthesize contentCell=_contentCell;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitlePosition:(unsigned long long)arg1;
- (struct CGRect)titleRect;

@end

