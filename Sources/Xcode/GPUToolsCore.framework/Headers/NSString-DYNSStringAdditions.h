//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (DYNSStringAdditions)
- (id)dy_appendComponents:(id)arg1 usingSeparator:(id)arg2 unique:(BOOL)arg3;
- (id)dy_appendComponentsString:(id)arg1 usingSeparator:(id)arg2 unique:(BOOL)arg3;
- (long long)dy_numericCompare:(id)arg1;
- (id)dy_removeWhiteSpaceCharacters;
- (BOOL)dy_scanBuildPrefix:(id *)arg1 number:(long long *)arg2;
- (BOOL)dy_versionIsOlderThan:(id)arg1;
- (id)simplifiedTestFileName:(char *)arg1;
@end

