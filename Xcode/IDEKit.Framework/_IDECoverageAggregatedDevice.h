//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IDECoverage_Device;

@interface _IDECoverageAggregatedDevice : NSObject
{
    id <IDECoverage_Device> _device;
    unsigned long long _aggregatedCoveragePct;
}

- (void).cxx_destruct;
@property unsigned long long aggregatedCoveragePct; // @synthesize aggregatedCoveragePct=_aggregatedCoveragePct;
- (id)description;
@property(retain) id <IDECoverage_Device> device; // @synthesize device=_device;

@end

