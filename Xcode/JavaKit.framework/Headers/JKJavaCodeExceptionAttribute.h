//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JKJavaCodeExceptionAttribute : NSObject
{
    unsigned short _startPc;
    unsigned short _endPc;
    unsigned short _handlerPc;
    NSString *_catchType;
}

- (id)caughtExceptionName;
- (void)dealloc;
- (id)description;
- (unsigned short)endPc;
- (unsigned short)handlerPc;
- (id)initWithByteStream:(struct JKByteStream *)arg1 constantPool:(CDStruct_202c1fbd *)arg2;
- (BOOL)isFinallyClause;
- (unsigned short)startPc;

@end
