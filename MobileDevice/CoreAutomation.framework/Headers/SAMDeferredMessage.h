//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCondition;

@interface SAMDeferredMessage : NSObject
{
    NSArray *message;
    NSCondition *waitLock;
    id returnValue;
    BOOL sent;
}

- (void).cxx_destruct;
- (id)description;
- (id)encodeDeferredMessage:(id)arg1;
- (id)initWithMessage:(id)arg1 waitLock:(id)arg2;
@property(retain, nonatomic) NSArray *message; // @synthesize message;
@property(retain, nonatomic) id returnValue; // @synthesize returnValue;
@property(nonatomic) BOOL sent;
- (void)setAndNotifyReturnValue:(id)arg1;
@property(retain, nonatomic) NSCondition *waitLock; // @synthesize waitLock;

@end
