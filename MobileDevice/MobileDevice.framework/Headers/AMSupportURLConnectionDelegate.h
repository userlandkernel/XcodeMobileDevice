//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MobileDevice/NSURLConnectionDataDelegate-Protocol.h>
#import <MobileDevice/NSURLConnectionDelegate-Protocol.h>

@class NSData, NSDictionary, NSError, NSMutableData, NSString, NSURLResponse;

__attribute__((visibility("hidden")))
@interface AMSupportURLConnectionDelegate : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate>
{
    BOOL requestComplete;
    NSDictionary *options;
    NSURLResponse *response;
    NSMutableData *_data;
    NSError *_error;
}

- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (void)dealloc;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (id)init;
- (id)initWithData:(id)arg1 Options:(id)arg2;
- (id)waitForResponseOrError:(id *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

