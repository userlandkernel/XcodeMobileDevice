//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class NSArray, NSNumber, NSString;

@protocol IDETestReport_PerfMetric <NSObject>
@property(readonly, nonatomic) double ide_testReport_perfMetric_avg;
@property(readonly, nonatomic) NSNumber *ide_testReport_perfMetric_baseline;
@property(readonly, copy, nonatomic) NSString *ide_testReport_perfMetric_baselineIdentifier;
@property(readonly, copy, nonatomic) NSString *ide_testReport_perfMetric_identifier;
@property(readonly, nonatomic) NSArray *ide_testReport_perfMetric_iterations;
@property(readonly, nonatomic) double ide_testReport_perfMetric_max;
@property(readonly, nonatomic) double ide_testReport_perfMetric_maxPercentImprovement;
@property(readonly, nonatomic) NSNumber *ide_testReport_perfMetric_maxPercentRegression;
@property(readonly, nonatomic) NSNumber *ide_testReport_perfMetric_maxPercentRelativeStandardDeviation;
@property(readonly, nonatomic) double ide_testReport_perfMetric_min;
@property(readonly, copy, nonatomic) NSString *ide_testReport_perfMetric_name;
@property(readonly, nonatomic) double ide_testReport_perfMetric_rsd;
@property(readonly, copy, nonatomic) NSString *ide_testReport_perfMetric_unit;
@end

