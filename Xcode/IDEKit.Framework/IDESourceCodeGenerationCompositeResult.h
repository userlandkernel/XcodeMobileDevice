//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

@interface IDESourceCodeGenerationCompositeResult : NSObject
{
    NSDictionary *_resultsByCounterpart;
}

- (void).cxx_destruct;
- (id)compositeResultByMergingWithCompositeResult:(id)arg1;
@property(readonly) NSSet *counterparts;
@property(readonly) NSSet *counterpartsWithoutErrors;
- (id)description;
- (id)firstCounterpartWithInsertionError;
- (id)initWithResultsByCounterpart:(id)arg1;
- (id)resultForCounterpart:(id)arg1;
@property(readonly) NSDictionary *resultsByCounterpart; // @synthesize resultsByCounterpart=_resultsByCounterpart;
- (id)resultsForCounterparts:(id)arg1;

@end

