//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface XCMenuBreakpointEntry : NSObject
{
    NSMutableArray *breakpoints;
    NSMutableArray *enabledBreakpoints;
    long long enabledState;
}

+ (id)new;
@property(retain) NSMutableArray *breakpoints; // @synthesize breakpoints;
@property(retain) NSMutableArray *enabledBreakpoints; // @synthesize enabledBreakpoints;
@property long long enabledState; // @synthesize enabledState;
- (id)init;

@end
