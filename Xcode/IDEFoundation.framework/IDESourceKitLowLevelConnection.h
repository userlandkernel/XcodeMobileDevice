//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDESourceKitLowLevelConnection : NSObject
{
    struct _sourcekit_connection_s *_obj;
}

- (void)cancel;
- (void)dealloc;
- (struct _sourcekit_uid_s *)getUIDFromString:(const char *)arg1;
- (id)init;
- (void)sendCallbackReply:(id)arg1;
- (void)sendRequest:(id)arg1 queue:(id)arg2 receiver:(CDUnknownBlockType)arg3;
- (id)sendRequestSync:(id)arg1;
- (id)sendRequestSync:(id)arg1 error:(id *)arg2;
- (void)setCallbackHandler:(id)arg1 receiver:(CDUnknownBlockType)arg2;
- (void)setNotificationHandler:(id)arg1 receiver:(CDUnknownBlockType)arg2;
- (struct _sourcekit_connection_s *)sourceKitObject;
- (void)start;

@end

