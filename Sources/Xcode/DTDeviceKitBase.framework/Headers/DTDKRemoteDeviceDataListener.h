//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DTDeviceKitBase/NSNetServiceBrowserDelegate-Protocol.h>
#import <DTDeviceKitBase/NSNetServiceDelegate-Protocol.h>

@class NSString, NSThread;

@interface DTDKRemoteDeviceDataListener : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    struct __CFRunLoop *_listenerRunLoop;
    NSThread *_listenerThread;
    struct _AMDeviceNotificationContext *_deviceNotificationRef;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_rescan;
- (id)allConnections;
- (id)allDevices;
- (void)dealloc;
@property(nonatomic) struct _AMDeviceNotificationContext *deviceNotificationRef; // @synthesize deviceNotificationRef=_deviceNotificationRef;
- (void)enumerateDevicesWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) struct __CFRunLoop *listenerRunLoop; // @synthesize listenerRunLoop=_listenerRunLoop;
@property(retain) NSThread *listenerThread; // @synthesize listenerThread=_listenerThread;
- (void)listenerThreadImplementation;
- (void)presentError:(id)arg1;
- (void)startListening;
- (void)stopListening;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

