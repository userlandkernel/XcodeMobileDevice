//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSCore/NSObject-Protocol.h>

@class XCSService;

@protocol XCSServiceConnectionDelegate <NSObject>
- (void)serviceConnectionStatusDidConnect:(XCSService *)arg1;
- (void)serviceConnectionStatusDidDisconnect:(XCSService *)arg1;
@end
