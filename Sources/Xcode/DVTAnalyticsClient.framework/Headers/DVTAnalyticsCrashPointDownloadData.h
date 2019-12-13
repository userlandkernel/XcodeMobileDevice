//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTAnalyticsClient/DVTAnalyticsCrashPointData.h>

@class DVTAnalyticsCrashPointDeviceFamilyDistribution, DVTAnalyticsCrashPointLogList, DVTAnalyticsCrashPointOSVersionDistribution, DVTAnalyticsCrashPointTimeDistribution;

@interface DVTAnalyticsCrashPointDownloadData : DVTAnalyticsCrashPointData
{
    DVTAnalyticsCrashPointOSVersionDistribution *_osVersionDistribution;
    DVTAnalyticsCrashPointDeviceFamilyDistribution *_deviceFamilyDistribution;
    DVTAnalyticsCrashPointTimeDistribution *_crashPointTimeSeries;
    DVTAnalyticsCrashPointLogList *_logList;
}

+ (id)crashPointForSession:(id)arg1 crashPointIdentifier:(id)arg2 distributionOptions:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
- (id)JSONRepresentation;
@property(retain) DVTAnalyticsCrashPointTimeDistribution *crashPointTimeSeries; // @synthesize crashPointTimeSeries=_crashPointTimeSeries;
@property(retain) DVTAnalyticsCrashPointDeviceFamilyDistribution *deviceFamilyDistribution; // @synthesize deviceFamilyDistribution=_deviceFamilyDistribution;
@property(retain) DVTAnalyticsCrashPointLogList *logList; // @synthesize logList=_logList;
@property(retain) DVTAnalyticsCrashPointOSVersionDistribution *osVersionDistribution; // @synthesize osVersionDistribution=_osVersionDistribution;

@end
