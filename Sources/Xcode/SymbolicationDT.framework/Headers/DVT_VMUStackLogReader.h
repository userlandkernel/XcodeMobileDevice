//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DVT_VMUStackLogReader : NSObject
{
    unsigned int _task;
    BOOL _usesLiteMode;
}

+ (BOOL)isLiteZone:(id)arg1;
- (void)dealloc;
- (int)enumerateRecordsWithEnumerator:(void *)arg1 context:(void *)arg2;
- (long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(BOOL)arg3 stackFramesBuffer:(unsigned long long *)arg4;
- (id)initWithTask:(unsigned int)arg1;
- (unsigned long long)liteModeStackIDforAddress:(unsigned long long)arg1 size:(unsigned long long)arg2;
@property(readonly) BOOL usesLiteMode; // @synthesize usesLiteMode=_usesLiteMode;

@end

