//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDESourceControlMergeController.h>

@class NSMutableSet;

@interface IDESourceControlConflictResolutionController : IDESourceControlMergeController
{
    BOOL _shouldDisableMergeSaving;
    NSMutableSet *_submodesToNotify;
}

+ (int)binaryConflictMergeDirection:(id)arg1;
+ (BOOL)isBinaryConflictResolutionMergeData:(id)arg1;
+ (void)replaceItemAtFilePath:(id)arg1 withFileWrapper:(id)arg2;
- (void).cxx_destruct;
- (void)addSubmodeToNotify:(id)arg1;
- (void)completeConflictResolution;
- (void)removeSubmodeToNotify:(id)arg1;
@property BOOL shouldDisableMergeSaving; // @synthesize shouldDisableMergeSaving=_shouldDisableMergeSaving;

@end

