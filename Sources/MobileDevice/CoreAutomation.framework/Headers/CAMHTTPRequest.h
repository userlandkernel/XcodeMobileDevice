//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSHost, NSNumber, NSString, NSURL;

@interface CAMHTTPRequest : NSObject
{
    struct __CFHTTPMessage *messageRef;
    NSHost *source;
    NSString *_ipAddress;
}

+ (id)httpVerbFromEnum:(int)arg1;
- (void).cxx_destruct;
@property(readonly) __weak NSString *acceptType;
@property(readonly, copy) NSData *body;
@property(readonly) __weak NSNumber *contentLength;
- (void)dealloc;
- (id)description;
- (id)init;
@property(retain) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
@property(readonly) struct __CFHTTPMessage *messageRef; // @synthesize messageRef;
@property(readonly) int requestMethod;
@property(retain) NSHost *source; // @synthesize source;
@property(readonly, copy) NSURL *url;
- (id)urlArguments;
@property(readonly) NSArray *urlComponents;

@end

