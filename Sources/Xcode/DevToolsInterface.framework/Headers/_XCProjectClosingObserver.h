//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface _XCProjectClosingObserver : NSObject
{
    BOOL _projectDidClose;
}

+ (id)observerForProject:(id)arg1;
- (void)_projectDidClose:(id)arg1;
- (void)dealloc;
- (id)initWithProject:(id)arg1;
- (BOOL)projectDidClose;

@end
