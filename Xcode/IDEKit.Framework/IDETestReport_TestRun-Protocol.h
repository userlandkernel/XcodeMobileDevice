//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class IDESchemeActionRunDestinationRecord, IDESchemeActionsInvocationRecord, NSArray, NSImage, NSString;
@protocol IDETestReport_Device;

@protocol IDETestReport_TestRun <NSObject>
@property(readonly, copy, nonatomic) NSString *ide_testReport_testRun_UUID;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_testRun_activities;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_testRun_failureSummaries;
@property(readonly, nonatomic) BOOL ide_testReport_testRun_passed;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_testRun_perfMetrics;
@property(readonly, nonatomic) NSImage *ide_testReport_testRun_statusImage;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testRun_testClassName;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testRun_testName;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testRun_testableBlueprintName;
@property(readonly, copy, nonatomic) NSString *ide_testReport_testRun_testableBlueprintPath;
@property(readonly, nonatomic) id <IDETestReport_Device> ide_testReport_testRun_testedDevice;

@optional
@property(readonly, nonatomic) BOOL ide_testReport_testRun_fetchesSchemeActionsInvocationRecordAsync;
@property(readonly, nonatomic) IDESchemeActionRunDestinationRecord *ide_testReport_testRun_schemeActionRunDestinationRecord;
@property(readonly, nonatomic) IDESchemeActionsInvocationRecord *ide_testReport_testRun_schemeActionsInvocationRecord;
- (void)ide_testReport_testRun_schemeActionsInvocationRecord:(void (^)(IDESchemeActionsInvocationRecord *))arg1;
@end

