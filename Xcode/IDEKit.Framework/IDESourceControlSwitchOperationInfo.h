//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDESourceControlOperationInfo.h>

#import <IDEKit/IDESourceControlBranchingOperationInfoProtocol-Protocol.h>

@class IDESourceControlBranch, NSString;

@interface IDESourceControlSwitchOperationInfo : IDESourceControlOperationInfo <IDESourceControlBranchingOperationInfoProtocol>
{
    IDESourceControlBranch *_newBranch;
    IDESourceControlBranch *_startingBranch;
}

- (void).cxx_destruct;
@property(retain) IDESourceControlBranch *mainBranch; // @synthesize mainBranch=_startingBranch;
@property(retain) IDESourceControlBranch *otherBranch; // @synthesize otherBranch=_newBranch;
- (id)processInfoWithProgressBlock:(CDUnknownBlockType)arg1 isSingleOperation:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

