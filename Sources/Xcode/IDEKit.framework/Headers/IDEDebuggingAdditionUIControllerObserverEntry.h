//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDECancellableToken, IDELaunchSession, NSString;

@interface IDEDebuggingAdditionUIControllerObserverEntry : NSObject
{
    IDELaunchSession *_launchSession;
    NSString *_uiControllerID;
    IDECancellableToken *_canellableToken;
    CDUnknownBlockType _handler;
}

- (void).cxx_destruct;
@property(readonly) IDECancellableToken *canellableToken; // @synthesize canellableToken=_canellableToken;
@property(readonly) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (id)initWithLaunchSession:(id)arg1 uiControllerID:(id)arg2 handler:(CDUnknownBlockType)arg3;
@property(readonly) __weak IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
@property(readonly) NSString *uiControllerID; // @synthesize uiControllerID=_uiControllerID;

@end
