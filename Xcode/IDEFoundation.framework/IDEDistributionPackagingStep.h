//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDistributionStep.h>

@interface IDEDistributionPackagingStep : IDEDistributionStep
{
}

+ (id)availableOptionsForPropertyList;
- (id)itemToProcessingResultsMapFromPipeline:(id)arg1;
- (BOOL)loadFromPropertyList:(id)arg1 error:(id *)arg2;
- (id)pipeline;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
@property(readonly) BOOL wantsDryRun;

@end

