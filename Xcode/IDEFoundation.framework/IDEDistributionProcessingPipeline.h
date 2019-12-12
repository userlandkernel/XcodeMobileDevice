//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEDistributionProcessingPipelineContext, IDEDistributionProcessingStep, NSArray;

@interface IDEDistributionProcessingPipeline : NSObject
{
    NSArray *_pipelineSteps;
    IDEDistributionProcessingStep *_currentStep;
    IDEDistributionProcessingPipelineContext *_context;
}

+ (id)pipelineWithAppContext:(id)arg1;
+ (id)pipelineWithContext:(id)arg1;
+ (id)pipelineWithInAppPurchaseContext:(id)arg1;
- (void).cxx_destruct;
@property(retain) IDEDistributionProcessingPipelineContext *context; // @synthesize context=_context;
@property(retain) IDEDistributionProcessingStep *currentStep; // @synthesize currentStep=_currentStep;
- (id)init;
- (id)initWithPipelineSteps:(id)arg1 context:(id)arg2;
@property(readonly) NSArray *pipelineSteps; // @synthesize pipelineSteps=_pipelineSteps;
- (_Bool)process:(id *)arg1;
- (id)resultsForDistributionItem:(id)arg1;

@end

