//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class XCSBot;

@interface XCSUIBotSummaryStatsFetcher : NSObject
{
    XCSBot *_bot;
    CDUnknownBlockType _statsFetcherCallback;
}

- (void).cxx_destruct;
@property(retain) XCSBot *bot; // @synthesize bot=_bot;
- (void)fetchStatsForTimePeriod:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchStatsSinceDate:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType statsFetcherCallback; // @synthesize statsFetcherCallback=_statsFetcherCallback;

@end

