//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCharacterSet, NSMutableArray, NSString;

@interface Editor : NSObject
{
    NSMutableArray *_lines;
    NSString *_filename;
    BOOL _pendingChanges;
    NSCharacterSet *_nonBlankChars;
    NSMutableArray *_potentiallyBlankLines;
}

- (void)breakLinesForFileContents:(id)arg1;
- (BOOL)changeStringAtLine:(unsigned long long)arg1 column:(unsigned long long)arg2 fromString:(id)arg3 toString:(id)arg4;
- (void)dealloc;
- (BOOL)deleteFromLine:(unsigned long long)arg1 col:(unsigned long long)arg2 toLine:(unsigned long long)arg3 col:(unsigned long long)arg4;
- (id)filename;
- (id)getStringAtLine:(unsigned long long)arg1;
- (id)getStringAtStartLine:(unsigned long long)arg1 col:(unsigned long long)arg2 toLine:(unsigned long long)arg3 col:(unsigned long long)arg4;
- (id)getStringAtStartLine:(unsigned long long)arg1 col:(unsigned long long)arg2 toLine:(unsigned long long)arg3 col:(unsigned long long)arg4 replacing:(id)arg5;
- (BOOL)hasPendingChanges;
- (id)initWithFile:(id)arg1;
- (id)initWithFileContents:(id)arg1;
- (BOOL)insertStringAtLine:(unsigned long long)arg1 column:(unsigned long long)arg2 string:(id)arg3;
- (void)removeIfBlank:(unsigned long long)arg1;
- (void)rescanFile;
- (BOOL)writeFile;

@end
