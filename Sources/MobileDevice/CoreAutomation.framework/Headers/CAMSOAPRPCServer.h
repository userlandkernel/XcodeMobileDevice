//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreAutomation/CAMRPCServer.h>

#import <CoreAutomation/CAMHTTPServerDelegate-Protocol.h>

@class CAMHTTPServer, NSString;
@protocol CAMSOAPRPCServerDelegate;

@interface CAMSOAPRPCServer : CAMRPCServer <CAMHTTPServerDelegate>
{
    id <CAMSOAPRPCServerDelegate> delegate;
    CAMHTTPServer *httpServer;
}

- (void).cxx_destruct;
- (void)dealloc;
@property id <CAMSOAPRPCServerDelegate> delegate; // @synthesize delegate;
- (id)httpServer:(id)arg1 responseForRequest:(id)arg2;
- (id)init;
- (void)start;
- (void)stop;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

