//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTOperation, IDEExecutionOperationTracker, NSArray, NSMutableArray, NSString;

@interface IDEQueuedOperationInfo : NSObject
{
    NSMutableArray *_buildOperations;
    BOOL _isRunning;
    NSString *_commandName;
    IDEExecutionOperationTracker *_tracker;
}

- (void).cxx_destruct;
@property(readonly, copy) NSArray *buildOperations;
@property(copy) NSString *commandName; // @synthesize commandName=_commandName;
- (BOOL)containsBuildOperation:(id)arg1;
- (id)description;
- (id)initWithCommandName:(id)arg1 tracker:(id)arg2;
- (id)initWithCommandName:(id)arg1 tracker:(id)arg2 buildOperations:(id)arg3;
@property BOOL isRunning; // @synthesize isRunning=_isRunning;
- (void)removeBuildOperation:(id)arg1;
@property(retain) IDEExecutionOperationTracker *tracker; // @synthesize tracker=_tracker;
@property(readonly) DVTOperation *topLevelOperation;

@end

