//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DTXProxyChannel;

@interface _DTXProxy : NSObject
{
    DTXProxyChannel *_proxyChannel;
}

- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithChannel:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
