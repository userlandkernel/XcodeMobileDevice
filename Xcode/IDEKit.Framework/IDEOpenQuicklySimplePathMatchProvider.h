//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEOpenQuicklyMatchProvider.h>

@class DVTOpenQuicklyPattern, IDEOpenQuicklyDataSource, NSArray;
@protocol DVTCancellable;

@interface IDEOpenQuicklySimplePathMatchProvider : IDEOpenQuicklyMatchProvider
{
    NSArray *_searchPaths;
    id <DVTCancellable> _dataSourceMatchObserver;
    DVTOpenQuicklyPattern *_previousPattern;
    IDEOpenQuicklyDataSource *_dataSource;
}

+ (id)keyPathsForValuesAffectingIdle;
- (void).cxx_destruct;
- (void)contextDidChange;
@property(retain) IDEOpenQuicklyDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)finishCalculatingMatches;
- (id)initWithSearchContext:(id)arg1;
- (BOOL)isIdle;
@property(retain) DVTOpenQuicklyPattern *previousPattern; // @synthesize previousPattern=_previousPattern;
- (void)startCalculatingMatches;

@end

