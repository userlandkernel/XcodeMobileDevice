//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;
@protocol CAMSimpleAutomationProtocol;

@interface SAMBlock : NSObject
{
    int flags;
    int reserved;
    CDUnknownFunctionPointerType invoke;
    struct BlockDescriptor *descriptor;
    id block;
    NSNumber *blockId;
    NSString *signature;
    id <CAMSimpleAutomationProtocol> simple;
}

@property(retain, nonatomic) id block; // @synthesize block;
@property(readonly, nonatomic) void *blockFunctionPointer;
@property(retain, nonatomic) NSNumber *blockId; // @synthesize blockId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)encodeToDictionary;
- (void)forwardInvocation:(id)arg1;
- (id)initWithBlock:(id)arg1 simple:(id)arg2;
- (id)initWithBlockId:(id)arg1 flags:(int)arg2 signature:(id)arg3 simple:(id)arg4;
- (id)initWithDictionary:(id)arg1 simple:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
@property(retain, nonatomic) NSString *signature; // @synthesize signature;
@property(retain, nonatomic) id <CAMSimpleAutomationProtocol> simple; // @synthesize simple;

@end

