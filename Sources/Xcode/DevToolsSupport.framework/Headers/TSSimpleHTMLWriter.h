//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsSupport/TSSimpleXMLWriter.h>

@class NSMutableArray;

@interface TSSimpleHTMLWriter : TSSimpleXMLWriter
{
    NSMutableArray *_openBlocks;
    unsigned long long _headerLevel;
}

- (BOOL)_blockIsHeader:(id)arg1;
- (char *)_endStartTagString;
- (void)_writeUnwrittenBlockOpenTags;
- (void)_writeXMLEpilogue;
- (void)_writeXMLPrologue;
- (void)beginStartTag:(id)arg1;
- (void)dealloc;
- (void)finishWriting;
- (id)init;
- (id)initForWritingWithMutableData:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (id)popBlock;
- (void)pushBlock:(id)arg1;
- (void)pushBlock:(id)arg1 withText:(id)arg2;
- (void)writeContent:(id)arg1 inBlock:(id)arg2;
- (void)writeContent:(id)arg1 withIndentation:(BOOL)arg2 withNewline:(BOOL)arg3;
- (void)writeLine:(id)arg1;
- (void)writeTag:(id)arg1;
- (void)writeTag:(id)arg1 withNewline:(BOOL)arg2;

@end

