//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEWatchpoint, NSString;

@interface IDEWatchpointNotificationInfo : NSObject
{
    IDEWatchpoint *_watchpoint;
    NSString *_watchpointID;
    NSString *_expression;
    NSString *_oldValue;
    NSString *_newValue;
    NSString *_thread;
}

- (void).cxx_destruct;
- (id)consoleOutputStyleDisplayString;
@property(readonly) NSString *expression; // @synthesize expression=_expression;
- (id)initWithWatchpoint:(id)arg1 watchpointID:(id)arg2 expression:(id)arg3 oldValue:(id)arg4 newValue:(id)arg5 thread:(id)arg6;
@property(readonly) NSString *newValue; // @synthesize newValue=_newValue;
@property(readonly) NSString *oldValue; // @synthesize oldValue=_oldValue;
@property(readonly) NSString *thread; // @synthesize thread=_thread;
- (id)titleStyleDisplayString;
@property(readonly) IDEWatchpoint *watchpoint; // @synthesize watchpoint=_watchpoint;
@property(readonly) NSString *watchpointID; // @synthesize watchpointID=_watchpointID;

@end

