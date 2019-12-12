//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDevice, IDERunContextManager, NSAlert, NSError, NSString, NSWindow;

@interface IDEDeviceUnavailableAlertHelper : NSObject
{
    NSError *_unavailabilityError;
    NSString *_deviceIdentifier;
    NSString *_deviceName;
    NSWindow *_window;
    CDUnknownBlockType _availabilityHandler;
    NSAlert *_alert;
    IDERunContextManager *_runContextManager;
    DVTDevice *_device;
}

- (void).cxx_destruct;
- (id)_genericUnavailabilityError;
@property(retain) NSAlert *alert; // @synthesize alert=_alert;
@property(copy) CDUnknownBlockType availabilityHandler; // @synthesize availabilityHandler=_availabilityHandler;
@property(retain) DVTDevice *device; // @synthesize device=_device;
@property(retain) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (id)initWithDevice:(id)arg1 runContextManager:(id)arg2 window:(id)arg3 availabilityHandler:(CDUnknownBlockType)arg4;
@property(retain) IDERunContextManager *runContextManager; // @synthesize runContextManager=_runContextManager;
@property(retain, nonatomic) NSError *unavailabilityError; // @synthesize unavailabilityError=_unavailabilityError;
@property(retain) NSWindow *window; // @synthesize window=_window;
- (void)showAlert;

@end

