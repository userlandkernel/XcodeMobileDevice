//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol IDETestReport_Test, IDETestReport_TestRun;

@interface _IDETestReportAssertionsOutlineObject : NSObject
{
    id <IDETestReport_Test> _test;
    id <IDETestReport_TestRun> _testRun;
    NSArray *_failureSummaries;
}

- (void).cxx_destruct;
@property(copy) NSArray *failureSummaries; // @synthesize failureSummaries=_failureSummaries;
@property(retain) id <IDETestReport_Test> test; // @synthesize test=_test;
@property(retain) id <IDETestReport_TestRun> testRun; // @synthesize testRun=_testRun;

@end
