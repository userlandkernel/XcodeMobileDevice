//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsCore/NSCopying-Protocol.h>

@interface XCAttributeRunBase : NSObject <NSCopying>
{
    unsigned long long totalNodeLength;
    unsigned long long entryCount;
    unsigned long long cachedEntry;
    unsigned long long cachedEntryOffset;
    struct _XCAttributeRunBaseFlags flags;
}

+ (void)initialize;
- (void)_deleteRange:(struct _NSRange)arg1;
- (BOOL)_insertAttributes:(void *)arg1 range:(struct _NSRange)arg2;
- (BOOL)_setAttributes:(void *)arg1 range:(struct _NSRange)arg2;
- (void *)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)check;
- (id)check:(void *)arg1 incomingAttrsValid:(BOOL)arg2 outgoingAttrs:(void **)arg3 parent:(id)arg4;
- (id)checkError:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dump;
- (void)dumpToFileHandle:(id)arg1 withOrigin:(unsigned long long)arg2 indent:(id)arg3;
- (void)gatherStats:(CDStruct_026f2692 *)arg1;
- (id)init;
- (id)initWithFlags:(struct _XCAttributeRunBaseFlags)arg1;
- (unsigned long long)length;
- (void)printStats;
- (id)restoreForReplay:(id)arg1;
- (id)split;

@end
