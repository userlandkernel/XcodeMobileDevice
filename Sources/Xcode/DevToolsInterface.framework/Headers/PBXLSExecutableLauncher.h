//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <DevToolsInterface/XCUnretainedReferent-Protocol.h>

@class NSMutableArray, PBXLSLaunchSession, XCUnretainedReference;

@interface PBXLSExecutableLauncher : NSObject <XCUnretainedReferent>
{
    PBXLSLaunchSession *_launchSession;
    NSMutableArray *_adaptors;
    XCUnretainedReference *_myUnretainedReference;
}

- (id)_argumentsFromAdaptors;
- (void)_updateAdaptorEnvironmentsToDictionary:(id)arg1;
- (id)adaptors;
- (void)adaptorsConfigure;
- (void)adaptorsConfigureUserInterface;
- (void)adaptorsExecutableDidFinish;
- (void)adaptorsExecutableDidStart;
- (void)adaptorsInstanciate;
- (void)adaptorsUnconfigureUserInterface;
- (id)byteStreamConsumerToExecutable;
- (id)byteStreamFromExecutable;
- (void)cleanup;
- (void)dealloc;
- (id)executable;
- (id)executableArguments;
- (id)executableDirectory;
- (id)executableEnvironment;
- (id)executablePath;
- (int)executablePlatformExitInformation;
- (int)executableProcessID;
- (int)executableTerminationStatus;
- (id)init;
- (BOOL)launch;
- (id)launchConfig;
- (id)launchSession;
- (void)setLaunchSession:(id)arg1;
- (void)setupLauncher;
- (void)stop;
- (void)stopImmediately;
- (BOOL)supportsCrashCatching;
- (id)unretainedReference;
- (void)userInterfaceWillBeRemoved;

@end

