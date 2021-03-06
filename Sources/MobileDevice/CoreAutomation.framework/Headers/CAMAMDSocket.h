//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreAutomation/CAMSocketProtocol-Protocol.h>

@class CAMAMDLockdownService, CAMAMDServiceConnection, NSString;

@interface CAMAMDSocket : NSObject <CAMSocketProtocol>
{
    CAMAMDServiceConnection *_service_connection;
    CAMAMDLockdownService *_lockdown_service;
    NSString *_service_name;
}

- (void).cxx_destruct;
- (unsigned long long)close;
- (id)copyServiceConnection;
- (void)dealloc;
- (id)initWithAMDevice:(struct _AMDevice *)arg1 withServiceName:(id)arg2;
@property(retain) CAMAMDLockdownService *lockdown_service; // @synthesize lockdown_service=_lockdown_service;
- (unsigned long long)open;
- (int)recv:(id *)arg1 withMaxLength:(unsigned int)arg2;
- (int)send:(id)arg1;
@property(retain) CAMAMDServiceConnection *service_connection; // @synthesize service_connection=_service_connection;
@property(copy) NSString *service_name; // @synthesize service_name=_service_name;
- (int)underlyingSocket;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

