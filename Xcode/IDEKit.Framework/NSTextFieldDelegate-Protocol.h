//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSControlTextEditingDelegate-Protocol.h>

@class NSArray, NSTextField, NSTextView;

@protocol NSTextFieldDelegate <NSControlTextEditingDelegate>

@optional
- (NSArray *)textField:(NSTextField *)arg1 textView:(NSTextView *)arg2 candidates:(NSArray *)arg3 forSelectedRange:(struct _NSRange)arg4;
- (NSArray *)textField:(NSTextField *)arg1 textView:(NSTextView *)arg2 candidatesForSelectedRange:(struct _NSRange)arg3;
- (BOOL)textField:(NSTextField *)arg1 textView:(NSTextView *)arg2 shouldSelectCandidateAtIndex:(unsigned long long)arg3;
@end

