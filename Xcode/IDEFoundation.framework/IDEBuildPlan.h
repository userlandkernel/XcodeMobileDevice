//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSSet, NSString;

@interface IDEBuildPlan : NSObject
{
    NSString *_debugName;
    NSMutableArray *_bucketList;
    BOOL _isImmutable;
    NSSet *_productArtifactNodes;
}

- (void).cxx_destruct;
- (void)addBucket:(id)arg1;
@property(readonly) NSArray *bucketList;
@property(readonly) NSString *debugName; // @synthesize debugName=_debugName;
- (id)description;
- (id)initWithDebugName:(id)arg1;
- (BOOL)isImmutable;
- (void)makeImmutable;
@property(copy) NSSet *productArtifactNodes; // @synthesize productArtifactNodes=_productArtifactNodes;
- (void)writeDebugRepresentationToFileAtPath:(id)arg1 format:(long long)arg2 basePath:(id)arg3;

@end

