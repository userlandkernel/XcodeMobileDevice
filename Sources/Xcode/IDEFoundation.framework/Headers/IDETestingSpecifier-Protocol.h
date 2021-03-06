//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/NSObject-Protocol.h>

@class IDEDeviceAppDataReference, IDELocationScenarioReference, IDETest, NSArray, NSSet;
@protocol IDETestable;

@protocol IDETestingSpecifier <NSObject>
@property(readonly, copy) NSSet *adHocTests;
@property(retain) IDEDeviceAppDataReference *deviceAppDataReference;
- (void)disableTest:(IDETest *)arg1;
- (void)enableTest:(IDETest *)arg1;
@property(retain) IDELocationScenarioReference *locationScenarioReference;
@property BOOL skipped;
@property(readonly, copy) NSArray *skippedTests;
- (id <IDETestable>)testable;
@end

