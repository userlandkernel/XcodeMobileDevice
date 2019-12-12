//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEActivityLogSection.h>

@class NSString;

@interface IDEActivityLogUnitTestSection : IDEActivityLogSection
{
    NSString *_testsPassedString;
    NSString *_durationString;
    NSString *_summaryString;
    NSString *_suiteName;
    NSString *_testName;
    NSString *_performanceTestOutputString;
    long long _testsPassedCount;
}

+ (id)defaultLogSectionDomainType;
+ (Class)logRecorderClass;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy) NSString *durationString; // @synthesize durationString=_durationString;
- (id)dvt_initFromDeserializer:(id)arg1;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)initUnitTestWithTitle:(id)arg1 location:(id)arg2;
@property(copy) NSString *performanceTestOutputString; // @synthesize performanceTestOutputString=_performanceTestOutputString;
@property(copy) NSString *suiteName; // @synthesize suiteName=_suiteName;
@property(copy) NSString *summaryString; // @synthesize summaryString=_summaryString;
@property(copy) NSString *testName; // @synthesize testName=_testName;
@property long long testsPassedCount; // @synthesize testsPassedCount=_testsPassedCount;
@property(copy) NSString *testsPassedString; // @synthesize testsPassedString=_testsPassedString;

@end

