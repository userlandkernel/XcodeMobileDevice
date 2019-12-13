//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTButtonTextField.h>

#import <DVTKit/NSTextViewDelegate-Protocol.h>
#import <DVTKit/NSWindowDelegate-Protocol.h>

@class NSFont, NSString;
@protocol DVTFontTextFieldDataSource;

@interface DVTFontTextField : DVTButtonTextField <NSTextViewDelegate, NSWindowDelegate>
{
}

+ (Class)cellClass;
+ (id)keyPathsForValuesAffectingPointSize;
+ (void)setCellClass:(Class)arg1;
- (void)_commonInit;
- (void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)cell;
@property(retain) id <DVTFontTextFieldDataSource> dataSource;
@property(retain) id fontRepresentation;
@property(retain) NSFont *fontValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property double pointSize;
- (BOOL)resignFirstResponder;
- (void)textDidEndEditing:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
