//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

#import <DevToolsInterface/PBXFindableText-Protocol.h>

@interface NSTextView (PBXTextViewFindExtensions) <PBXFindableText>
- (unsigned long long)_replaceAllStringsMatchingEitherString:(id)arg1 orExpression:(id)arg2 withString:(id)arg3 inSelection:(BOOL)arg4 ignoreCase:(BOOL)arg5 matchStyle:(int)arg6;
- (BOOL)allowsReplace;
- (BOOL)findRegularExpression:(id)arg1 ignoreCase:(BOOL)arg2 backwards:(BOOL)arg3 wrap:(BOOL)arg4;
- (BOOL)findText:(id)arg1 ignoreCase:(BOOL)arg2 matchStyle:(int)arg3 backwards:(BOOL)arg4 wrap:(BOOL)arg5;
- (unsigned long long)replaceAllStringsMatchingRegularExpression:(id)arg1 withString:(id)arg2 inSelection:(BOOL)arg3 ignoreCase:(BOOL)arg4;
- (unsigned long long)replaceAllStringsMatchingString:(id)arg1 withString:(id)arg2 inSelection:(BOOL)arg3 ignoreCase:(BOOL)arg4 matchStyle:(int)arg5;
- (BOOL)replaceCurrentSelectionWithString:(id)arg1;
- (id)selectedString;
@end

