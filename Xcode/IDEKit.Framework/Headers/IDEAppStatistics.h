//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDEAppStatistics : NSObject
{
}

+ (id)_diskTypeFor:(struct __DADisk *)arg1 withDiskManager:(id)arg2;
+ (id)_diskTypes;
+ (unsigned long long)_memInUse;
+ (void)_performAppReportWithStartupDuration:(double)arg1;
+ (void)_reportLVStatus;
+ (id)_setOfNavigatedSchemesUsedByDocViewer;
+ (id)_sipStatus;
+ (unsigned long long)_totalRam;
+ (void)recordAppAboutToShutdown;
+ (void)recordAppDidShutdown:(id)arg1;
+ (void)recordAppUsedGPUDebugger;
+ (void)recordDocDownloadInteraction:(id)arg1;
+ (void)recordDocViewNavigationForURL:(id)arg1;
+ (void)scheduleAppReportWithStartTime:(double)arg1;

@end
