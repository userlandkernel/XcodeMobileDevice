//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYDeviceInfo;

@interface DYAnalyzerEngineFactory : NSObject
{
    DYDeviceInfo *_deviceInfo;
}

+ (id)newAnalyzerEngineFactoryForGraphicsAPI:(unsigned int)arg1 deviceInfo:(id)arg2;
- (void).cxx_destruct;
- (unsigned int)_supportedGraphicsAPI;
- (id)initWithDeviceInfo:(id)arg1;
- (id)newAnalyzerEngine;

@end
