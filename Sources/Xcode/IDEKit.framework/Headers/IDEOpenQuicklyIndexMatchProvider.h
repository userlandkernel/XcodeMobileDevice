//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEOpenQuicklyMatchProvider.h>

@class DVTOpenQuicklyPattern, NSArray;

@interface IDEOpenQuicklyIndexMatchProvider : IDEOpenQuicklyMatchProvider
{
    DVTOpenQuicklyPattern *_previousPattern;
    DVTOpenQuicklyPattern *_originalPattern;
    NSArray *_originalMatches;
    unsigned int _currentGeneration;
    BOOL _idle;
}

+ (id)sharedIndexQueryQueue;
- (void).cxx_destruct;
- (id)collectDataForInput:(id)arg1 index:(id)arg2 currentGeneration:(unsigned int *)arg3 localGeneration:(unsigned int)arg4;
- (void)contextDidChange;
- (void)finishCalculatingMatches;
- (id)initWithSearchContext:(id)arg1;
@property(getter=isIdle) BOOL idle; // @synthesize idle=_idle;
- (id)matchesFromCollectedData:(id)arg1;
- (int)minimumQueryStringLength;
@property(copy) NSArray *originalMatches; // @synthesize originalMatches=_originalMatches;
@property(retain) DVTOpenQuicklyPattern *originalPattern; // @synthesize originalPattern=_originalPattern;
@property(retain) DVTOpenQuicklyPattern *previousPattern; // @synthesize previousPattern=_previousPattern;
- (void)restartQuery;
- (void)startCalculatingMatches;

@end

