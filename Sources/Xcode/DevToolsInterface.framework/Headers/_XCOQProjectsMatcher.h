//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DevToolsInterface/_XCOQMatcher.h>

@class NSMutableArray;

@interface _XCOQProjectsMatcher : _XCOQMatcher
{
    NSMutableArray *_buildFiles;
}

+ (void)initialize;
- (void)_takeProjectFilesForContext:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (void)updateMatches;

@end
