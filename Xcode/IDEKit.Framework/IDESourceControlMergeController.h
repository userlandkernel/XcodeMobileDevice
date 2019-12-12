//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTFilePath, DVTStackBacktrace, NSString;

@interface IDESourceControlMergeController : NSObject <DVTInvalidation>
{
    DVTFilePath *_mergeDataPath;
}

+ (void)copyItemAtFilePath:(id)arg1 toFilePath:(id)arg2;
+ (void)initialize;
+ (id)mergeDataDictionary:(id)arg1;
+ (void)moveItemAtFilePath:(id)arg1 toFilePath:(id)arg2;
- (void).cxx_destruct;
- (void)_validateMergeData:(id)arg1;
- (id)mergeDataForFilePath:(id)arg1;
@property(readonly) DVTFilePath *mergeDataPath;
- (id)pathToFileWrapper:(id)arg1 inMergeData:(id)arg2;
- (void)primitiveInvalidate;
- (void)removeMergeDataForFilePath:(id)arg1;
- (void)setMergeData:(id)arg1 forFilePath:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

