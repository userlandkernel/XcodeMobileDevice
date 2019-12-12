//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

@class NSFont, NSString;

@interface DVTTextViewWithPlaceholder : NSTextView
{
    NSString *_centeredPlaceholderString;
    BOOL _didDrawPlaceholder;
    NSFont *_placeholderFont;
}

- (void).cxx_destruct;
@property(copy) NSString *centeredPlaceholderString; // @synthesize centeredPlaceholderString=_centeredPlaceholderString;
- (void)didChangeText;
- (void)drawViewBackgroundInRect:(struct CGRect)arg1;
@property(retain, nonatomic) NSFont *placeholderFont; // @synthesize placeholderFont=_placeholderFont;

@end

