//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDistributionItemProcessingStep.h>

@interface IDEDistributionSymbolsStep : IDEDistributionItemProcessingStep
{
}

- (id)name;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
- (_Bool)runWithError:(id *)arg1;
- (id)shouldProcessSymbolsForItem:(id)arg1 archive:(id)arg2 error:(id *)arg3;
- (_Bool)shouldSkip;

@end

