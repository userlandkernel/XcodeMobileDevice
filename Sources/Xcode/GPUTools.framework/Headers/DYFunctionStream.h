//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface DYFunctionStream : NSObject
{
}

- (void)clearResetMarker;
- (void)enumerateFunctionsUsingBlock:(CDUnknownBlockType)arg1;
- (const struct Function *)peekFunction;
- (const struct Function *)readFunction;
- (unsigned long long)readFunctions:(struct Function *)arg1 maxCount:(unsigned long long)arg2;
- (void)reset;
- (void)resetToFunction:(const struct Function *)arg1;
- (void)setResetMarker;

@end
