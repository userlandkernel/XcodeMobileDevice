//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SymbolicationDT/DVT_VMUAbstractSerializer.h>

__attribute__((visibility("hidden")))
@interface DVT_VMUSimpleSerializer : DVT_VMUAbstractSerializer
{
    void *_map;
    unsigned int _internCursor;
}

- (void)_serializeValues:(unsigned int *)arg1 count:(unsigned int)arg2;
- (id)copyContiguousData;
- (void)dealloc;
- (id)init;
- (void)serialize32:(unsigned int)arg1;
- (void)serialize64:(unsigned long long)arg1;
- (unsigned int)serializeNullTerminatedBytes:(const char *)arg1;
- (unsigned int)serializeString:(id)arg1;

@end
