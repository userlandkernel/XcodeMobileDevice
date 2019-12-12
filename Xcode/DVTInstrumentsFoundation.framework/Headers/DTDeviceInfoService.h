//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTXConnectionServices/DTXService.h>

#import <DVTInstrumentsFoundation/DTDeviceInfoServiceAuthorizedAPI-Protocol.h>

@class NSString;

@interface DTDeviceInfoService : DTXService <DTDeviceInfoServiceAuthorizedAPI>
{
    struct __CFDictionary *_trackingSymbolicatorsByPid;
    struct kpep_db *_kpepDB;
}

+ (BOOL)isApplication:(id)arg1;
+ (void)registerCapabilities:(id)arg1;
- (id)cpDeviceInfoAsXML;
- (id)cpDeviceName;
- (id)cpKDebugEventsAsXML;
- (void)dealloc;
- (id)directoryListingForPath:(id)arg1;
- (id)execnameForPid:(id)arg1;
- (id)hardwareInformation;
- (int)hwCPU64BitCapable;
- (int)hwCPUsubtype;
- (int)hwCPUtype;
- (id)iconDescriptionFileForAppPath:(id)arg1;
- (id)iconDescriptionForIconPath:(id)arg1;
- (id)initWithChannel:(id)arg1;
- (id)isRunningPid:(id)arg1;
- (id)kpepDatabase;
- (id)lookupSysctl:(const char *)arg1;
- (id)machKernelName;
- (id)machTimeInfo;
- (void)messageReceived:(id)arg1;
- (id)nameForGID:(id)arg1;
- (id)nameForUID:(id)arg1;
- (id)networkInformation;
- (int)numberOfCpus;
- (int)numberOfPhysicalCpus;
- (id)pidIs64Bit:(id)arg1;
- (id)productVersion;
- (id)runningProcesses;
- (int)speedOfCpus;
- (id)symbolicatorSignatureForPid:(id)arg1 trackingSelector:(id)arg2;
- (id)symbolicatorSignaturesForExpiredPids;
- (id)systemInformation;
- (id)traceCodesFile;
- (id)uniqueID;
- (void)unregisterSignatureTrackingForPid:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
