//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAMSocket, NSArray, NSCondition, NSMutableData, NSString;
@protocol CAMAMDPersistentDelegate, OS_dispatch_queue;

@interface CAMAMDPersistentConnection : NSObject
{
    NSObject<OS_dispatch_queue> *delegateIOQueue;
    NSCondition *responseCondition;
    NSString *_name;
    CDUnknownBlockType _read_handler;
    struct _AMDevice *_device;
    NSString *_service_name;
    id <CAMAMDPersistentDelegate> _delegate;
    CAMSocket *_cam_socket;
    NSMutableData *_dataFragements;
    NSArray *_response;
}

- (void).cxx_destruct;
@property(retain) CAMSocket *cam_socket; // @synthesize cam_socket=_cam_socket;
- (id)composePlist:(id)arg1;
@property(retain) NSMutableData *dataFragements; // @synthesize dataFragements=_dataFragements;
- (void)dealloc;
@property id <CAMAMDPersistentDelegate> delegate; // @synthesize delegate=_delegate;
@property struct _AMDevice *device; // @synthesize device=_device;
- (id)initWithDeviceRef:(struct _AMDevice *)arg1 withService:(id)arg2;
- (void)initializeReadDataHandler;
- (BOOL)isDataCommandResponse:(id)arg1;
- (BOOL)isValid;
@property(copy) NSString *name; // @synthesize name=_name;
- (void)processDataFragments;
- (long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
@property(copy) CDUnknownBlockType read_handler; // @synthesize read_handler=_read_handler;
@property(retain) NSArray *response; // @synthesize response=_response;
- (void *)sendMessage:(void *)arg1 waitForResponseUntilDate:(id)arg2;
@property(copy) NSString *service_name; // @synthesize service_name=_service_name;
- (void)startConnection;
- (void)stopConnection;
- (id)tryComposePlistFrom:(id)arg1;
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;

@end
