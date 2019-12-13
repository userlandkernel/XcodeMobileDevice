//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDESchemeActionAbstractTestSummaryObject.h>

#import <IDEFoundation/IDESchemeActionTestSummaryContainer-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface IDESchemeActionTestSummaryGroup : IDESchemeActionAbstractTestSummaryObject <IDESchemeActionTestSummaryContainer>
{
    NSMutableArray *_subtests;
    NSString *_identifier;
    double _duration;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)addNewTestSummaryGroupWithName:(id)arg1 identifier:(id)arg2;
- (void)addTestSummary:(id)arg1;
@property(readonly) NSArray *containedTestSummaries;
- (id)dictionaryRepresentation;
@property double duration; // @synthesize duration=_duration;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2;
- (void)loadAttachmentsFromDirectory:(id)arg1;
@property(readonly) NSMutableArray *mutableContainedTestSummaries;
- (unsigned long long)status;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSMutableArray *mutableSubtests; // @dynamic mutableSubtests;
@property(copy) NSArray *subtests; // @dynamic subtests;
@property(readonly) Class superclass;

@end
