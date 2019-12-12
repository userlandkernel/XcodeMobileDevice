//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTimer, XCSService;

@interface XCSCodeCoverageTimedRequest : NSObject
{
    NSString *_base;
    XCSService *_service;
    double _timeout;
    long long _policy;
    id _delegate;
    id _context;
    NSTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *base; // @synthesize base=_base;
- (void)clearTimer;
@property(retain, nonatomic) id context; // @synthesize context=_context;
- (void)dealloc;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (id)initWithURLBase:(id)arg1 service:(id)arg2 timeout:(double)arg3 policy:(long long)arg4 delegate:(id)arg5 context:(id)arg6;
- (void)performRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performRequestWithTimer:(id)arg1;
@property(nonatomic) long long policy; // @synthesize policy=_policy;
@property(retain, nonatomic) XCSService *service; // @synthesize service=_service;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;

@end
